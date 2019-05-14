﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/Windows.Storage.h"
#include "winrt/Windows.Storage.FileProperties.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Data.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Media.Imaging.h"
#include "winrt/Windows.UI.Composition.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Media.h"
#include "winrt/SimplePhotoViewer.h"

namespace winrt::SimplePhotoViewer::implementation {

template <typename D, typename... I>
struct WINRT_EBO DirectoryItem_base : implements<D, SimplePhotoViewer::IDirectoryItem, Windows::UI::Xaml::Data::INotifyPropertyChanged, I...>
{
    using base_type = DirectoryItem_base;
    using class_type = SimplePhotoViewer::DirectoryItem;
    using implements_type = typename DirectoryItem_base::implements_type;
    using implements_type::implements_type;
    
#if _MSC_VER < 1914
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, default_interface<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<default_interface<class_type>>(*this)));
        return result;
    }
#else
    operator impl::producer_ref<class_type> const() const noexcept
    {
        return { to_abi<default_interface<class_type>>(this) };
    }
#endif

    hstring GetRuntimeClassName() const
    {
        return L"SimplePhotoViewer.DirectoryItem";
    }
};

}

namespace winrt::SimplePhotoViewer::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO DirectoryItemT : implements<D, Windows::Foundation::IActivationFactory, SimplePhotoViewer::IDirectoryItemFactory, I...>
{
    using instance_type = SimplePhotoViewer::DirectoryItem;

    hstring GetRuntimeClassName() const
    {
        return L"SimplePhotoViewer.DirectoryItem";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        throw hresult_not_implemented();
    }

    SimplePhotoViewer::DirectoryItem CreateInstance(hstring const& itemName, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& subItems, Windows::Storage::StorageFolder const& itemFolder)
    {
        return make<T>(itemName, subItems, itemFolder);
    }

    SimplePhotoViewer::DirectoryItem CreateInstance2(hstring const& itemName, Windows::Storage::StorageFolder const& itemFolder)
    {
        return make<T>(itemName, itemFolder);
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_DIRECTORYITEM_XAML_G_H) || __has_include("DirectoryItem.xaml.g.h")

#include "DirectoryItem.xaml.g.h"

#else

namespace winrt::SimplePhotoViewer::implementation
{
    template <typename D, typename... I>
    using DirectoryItemT = DirectoryItem_base<D, I...>;
}

#endif
