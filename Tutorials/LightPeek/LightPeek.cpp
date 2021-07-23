// LightPeek.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "LightPeek_i.h"


using namespace ATL;


class CLightPeekModule : public ATL::CAtlExeModuleT< CLightPeekModule >
{
public :
	DECLARE_LIBID(LIBID_LightPeekLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_LIGHTPEEK, "{f36e690c-830d-4fb8-9fd0-f6beb44376f3}")
};

CLightPeekModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

