// Message.h: CMessage 的声明

#pragma once
#include "resource.h"       // 主符号
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Media.Ocr.h>
#include "DllSurrogates_i.h"

using namespace ATL;

// CMessage

class ATL_NO_VTABLE CMessage :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMessage, &CLSID_Message>,
	public IMessage
{
public:
	CMessage(): engine(NULL)
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMessage)
	COM_INTERFACE_ENTRY(IMessage)
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
	STDMETHODIMP InitWCapture(BSTR) override;
	STDMETHODIMP InitApartment() override;

private:
	winrt::Windows::Media::Ocr::OcrEngine engine;
};

OBJECT_ENTRY_AUTO(__uuidof(Message), CMessage)
