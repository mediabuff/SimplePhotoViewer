﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once
#include "Microsoft.Graphics.Canvas.0.h"
#include "Microsoft.Graphics.Canvas.UI.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.0.h"
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.0.h"
#include "Microsoft.Graphics.Canvas.UI.Xaml.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml {

struct WINRT_EBO ICanvasAnimatedControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasAnimatedControl>,
    impl::require<ICanvasAnimatedControl, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    ICanvasAnimatedControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasAnimatedDrawEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasAnimatedDrawEventArgs>
{
    ICanvasAnimatedDrawEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasAnimatedDrawEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasAnimatedDrawEventArgsFactory>
{
    ICanvasAnimatedDrawEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasAnimatedUpdateEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasAnimatedUpdateEventArgs>
{
    ICanvasAnimatedUpdateEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasAnimatedUpdateEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasAnimatedUpdateEventArgsFactory>
{
    ICanvasAnimatedUpdateEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasControl>,
    impl::require<ICanvasControl, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    ICanvasControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDrawEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDrawEventArgs>
{
    ICanvasDrawEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDrawEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDrawEventArgsFactory>
{
    ICanvasDrawEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasImageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasImageSource>,
    impl::require<ICanvasImageSource, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    ICanvasImageSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasImageSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasImageSourceFactory>
{
    ICanvasImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasRegionsInvalidatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasRegionsInvalidatedEventArgs>
{
    ICanvasRegionsInvalidatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSwapChainPanel :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSwapChainPanel>
{
    ICanvasSwapChainPanel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasVirtualControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasVirtualControl>,
    impl::require<ICanvasVirtualControl, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    ICanvasVirtualControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasVirtualImageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasVirtualImageSource>,
    impl::require<ICanvasVirtualImageSource, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    ICanvasVirtualImageSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasVirtualImageSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasVirtualImageSourceFactory>
{
    ICanvasVirtualImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

}
