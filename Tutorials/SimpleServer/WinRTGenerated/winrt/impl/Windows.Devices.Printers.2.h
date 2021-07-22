// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210714.1

#pragma once
#ifndef WINRT_Windows_Devices_Printers_2_H
#define WINRT_Windows_Devices_Printers_2_H
#include "winrt/impl/Windows.Devices.Printers.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct __declspec(empty_bases) Print3DDevice : winrt::Windows::Devices::Printers::IPrint3DDevice
    {
        Print3DDevice(std::nullptr_t) noexcept {}
        Print3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Printers::IPrint3DDevice(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) PrintSchema : winrt::Windows::Devices::Printers::IPrintSchema
    {
        PrintSchema(std::nullptr_t) noexcept {}
        PrintSchema(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Printers::IPrintSchema(ptr, take_ownership_from_abi) {}
    };
}
#endif