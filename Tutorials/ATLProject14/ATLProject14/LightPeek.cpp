// LightPeek.cpp : Implementation of CLightPeek

#include "pch.h"
#include "LightPeek.h"
#include <iostream>
#pragma comment(lib, "windowsapp")
#include <atlsafe.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Globalization.h>

// CLightPeek

HRESULT CLightPeek::Print()
{
	winrt::init_apartment(winrt::apartment_type::multi_threaded);
	return S_OK;
}