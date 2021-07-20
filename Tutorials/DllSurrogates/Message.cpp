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

// CMessage

