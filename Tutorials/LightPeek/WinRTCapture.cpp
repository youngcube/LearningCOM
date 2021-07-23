﻿// WinRTCapture.cpp : Implementation of CWinRTCapture

#include "pch.h"
#include "WinRTCapture.h"
#include <iostream>
#pragma comment(lib, "windowsapp")
#include <atlsafe.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Globalization.h>

// CWinRTCapture

using namespace std;

CWinRTCapture::CWinRTCapture() : engine(NULL)
{
}


HRESULT CWinRTCapture::InitWCapture(VARIANT bs)
{
    engine = winrt::Windows::Media::Ocr::OcrEngine::TryCreateFromLanguage(winrt::Windows::Globalization::Language(bs.bstrVal));
    if (engine != NULL)
    {
        return S_OK;
    }
    return E_NOTIMPL;
}

HRESULT CWinRTCapture::InitApartment()
{
    try
    {
        winrt::init_apartment();
        return S_OK;
    }
    catch (...)
    {
    }
    return E_FAIL;
}

HRESULT CWinRTCapture::Capture(SAFEARRAY* imgVar, DWORD imgLength, int xPos, int yPos, VARIANT* line, VARIANT* curPos)
{
    // VariantInit(line);
    // VariantInit(curPos);
    // line->vt = VT_BSTR;
    // wstring aa = L"����";
    // line->bstrVal = SysAllocStringLen(aa.data(), aa.size());
    // curPos->vt = VT_INT;
    // curPos->intVal = 1234;
    //
    // return S_OK;

    unsigned char* img;
    HRESULT hr = SafeArrayAccessData(imgVar, (void HUGEP**) & img);
    if (FAILED(hr))
    {
        return E_FAIL;
    }

    hr = SafeArrayUnaccessData(imgVar);
    if (FAILED(hr))
    {
        return E_FAIL;
    }

    InnerWCaptureResult capresult;
    winrt::array_view<unsigned char> fromRange{ img, imgLength };
    //array_view<unsigned char>   fromRange(buffer);
    winrt::Windows::Storage::Streams::InMemoryRandomAccessStream stream;
    winrt::Windows::Storage::Streams::DataWriter dataWriter{ stream.GetOutputStreamAt(0) };
    dataWriter.WriteBytes(fromRange);
    dataWriter.StoreAsync().get();

    winrt::Windows::Graphics::Imaging::BitmapDecoder decoder = winrt::Windows::Graphics::Imaging::BitmapDecoder::CreateAsync(stream).get();

    winrt::Windows::Graphics::Imaging::SoftwareBitmap bitmap = decoder.GetSoftwareBitmapAsync().get();
    winrt::Windows::Media::Ocr::OcrResult result = (engine.RecognizeAsync(bitmap)).get();

    for (size_t i = 0; i < result.Lines().Size(); i++)
    {
        auto thisLine = result.Lines().GetAt(i);
        int lastMatchIdx = -1;
        for (size_t j = 0; j < thisLine.Words().Size(); j++)
        {
            winrt::Windows::Foundation::Rect r = thisLine.Words().GetAt(j).BoundingRect();
            if (r.Y < yPos && (r.Y + r.Height) > yPos)
            {
                lastMatchIdx = i;
                if (r.X < xPos && (r.X + r.Width) > xPos) {
                    capresult.line = thisLine.Text().c_str();
                    wstring thisWord = thisLine.Words().GetAt(j).Text().c_str();
                    size_t found = capresult.line.find(thisWord);
                    if (found != wstring::npos) {
                        capresult.curPos = found;
                    }
                    else {
                        capresult.curPos = capresult.line.size() / 2;
                    }
                    wrapResultForPointer(capresult, line, curPos);
                    return S_OK;
                }
            }
        }

        if (lastMatchIdx > 0 && capresult.line.empty())
        {
            capresult.line = result.Lines().GetAt(lastMatchIdx).Text().c_str();
            capresult.curPos = capresult.line.size() / 2;
            wrapResultForPointer(capresult, line, curPos);
            return S_OK;
        }
    }

    capresult.line = result.Text().c_str();
    wrapResultForPointer(capresult, line, curPos);
    return S_OK;
}

void CWinRTCapture::wrapResultForPointer(InnerWCaptureResult result, VARIANT* line, VARIANT* curPos)
{
    VariantInit(line);
    VariantInit(curPos);

    line->vt = VT_BSTR;
    line->bstrVal = SysAllocStringLen(result.line.data(), result.line.size());

    curPos->vt = VT_INT;
    curPos->intVal = result.curPos;
}


