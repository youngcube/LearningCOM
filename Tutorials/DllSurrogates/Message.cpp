// Message.cpp: CMessage 的实现

#include "pch.h"
#include "Message.h"
#include <iostream>
#pragma comment(lib, "windowsapp")

#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Globalization.h>

using namespace std;

HRESULT CMessage::InitWCapture(BSTR bs)
{
    if (bs == nullptr){
        return S_FALSE;
    }
    wstring lang(bs, SysStringLen(bs));
    engine = winrt::Windows::Media::Ocr::OcrEngine::TryCreateFromLanguage(winrt::Windows::Globalization::Language(lang));
    if (engine != NULL)
    {
        return S_OK;
    }
    return S_FALSE;
}

HRESULT CMessage::InitApartment()
{
    winrt::init_apartment();
    return S_OK;
}

struct InnerWCaptureResult
{
    std::wstring line;
    int curPos;
};

HRESULT CMessage::Capture(unsigned char* img, DWORD imgLength, int xPos, int yPos, WCaptureResult* pointerResult)
{
    InnerWCaptureResult capresult;
    if (engine == NULL) {
        return S_FALSE;
    }

    winrt::array_view<unsigned char const> fromRange{ img, imgLength };
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
                    return S_OK;
                    //return capresult;
                }
            }
        }

        if (lastMatchIdx > 0 && capresult.line.empty())
        {
            capresult.line = result.Lines().GetAt(lastMatchIdx).Text().c_str();
            capresult.curPos = capresult.line.size() / 2;
            //return capresult;
            return S_OK;
        }
    }

    capresult.line = result.Text().c_str();
    //return capresult;
    return S_OK;
}

// CMessage

