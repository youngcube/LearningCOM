// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210714.1

#pragma once
#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_2_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking
{
    struct CommunicationBlockingAccessManager
    {
        CommunicationBlockingAccessManager() = delete;
        [[nodiscard]] static auto IsBlockingActive();
        static auto IsBlockedNumberAsync(param::hstring const& number);
        static auto ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers);
        static auto ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers);
        static auto ShowBlockedCallsUI();
        static auto ShowBlockedMessagesUI();
    };
    struct CommunicationBlockingAppManager
    {
        CommunicationBlockingAppManager() = delete;
        [[nodiscard]] static auto IsCurrentAppActiveBlockingApp();
        static auto ShowCommunicationBlockingSettingsUI();
        static auto RequestSetAsActiveBlockingAppAsync();
    };
}
#endif
