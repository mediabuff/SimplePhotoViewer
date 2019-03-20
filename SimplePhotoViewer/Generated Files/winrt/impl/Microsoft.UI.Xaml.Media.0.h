﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

enum class ApplicationTheme;
struct DependencyProperty;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Media {

enum class AcrylicBackgroundSource : int32_t
{
    HostBackdrop = 0,
    Backdrop = 1,
};

enum class RevealBrushState : int32_t
{
    Normal = 0,
    PointerOver = 1,
    Pressed = 2,
};

struct IAcrylicBrush;
struct IAcrylicBrushFactory;
struct IAcrylicBrushStatics;
struct IRevealBackgroundBrush;
struct IRevealBackgroundBrushFactory;
struct IRevealBorderBrush;
struct IRevealBorderBrushFactory;
struct IRevealBrush;
struct IRevealBrushProtectedFactory;
struct IRevealBrushStatics;
struct AcrylicBrush;
struct RevealBackgroundBrush;
struct RevealBorderBrush;
struct RevealBrush;

}

namespace winrt::impl {

template <> struct category<Microsoft::UI::Xaml::Media::IAcrylicBrush>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IAcrylicBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IAcrylicBrushStatics>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBackgroundBrush>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBorderBrush>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBorderBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBrush>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBrushProtectedFactory>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::IRevealBrushStatics>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Media::AcrylicBrush>{ using type = class_category; };
template <> struct category<Microsoft::UI::Xaml::Media::RevealBackgroundBrush>{ using type = class_category; };
template <> struct category<Microsoft::UI::Xaml::Media::RevealBorderBrush>{ using type = class_category; };
template <> struct category<Microsoft::UI::Xaml::Media::RevealBrush>{ using type = class_category; };
template <> struct category<Microsoft::UI::Xaml::Media::AcrylicBackgroundSource>{ using type = enum_category; };
template <> struct category<Microsoft::UI::Xaml::Media::RevealBrushState>{ using type = enum_category; };
template <> struct name<Microsoft::UI::Xaml::Media::IAcrylicBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IAcrylicBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IAcrylicBrushFactory>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IAcrylicBrushFactory" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IAcrylicBrushStatics>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IAcrylicBrushStatics" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBackgroundBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBackgroundBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBackgroundBrushFactory" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBorderBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBorderBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBorderBrushFactory>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBorderBrushFactory" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBrushProtectedFactory>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBrushProtectedFactory" }; };
template <> struct name<Microsoft::UI::Xaml::Media::IRevealBrushStatics>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.IRevealBrushStatics" }; };
template <> struct name<Microsoft::UI::Xaml::Media::AcrylicBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.AcrylicBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::RevealBackgroundBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.RevealBackgroundBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::RevealBorderBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.RevealBorderBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::RevealBrush>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.RevealBrush" }; };
template <> struct name<Microsoft::UI::Xaml::Media::AcrylicBackgroundSource>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.AcrylicBackgroundSource" }; };
template <> struct name<Microsoft::UI::Xaml::Media::RevealBrushState>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Media.RevealBrushState" }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IAcrylicBrush>{ static constexpr guid value{ 0x26861C81,0x72F4,0x5065,{ 0xB1,0x44,0xE9,0xEC,0x7F,0xCE,0x86,0xA9 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IAcrylicBrushFactory>{ static constexpr guid value{ 0x80173353,0x611D,0x5A02,{ 0x88,0x64,0x1A,0xAA,0x27,0x9D,0xFF,0x1C } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IAcrylicBrushStatics>{ static constexpr guid value{ 0x3162419C,0xCABC,0x5B4E,{ 0x9C,0x64,0x78,0x63,0x54,0x14,0x72,0x57 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBackgroundBrush>{ static constexpr guid value{ 0x3741D912,0xFC83,0x5C92,{ 0xA2,0x2F,0xEF,0xC2,0x95,0x88,0xB3,0x73 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ static constexpr guid value{ 0x7E6F2B0A,0xE70D,0x529F,{ 0x80,0x97,0x43,0xE0,0x23,0xF2,0x94,0x3B } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBorderBrush>{ static constexpr guid value{ 0xF85DBFCB,0x2EC6,0x5C73,{ 0xA8,0xBE,0x38,0x64,0xC9,0x80,0xB9,0x17 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBorderBrushFactory>{ static constexpr guid value{ 0xC677BDC2,0xF045,0x532C,{ 0xBB,0x13,0x3C,0xEE,0xE1,0x91,0x43,0xB2 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBrush>{ static constexpr guid value{ 0x9D1DDB86,0xADFA,0x5BAE,{ 0xBF,0x9A,0x3E,0xDD,0x03,0x1E,0x61,0xC2 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBrushProtectedFactory>{ static constexpr guid value{ 0x46A94F5B,0x8ABD,0x5571,{ 0xB0,0x49,0x7F,0x76,0xE3,0xF9,0x67,0xC9 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Media::IRevealBrushStatics>{ static constexpr guid value{ 0x0AFEE634,0x34F3,0x50F5,{ 0xA5,0x09,0x21,0xCE,0xF2,0x66,0x76,0x7E } }; };
template <> struct default_interface<Microsoft::UI::Xaml::Media::AcrylicBrush>{ using type = Microsoft::UI::Xaml::Media::IAcrylicBrush; };
template <> struct default_interface<Microsoft::UI::Xaml::Media::RevealBackgroundBrush>{ using type = Microsoft::UI::Xaml::Media::IRevealBackgroundBrush; };
template <> struct default_interface<Microsoft::UI::Xaml::Media::RevealBorderBrush>{ using type = Microsoft::UI::Xaml::Media::IRevealBorderBrush; };
template <> struct default_interface<Microsoft::UI::Xaml::Media::RevealBrush>{ using type = Microsoft::UI::Xaml::Media::IRevealBrush; };

template <> struct abi<Microsoft::UI::Xaml::Media::IAcrylicBrush>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_BackgroundSource(Microsoft::UI::Xaml::Media::AcrylicBackgroundSource* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_BackgroundSource(Microsoft::UI::Xaml::Media::AcrylicBackgroundSource value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TintColor(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintOpacity(double* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TintOpacity(double value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintTransitionDuration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TintTransitionDuration(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AlwaysUseFallback(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AlwaysUseFallback(bool value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IAcrylicBrushFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IAcrylicBrushStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_BackgroundSourceProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintColorProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintOpacityProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TintTransitionDurationProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AlwaysUseFallbackProperty(void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBackgroundBrush>{ struct type : IInspectable
{
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBorderBrush>{ struct type : IInspectable
{
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBorderBrushFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBrush>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Color(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Color(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TargetTheme(Windows::UI::Xaml::ApplicationTheme* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TargetTheme(Windows::UI::Xaml::ApplicationTheme value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AlwaysUseFallback(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AlwaysUseFallback(bool value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBrushProtectedFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Media::IRevealBrushStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ColorProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TargetThemeProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AlwaysUseFallbackProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StateProperty(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL SetState(void* element, Microsoft::UI::Xaml::Media::RevealBrushState value) noexcept = 0;
    virtual int32_t WINRT_CALL GetState(void* element, Microsoft::UI::Xaml::Media::RevealBrushState* result) noexcept = 0;
};};

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IAcrylicBrush
{
    Microsoft::UI::Xaml::Media::AcrylicBackgroundSource BackgroundSource() const;
    void BackgroundSource(Microsoft::UI::Xaml::Media::AcrylicBackgroundSource const& value) const;
    Windows::UI::Color TintColor() const;
    void TintColor(Windows::UI::Color const& value) const;
    double TintOpacity() const;
    void TintOpacity(double value) const;
    Windows::Foundation::TimeSpan TintTransitionDuration() const;
    void TintTransitionDuration(Windows::Foundation::TimeSpan const& value) const;
    bool AlwaysUseFallback() const;
    void AlwaysUseFallback(bool value) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IAcrylicBrush> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IAcrylicBrush<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IAcrylicBrushFactory
{
    Microsoft::UI::Xaml::Media::AcrylicBrush CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IAcrylicBrushFactory> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IAcrylicBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IAcrylicBrushStatics
{
    Windows::UI::Xaml::DependencyProperty BackgroundSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty TintColorProperty() const;
    Windows::UI::Xaml::DependencyProperty TintOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty TintTransitionDurationProperty() const;
    Windows::UI::Xaml::DependencyProperty AlwaysUseFallbackProperty() const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IAcrylicBrushStatics> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IAcrylicBrushStatics<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBackgroundBrush
{
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBackgroundBrush> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBackgroundBrush<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBackgroundBrushFactory
{
    Microsoft::UI::Xaml::Media::RevealBackgroundBrush CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBackgroundBrushFactory> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBackgroundBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBorderBrush
{
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBorderBrush> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBorderBrush<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBorderBrushFactory
{
    Microsoft::UI::Xaml::Media::RevealBorderBrush CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBorderBrushFactory> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBorderBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBrush
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::UI::Xaml::ApplicationTheme TargetTheme() const;
    void TargetTheme(Windows::UI::Xaml::ApplicationTheme const& value) const;
    bool AlwaysUseFallback() const;
    void AlwaysUseFallback(bool value) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBrush> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBrush<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBrushProtectedFactory
{
    Microsoft::UI::Xaml::Media::RevealBrush CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBrushProtectedFactory> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBrushProtectedFactory<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Media_IRevealBrushStatics
{
    Windows::UI::Xaml::DependencyProperty ColorProperty() const;
    Windows::UI::Xaml::DependencyProperty TargetThemeProperty() const;
    Windows::UI::Xaml::DependencyProperty AlwaysUseFallbackProperty() const;
    Windows::UI::Xaml::DependencyProperty StateProperty() const;
    void SetState(Windows::UI::Xaml::UIElement const& element, Microsoft::UI::Xaml::Media::RevealBrushState const& value) const;
    Microsoft::UI::Xaml::Media::RevealBrushState GetState(Windows::UI::Xaml::UIElement const& element) const;
};
template <> struct consume<Microsoft::UI::Xaml::Media::IRevealBrushStatics> { template <typename D> using type = consume_Microsoft_UI_Xaml_Media_IRevealBrushStatics<D>; };

}