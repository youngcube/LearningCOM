// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210714.1

#pragma once
#ifndef WINRT_Windows_Devices_HumanInterfaceDevice_0_H
#define WINRT_Windows_Devices_HumanInterfaceDevice_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    enum class FileAccessMode : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Devices::HumanInterfaceDevice
{
    enum class HidCollectionType : int32_t
    {
        Physical = 0,
        Application = 1,
        Logical = 2,
        Report = 3,
        NamedArray = 4,
        UsageSwitch = 5,
        UsageModifier = 6,
        Other = 7,
    };
    enum class HidReportType : int32_t
    {
        Input = 0,
        Output = 1,
        Feature = 2,
    };
    struct IHidBooleanControl;
    struct IHidBooleanControlDescription;
    struct IHidBooleanControlDescription2;
    struct IHidCollection;
    struct IHidDevice;
    struct IHidDeviceStatics;
    struct IHidFeatureReport;
    struct IHidInputReport;
    struct IHidInputReportReceivedEventArgs;
    struct IHidNumericControl;
    struct IHidNumericControlDescription;
    struct IHidOutputReport;
    struct HidBooleanControl;
    struct HidBooleanControlDescription;
    struct HidCollection;
    struct HidDevice;
    struct HidFeatureReport;
    struct HidInputReport;
    struct HidInputReportReceivedEventArgs;
    struct HidNumericControl;
    struct HidNumericControlDescription;
    struct HidOutputReport;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidCollectionType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::HumanInterfaceDevice::HidReportType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl> = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection> = L"Windows.Devices.HumanInterfaceDevice.HidCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice> = L"Windows.Devices.HumanInterfaceDevice.HidDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport> = L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport> = L"Windows.Devices.HumanInterfaceDevice.HidInputReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> = L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl> = L"Windows.Devices.HumanInterfaceDevice.HidNumericControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> = L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport> = L"Windows.Devices.HumanInterfaceDevice.HidOutputReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidCollectionType> = L"Windows.Devices.HumanInterfaceDevice.HidCollectionType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::HidReportType> = L"Windows.Devices.HumanInterfaceDevice.HidReportType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection> = L"Windows.Devices.HumanInterfaceDevice.IHidCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice> = L"Windows.Devices.HumanInterfaceDevice.IHidDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> = L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> = L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport> = L"Windows.Devices.HumanInterfaceDevice.IHidInputReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> = L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl> = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport> = L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>{ 0x524DF48A,0x3695,0x408C,{ 0xBB,0xA2,0xE2,0xEB,0x5A,0xBF,0xBC,0x20 } }; // 524DF48A-3695-408C-BBA2-E2EB5ABFBC20
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>{ 0x6196E543,0x29D8,0x4A2A,{ 0x86,0x83,0x84,0x9E,0x20,0x7B,0xBE,0x31 } }; // 6196E543-29D8-4A2A-8683-849E207BBE31
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>{ 0xC8EED2EA,0x8A77,0x4C36,{ 0xAA,0x00,0x5F,0xF0,0x44,0x9D,0x3E,0x73 } }; // C8EED2EA-8A77-4C36-AA00-5FF0449D3E73
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection>{ 0x7189F5A3,0x32F1,0x46E3,{ 0xBE,0xFD,0x44,0xD2,0x66,0x3B,0x7E,0x6A } }; // 7189F5A3-32F1-46E3-BEFD-44D2663B7E6A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice>{ 0x5F8A14E7,0x2200,0x432E,{ 0x95,0xDA,0xD0,0x9B,0x87,0xD5,0x74,0xA8 } }; // 5F8A14E7-2200-432E-95DA-D09B87D574A8
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>{ 0x9E5981E4,0x9856,0x418C,{ 0x9F,0x73,0x77,0xDE,0x0C,0xD8,0x57,0x54 } }; // 9E5981E4-9856-418C-9F73-77DE0CD85754
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>{ 0x841D9B79,0x5AE5,0x46E3,{ 0x82,0xEF,0x1F,0xEC,0x5C,0x89,0x42,0xF4 } }; // 841D9B79-5AE5-46E3-82EF-1FEC5C8942F4
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport>{ 0xC35D0E50,0xF7E7,0x4E8D,{ 0xB2,0x3E,0xCA,0xBB,0xE5,0x6B,0x90,0xE9 } }; // C35D0E50-F7E7-4E8D-B23E-CABBE56B90E9
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>{ 0x7059C5CB,0x59B2,0x4DC2,{ 0x98,0x5C,0x0A,0xDC,0x61,0x36,0xFA,0x2D } }; // 7059C5CB-59B2-4DC2-985C-0ADC6136FA2D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl>{ 0xE38A12A5,0x35A7,0x4B75,{ 0x89,0xC8,0xFB,0x1F,0x28,0xB1,0x08,0x23 } }; // E38A12A5-35A7-4B75-89C8-FB1F28B10823
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>{ 0x638D5E86,0x1D97,0x4C75,{ 0x92,0x7F,0x5F,0xF5,0x8B,0xA0,0x5E,0x32 } }; // 638D5E86-1D97-4C75-927F-5FF58BA05E32
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport>{ 0x62CB2544,0xC896,0x4463,{ 0x93,0xC1,0xDF,0x9D,0xB0,0x53,0xC4,0x50 } }; // 62CB2544-C896-4463-93C1-DF9DB053C450
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription; };
    template <> struct default_interface<winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport>{ using type = winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport; };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsActive(bool) noexcept = 0;
            virtual int32_t __stdcall get_ControlDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ParentCollections(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAbsolute(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Version(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall GetInputReportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetInputReportByIdAsync(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFeatureReportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetFeatureReportByIdAsync(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOutputReport(void**) noexcept = 0;
            virtual int32_t __stdcall CreateOutputReportById(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFeatureReport(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFeatureReportById(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall SendOutputReportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendFeatureReportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlDescriptions(int32_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlDescriptions(int32_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_InputReportReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputReportReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorVidPid(uint16_t, uint16_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActivatedBooleanControls(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitionedBooleanControls(void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsGrouped(bool*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaledValue(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaledValue(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ControlDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalMinimum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalMaximum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalMinimum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalMaximum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnitExponent(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Unit(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsAbsolute(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNull(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ParentCollections(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsageId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        WINRT_IMPL_AUTO(void) IsActive(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription) ControlDescription() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) ReportId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidReportType) ReportType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsageId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection>) ParentCollections() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAbsolute() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidCollectionType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) UsageId() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidDevice
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) VendorId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) Version() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsageId() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport>) GetInputReportAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport>) GetInputReportAsync(uint16_t reportId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport>) GetFeatureReportAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport>) GetFeatureReportAsync(uint16_t reportId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport) CreateOutputReport() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport) CreateOutputReport(uint16_t reportId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport) CreateFeatureReport() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport) CreateFeatureReport(uint16_t reportId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<uint32_t>) SendOutputReportAsync(winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport const& outputReport) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<uint32_t>) SendFeatureReportAsync(winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport const& featureReport) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>) GetBooleanControlDescriptions(winrt::Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>) GetNumericControlDescriptions(winrt::Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::event_token) InputReportReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice, winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
        using InputReportReceived_revoker = impl::event_revoker<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice, &impl::abi_t<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice>::remove_InputReportReceived>;
        [[nodiscard]] InputReportReceived_revoker InputReportReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice, winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
        WINRT_IMPL_AUTO(void) InputReportReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice>) FromIdAsync(param::hstring const& deviceId, winrt::Windows::Storage::FileAccessMode const& accessMode) const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) Data() const;
        WINRT_IMPL_AUTO(void) Data(winrt::Windows::Storage::Streams::IBuffer const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) Data() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl>) ActivatedBooleanControls() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl>) TransitionedBooleanControls() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport) Report() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGrouped() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsageId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) Value() const;
        WINRT_IMPL_AUTO(void) Value(int64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) ScaledValue() const;
        WINRT_IMPL_AUTO(void) ScaledValue(int64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription) ControlDescription() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) ReportId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidReportType) ReportType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsagePage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) UsageId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) LogicalMinimum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) LogicalMaximum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) PhysicalMinimum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) PhysicalMaximum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) UnitExponent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Unit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAbsolute() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasNull() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection>) ParentCollections() const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) Data() const;
        WINRT_IMPL_AUTO(void) Data(winrt::Windows::Storage::Streams::IBuffer const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl) GetBooleanControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl) GetNumericControlByDescription(winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>;
    };
}
#endif
