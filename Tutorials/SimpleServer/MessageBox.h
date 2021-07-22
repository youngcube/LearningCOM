#pragma once
#include "SimpleServer_i.h"
#include <atlcom.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Media.Ocr.h>

using namespace ATL;

struct InnerWCaptureResult
{
    std::wstring line;
    int curPos;
};

class MessageImpl
    : public IMessageBox
    , public CComObjectRoot
    , public CComCoClass<MessageImpl, &CLSID_MessageBoxClass>
{
public:
    MessageImpl();
    DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLESERVER);
    BEGIN_COM_MAP(MessageImpl)
        COM_INTERFACE_ENTRY(IMessageBox)
    END_COM_MAP()

    STDMETHODIMP InitWCapture(BSTR) override;
    STDMETHODIMP InitApartment() override;
    STDMETHODIMP CaptureSample() override;
    STDMETHODIMP Capture(SAFEARRAY*, DWORD, int, int, IDLCaptureResult*) override;
    STDMETHODIMP CapturePointer(unsigned char*, DWORD, int, int, IDLCaptureResult*) override;

private:
    winrt::Windows::Media::Ocr::OcrEngine engine;
    void wrapResultForPointer(InnerWCaptureResult result, IDLCaptureResult* pointer);
    STDMETHODIMP p_capture(unsigned char*, DWORD, int, int, IDLCaptureResult*);
};

OBJECT_ENTRY_AUTO(CLSID_MessageBoxClass, MessageImpl);
