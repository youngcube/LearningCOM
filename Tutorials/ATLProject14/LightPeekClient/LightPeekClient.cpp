#define _WIN32_DCOM

#include <objbase.h>
// #include "ATLProject14_i.h"
// #include "ATLProject14_i.c"
// #import "ATLProject14.tlb" named_guids
#import "ATLProject14.dll" named_guids
#include <atlcomcli.h>
using namespace ATL;

// extern "C" const GUID __declspec(selectany) CLSID_WCaptureX =
// { 0x8f267988,0x0ca4,0x418c,{0x8f,0x94,0xb4,0xbc,0x58,0x62,0xb3,0x90} };

int main()
{
    HRESULT hr = CoInitialize(NULL);
    if (SUCCEEDED(hr))
    {
        {
            CComPtr<ATLProject14Lib::ILightPeek> cpMessage;
            hr = cpMessage.CoCreateInstance(ATLProject14Lib::CLSID_LightPeek);
            if (SUCCEEDED(hr))
            {
	            hr = cpMessage->Print();
                CComVariant var(L"HELLO");
            }
            
            // hr = CoCreateInstance(ATLProject11Lib::CLSID_WinRTOcrCapture, NULL, CLSCTX_LOCAL_SERVER, ATLProject11Lib::IID_IWinRTOcrCapture, (void**)&cpMessage);
            
        }
        CoUninitialize();
    }
    return hr;
}
