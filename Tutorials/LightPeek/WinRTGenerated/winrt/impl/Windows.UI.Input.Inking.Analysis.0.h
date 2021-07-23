// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210714.1

#pragma once
#ifndef WINRT_Windows_UI_Input_Inking_Analysis_0_H
#define WINRT_Windows_UI_Input_Inking_Analysis_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Point;
    struct Rect;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking
{
    struct InkStroke;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Analysis
{
    enum class InkAnalysisDrawingKind : int32_t
    {
        Drawing = 0,
        Circle = 1,
        Ellipse = 2,
        Triangle = 3,
        IsoscelesTriangle = 4,
        EquilateralTriangle = 5,
        RightTriangle = 6,
        Quadrilateral = 7,
        Rectangle = 8,
        Square = 9,
        Diamond = 10,
        Trapezoid = 11,
        Parallelogram = 12,
        Pentagon = 13,
        Hexagon = 14,
    };
    enum class InkAnalysisNodeKind : int32_t
    {
        UnclassifiedInk = 0,
        Root = 1,
        WritingRegion = 2,
        Paragraph = 3,
        Line = 4,
        InkWord = 5,
        InkBullet = 6,
        InkDrawing = 7,
        ListItem = 8,
    };
    enum class InkAnalysisStatus : int32_t
    {
        Updated = 0,
        Unchanged = 1,
    };
    enum class InkAnalysisStrokeKind : int32_t
    {
        Auto = 0,
        Writing = 1,
        Drawing = 2,
    };
    struct IInkAnalysisInkBullet;
    struct IInkAnalysisInkDrawing;
    struct IInkAnalysisInkWord;
    struct IInkAnalysisLine;
    struct IInkAnalysisListItem;
    struct IInkAnalysisNode;
    struct IInkAnalysisParagraph;
    struct IInkAnalysisResult;
    struct IInkAnalysisRoot;
    struct IInkAnalysisWritingRegion;
    struct IInkAnalyzer;
    struct IInkAnalyzerFactory;
    struct InkAnalysisInkBullet;
    struct InkAnalysisInkDrawing;
    struct InkAnalysisInkWord;
    struct InkAnalysisLine;
    struct InkAnalysisListItem;
    struct InkAnalysisNode;
    struct InkAnalysisParagraph;
    struct InkAnalysisResult;
    struct InkAnalysisRoot;
    struct InkAnalysisWritingRegion;
    struct InkAnalyzer;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkBullet";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkDrawing";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisInkWord";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisLine";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisListItem";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisNode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisParagraph";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisRoot";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisWritingRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer> = L"Windows.UI.Input.Inking.Analysis.InkAnalyzer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisDrawingKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisNodeKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStatus> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind> = L"Windows.UI.Input.Inking.Analysis.InkAnalysisStrokeKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkBullet";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkDrawing";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisInkWord";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisLine";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisListItem";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisNode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisParagraph";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisRoot";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion> = L"Windows.UI.Input.Inking.Analysis.IInkAnalysisWritingRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer> = L"Windows.UI.Input.Inking.Analysis.IInkAnalyzer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory> = L"Windows.UI.Input.Inking.Analysis.IInkAnalyzerFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>{ 0xEE049368,0x6110,0x4136,{ 0x95,0xF9,0xEE,0x80,0x9F,0xC2,0x00,0x30 } }; // EE049368-6110-4136-95F9-EE809FC20030
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>{ 0x6A85ED1F,0x1FE4,0x4E15,{ 0x89,0x8C,0x8E,0x11,0x23,0x77,0xE0,0x21 } }; // 6A85ED1F-1FE4-4E15-898C-8E112377E021
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>{ 0x4BD228AD,0x83AF,0x4034,{ 0x8F,0x3B,0xF8,0x68,0x7D,0xFF,0xF4,0x36 } }; // 4BD228AD-83AF-4034-8F3B-F8687DFFF436
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>{ 0xA06D048D,0x2B8D,0x4754,{ 0xAD,0x5A,0xD0,0x87,0x11,0x93,0xA9,0x56 } }; // A06D048D-2B8D-4754-AD5A-D0871193A956
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>{ 0xB4E3C23F,0xC4C3,0x4C3A,{ 0xA1,0xA6,0x9D,0x85,0x54,0x7E,0xE5,0x86 } }; // B4E3C23F-C4C3-4C3A-A1A6-9D85547EE586
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>{ 0x30831F05,0x5F64,0x4A2C,{ 0xBA,0x37,0x4F,0x48,0x87,0x87,0x95,0x74 } }; // 30831F05-5F64-4A2C-BA37-4F4887879574
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>{ 0xD9AD045C,0x0CD1,0x4DD4,{ 0xA6,0x8B,0xEB,0x1F,0x12,0xB3,0xD7,0x27 } }; // D9AD045C-0CD1-4DD4-A68B-EB1F12B3D727
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>{ 0x8948BA79,0xA243,0x4AA3,{ 0xA2,0x94,0x1F,0x98,0xBD,0x0F,0xF5,0x80 } }; // 8948BA79-A243-4AA3-A294-1F98BD0FF580
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>{ 0x3FB6A3C4,0x2FDE,0x4061,{ 0x85,0x02,0xA9,0x0F,0x32,0x54,0x5B,0x84 } }; // 3FB6A3C4-2FDE-4061-8502-A90F32545B84
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>{ 0xDD6D6231,0xBD16,0x4663,{ 0xB5,0xAE,0x94,0x1D,0x30,0x43,0xEF,0x5B } }; // DD6D6231-BD16-4663-B5AE-941D3043EF5B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer>{ 0xF12B8F95,0x0866,0x4DC5,{ 0x8C,0x77,0xF8,0x86,0x14,0xDF,0xE3,0x8C } }; // F12B8F95-0866-4DC5-8C77-F88614DFE38C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>{ 0x29138686,0x1963,0x49D8,{ 0x95,0x89,0xE1,0x43,0x84,0xC7,0x69,0xE3 } }; // 29138686-1963-49D8-9589-E14384C769E3
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer>{ using type = winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer; };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DrawingKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Center(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextAlternates(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndentLevel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_RotatedBoundingRect(void**) noexcept = 0;
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall GetStrokeIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
            virtual int32_t __stdcall FindNodes(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecognizedText(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnalysisRoot(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsAnalyzing(bool*) noexcept = 0;
            virtual int32_t __stdcall AddDataForStroke(void*) noexcept = 0;
            virtual int32_t __stdcall AddDataForStrokes(void*) noexcept = 0;
            virtual int32_t __stdcall ClearDataForAllStrokes() noexcept = 0;
            virtual int32_t __stdcall RemoveDataForStroke(uint32_t) noexcept = 0;
            virtual int32_t __stdcall RemoveDataForStrokes(void*) noexcept = 0;
            virtual int32_t __stdcall ReplaceDataForStroke(void*) noexcept = 0;
            virtual int32_t __stdcall SetStrokeDataKind(uint32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AnalyzeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAnalyzer(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkBullet
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkBullet<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkDrawing
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind) DrawingKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) Center() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Point>) Points() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkDrawing<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkWord
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) TextAlternates() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisInkWord<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisLine
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) IndentLevel() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisLine>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisLine<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisListItem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisListItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisNode
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) BoundingRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Point>) RotatedBoundingRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>) Children() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode) Parent() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<uint32_t>) GetStrokeIds() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisNode<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisParagraph
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisParagraph<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStatus) Status() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisResult>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisRoot
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>) FindNodes(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind const& nodeKind) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisRoot<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisWritingRegion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RecognizedText() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalysisWritingRegion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot) AnalysisRoot() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAnalyzing() const;
        WINRT_IMPL_AUTO(void) AddDataForStroke(winrt::Windows::UI::Input::Inking::InkStroke const& stroke) const;
        WINRT_IMPL_AUTO(void) AddDataForStrokes(param::iterable<winrt::Windows::UI::Input::Inking::InkStroke> const& strokes) const;
        WINRT_IMPL_AUTO(void) ClearDataForAllStrokes() const;
        WINRT_IMPL_AUTO(void) RemoveDataForStroke(uint32_t strokeId) const;
        WINRT_IMPL_AUTO(void) RemoveDataForStrokes(param::iterable<uint32_t> const& strokeIds) const;
        WINRT_IMPL_AUTO(void) ReplaceDataForStroke(winrt::Windows::UI::Input::Inking::InkStroke const& stroke) const;
        WINRT_IMPL_AUTO(void) SetStrokeDataKind(uint32_t strokeId, winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind const& strokeKind) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>) AnalyzeAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzerFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer) CreateAnalyzer() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Analysis_IInkAnalyzerFactory<D>;
    };
}
#endif
