#include "pch.h"
#include "MessageBox.h"

#include <iostream>
#pragma comment(lib, "windowsapp")
#include <atlsafe.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Globalization.h>


using namespace std;

MessageImpl::MessageImpl(): engine(NULL)
{
	
}

HRESULT MessageImpl::InitWCapture(BSTR bs)
{
    if (bs == nullptr) {
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

HRESULT MessageImpl::InitApartment()
{
    winrt::init_apartment();
    return S_OK;
}

HRESULT MessageImpl::CaptureSample()
{
    return p_capture(NULL, 0, 0, 0, NULL);
}


HRESULT MessageImpl::p_capture(unsigned char* img, DWORD imgLength, int xPos, int yPos, IDLCaptureResult* pointerResult)
{
    winrt::init_apartment();
    InnerWCaptureResult capresult;
    if (engine == NULL) {
        engine = winrt::Windows::Media::Ocr::OcrEngine::TryCreateFromLanguage(winrt::Windows::Globalization::Language(L"en"));
        // return S_FALSE;
    }

    // winrt::array_view<unsigned char> fromRange{ img, imgLength };
    // //array_view<unsigned char>   fromRange(buffer);
    // winrt::Windows::Storage::Streams::InMemoryRandomAccessStream stream;
    // winrt::Windows::Storage::Streams::DataWriter dataWriter{ stream.GetOutputStreamAt(0) };
    // dataWriter.WriteBytes(fromRange);
    // dataWriter.StoreAsync().get();
    //
    // winrt::Windows::Graphics::Imaging::BitmapDecoder decoder = winrt::Windows::Graphics::Imaging::BitmapDecoder::CreateAsync(stream).get();

    std::wstring uriImage{ L"http://127.0.0.1:8000/test11.bmp" };
    // Create a Uri object from the URI string.
    winrt::Windows::Foundation::Uri uri{ uriImage };

    winrt::Windows::Storage::Streams::RandomAccessStreamReference streamRef = winrt::Windows::Storage::Streams::RandomAccessStreamReference::CreateFromUri(uri);
    winrt::Windows::Storage::Streams::IRandomAccessStream stream = streamRef.OpenReadAsync().get();
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
                    wrapResultForPointer(capresult, pointerResult);
                    return S_OK;
                }
            }
        }

        if (lastMatchIdx > 0 && capresult.line.empty())
        {
            capresult.line = result.Lines().GetAt(lastMatchIdx).Text().c_str();
            capresult.curPos = capresult.line.size() / 2;
            wrapResultForPointer(capresult, pointerResult);
            return S_OK;
        }
    }

    capresult.line = result.Text().c_str();
    wrapResultForPointer(capresult, pointerResult);
    return S_OK;
}

HRESULT MessageImpl::Capture(SAFEARRAY* imgVar, DWORD imgLength, int xPos, int yPos, IDLCaptureResult* pointerResult)
{
    unsigned char* img;
    SafeArrayAccessData(imgVar, (void HUGEP**) & img);
    return p_capture(img, imgLength, xPos, yPos, pointerResult);
}

HRESULT MessageImpl::CapturePointer(unsigned char* img, DWORD imgLength, int xPos, int yPos, IDLCaptureResult* pointerResult)
{
    return p_capture(img, imgLength, xPos, yPos, pointerResult);
}

void MessageImpl::wrapResultForPointer(InnerWCaptureResult result, IDLCaptureResult* pointer)
{
    pointer->line = SysAllocStringLen(result.line.data(), result.line.size());
    pointer->curPos = result.curPos;
}
