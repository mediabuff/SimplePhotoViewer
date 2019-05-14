﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/SimplePhotoViewer.1.h"

WINRT_EXPORT namespace winrt::SimplePhotoViewer {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::SimplePhotoViewer {

struct WINRT_EBO DetailPage :
    SimplePhotoViewer::IDetailPage,
    impl::base<DetailPage, Windows::UI::Xaml::Controls::Page, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<DetailPage, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IPage, Windows::UI::Xaml::Controls::IPageOverrides, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9>
{
    DetailPage(std::nullptr_t) noexcept {}
    DetailPage();
};

struct WINRT_EBO DirectoryItem :
    SimplePhotoViewer::IDirectoryItem,
    impl::require<DirectoryItem, Windows::UI::Xaml::Data::INotifyPropertyChanged>
{
    DirectoryItem(std::nullptr_t) noexcept {}
    DirectoryItem(param::hstring const& itemName, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& subItems, Windows::Storage::StorageFolder const& itemFolder);
    DirectoryItem(param::hstring const& itemName, Windows::Storage::StorageFolder const& itemFolder);
};

struct WINRT_EBO ExplorerItemTemplateSelector :
    SimplePhotoViewer::IExplorerItemTemplateSelector,
    impl::base<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::DataTemplateSelector>,
    impl::require<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector2, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2, Windows::UI::Xaml::IElementFactory>
{
    ExplorerItemTemplateSelector(std::nullptr_t) noexcept {}
    ExplorerItemTemplateSelector();
    using impl::consume_t<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector>::SelectTemplate;
    using impl::consume_t<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelector2>::SelectTemplate;
    using impl::consume_t<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides>::SelectTemplateCore;
    using impl::consume_t<ExplorerItemTemplateSelector, Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2>::SelectTemplateCore;
    using SimplePhotoViewer::IExplorerItemTemplateSelector::SelectTemplateCore;
};

struct WINRT_EBO ImageSku :
    SimplePhotoViewer::IImageSku,
    impl::require<ImageSku, Windows::UI::Xaml::Data::INotifyPropertyChanged>
{
    ImageSku(std::nullptr_t) noexcept {}
    ImageSku(Windows::Storage::FileProperties::ImageProperties const& imageProps, Windows::Storage::StorageFile const& imageFile, param::hstring const& name, param::hstring const& type, Windows::UI::Xaml::Media::Imaging::BitmapImage const& imageThumbnail, param::hstring const& nameWithType);
    ImageSku(param::hstring const& defaultTipString);
};

struct WINRT_EBO MainPage :
    SimplePhotoViewer::IMainPage,
    impl::base<MainPage, Windows::UI::Xaml::Controls::Page, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MainPage, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IPage, Windows::UI::Xaml::Controls::IPageOverrides, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::Data::INotifyPropertyChanged, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9>
{
    MainPage(std::nullptr_t) noexcept {}
    MainPage();
};

struct WINRT_EBO PageNavigationParameter :
    SimplePhotoViewer::IPageNavigationParameter
{
    PageNavigationParameter(std::nullptr_t) noexcept {}
    PageNavigationParameter(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& imageSkus, uint32_t mainPageCurrentSelectedIndex);
};

struct WINRT_EBO XamlMetaDataProvider :
    Windows::UI::Xaml::Markup::IXamlMetadataProvider
{
    XamlMetaDataProvider(std::nullptr_t) noexcept {}
    XamlMetaDataProvider();
};

}
