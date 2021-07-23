// WinRTCapture.h : Declaration of the CWinRTCapture

#pragma once
#include "resource.h"       // main symbols

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Media.Ocr.h>
#include "LightPeek_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

struct InnerWCaptureResult
{
	std::wstring line;
	int curPos;
};


// CWinRTCapture

class ATL_NO_VTABLE CWinRTCapture :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CWinRTCapture, &CLSID_WinRTCapture>,
	public IWinRTCapture
{
public:
	CWinRTCapture();

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CWinRTCapture)
	COM_INTERFACE_ENTRY(IWinRTCapture)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHODIMP InitWCapture(VARIANT lang) override;
	STDMETHODIMP InitApartment() override;
	STDMETHODIMP Capture(SAFEARRAY* imgVar, DWORD imgLength, int xPos, int yPos, VARIANT* line, VARIANT* curPos) override;


private:
	winrt::Windows::Media::Ocr::OcrEngine engine;
	void wrapResultForPointer(InnerWCaptureResult result, VARIANT* line, VARIANT* curPos);
};

OBJECT_ENTRY_AUTO(__uuidof(WinRTCapture), CWinRTCapture)
