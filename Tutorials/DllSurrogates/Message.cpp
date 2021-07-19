// Message.cpp: CMessage 的实现

#include "pch.h"
#include "Message.h"
#include <iostream>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Media.Ocr.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Media.Ocr.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Globalization.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace std;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;

HRESULT CMessage::InitWCapture(BSTR bs)
{
    if (bs == nullptr){
        return S_FALSE;
    }
    wstring lang(bs, SysStringLen(bs));
    engine = OcrEngine::TryCreateFromLanguage(Windows::Globalization::Language(lang));
    if (engine != NULL)
    {
        return S_OK;
    }
    return S_FALSE;
}

HRESULT CMessage::InitApartment()
{
    init_apartment();
    return S_OK;
}

// CMessage

