﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "DetailPage.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

namespace winrt::SimplePhotoViewer::implementation
{
    using Application = ::winrt::Windows::UI::Xaml::Application;
    using ComponentResourceLocation = ::winrt::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation;
    using DataTemplate = ::winrt::Windows::UI::Xaml::DataTemplate;
    using DependencyObject = ::winrt::Windows::UI::Xaml::DependencyObject;
    using DependencyProperty = ::winrt::Windows::UI::Xaml::DependencyProperty;
    using IComponentConnector = ::winrt::Windows::UI::Xaml::Markup::IComponentConnector;
    using Uri = ::winrt::Windows::Foundation::Uri;
    using XamlBindingHelper = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper;

    template <typename D, typename ... I>
    void DetailPageT<D, I...>::InitializeComponent()
    {
        if (!_contentLoaded)
        {
            _contentLoaded = true;
            Uri resourceLocator{ L"ms-appx:///DetailPage.xaml" };
            Application::LoadComponent(*this, resourceLocator, ComponentResourceLocation::Application);
        }
    }

    template <typename D, typename ... I>
    void DetailPageT<D, I...>::Connect(int32_t connectionId, IInspectable const& target)
    {
        switch (connectionId)
        {
        case 2:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Button>();
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.Click([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::RoutedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->GoBack_ClickHandler(p0, p1);
                    }
                });
            }
            break;
        case 3:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::FlipView>();
                this->DetailPageFlipView(targetElement);
            }
            break;
        }
        _contentLoaded = true;
    }

    template <typename D, typename ... I>
    void DetailPageT<D, I...>::DisconnectUnloadedObject(int32_t)
    {
        throw ::winrt::hresult_invalid_argument { L"No unloadable objects to disconnect." };
    }

    template <typename D, typename ... I>
    void DetailPageT<D, I...>::UnloadObject(DependencyObject const&)
    {
        throw ::winrt::hresult_invalid_argument { L"No unloadable objects." };
    }

    template <typename D, typename... I>
    IComponentConnector DetailPageT<D, I...>::GetBindingConnector(int32_t connectionId, IInspectable const& target)
    {
        ::winrt::com_ptr<::winrt::SimplePhotoViewer::implementation::XamlBindings> bindings;
        switch (connectionId)
        {
            case 1: // DetailPage.xaml line 1
                {
                    auto element1 = target.as<::winrt::Windows::UI::Xaml::Controls::Page>();
                    auto objBindings = std::make_unique<DetailPage_obj1_Bindings>();
                    objBindings->SetDataRoot(*this);
                    bindings = ::winrt::make_self<::winrt::SimplePhotoViewer::implementation::XamlBindings>(std::move(objBindings));
                    Bindings = bindings;
                    element1.Loading({&*bindings, &::winrt::SimplePhotoViewer::implementation::XamlBindings::Loading});
                }
                break;
            case 4: // DetailPage.xaml line 21
                {
                    auto element4 = target.as<::winrt::Windows::UI::Xaml::Controls::Image>();
                    auto objBindings = std::make_unique<DetailPage_obj4_Bindings>();
                    objBindings->SetDataRoot(element4.DataContext());
                    bindings = ::winrt::make_self<::winrt::SimplePhotoViewer::implementation::XamlBindings>(std::move(objBindings));
                    bindings->SubscribeForDataContextChanged(element4);
                    DataTemplate::SetExtensionInstance(element4, bindings.as<::winrt::Windows::UI::Xaml::IDataTemplateExtension>());
                    XamlBindingHelper::SetDataTemplateComponent(element4, bindings.as<::winrt::Windows::UI::Xaml::Markup::IDataTemplateComponent>());
                }
                break;
        }
        return bindings ? bindings.as<::winrt::Windows::UI::Xaml::Markup::IComponentConnector>() : nullptr;
    }

    template <typename D, typename ... I>
    struct DetailPageT<D, I...>::DetailPage_obj4_Bindings
        : public ::winrt::SimplePhotoViewer::implementation::ReferenceTypeXamlBindings<::winrt::SimplePhotoViewer::ImageSku, ::winrt::SimplePhotoViewer::implementation::XamlBindingTrackingBase>
        , public ::winrt::SimplePhotoViewer::implementation::IXamlBindingTracking
{
        DetailPage_obj4_Bindings()
        {
            InitializeTracking(this);
        }

        ~DetailPage_obj4_Bindings()
        {
            ReleaseAllListeners();
        }

        void Connect(int32_t connectionId, IInspectable const& target) override
        {
            switch(connectionId)
            {
            case 4: // DetailPage.xaml line 21
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Image>();
                    obj4 = targetElement;
                }
                break;
            }
        }

        void DisconnectUnloadedObject(int connectionId) override
        {
            throw ::winrt::hresult_invalid_argument { L"No unloadable elements to disconnect." };
        }

        void Recycle() override
        {
            ReleaseAllListeners();
        }

        void ProcessBindings(IInspectable const& item, int itemIndex, int phase, int32_t& nextPhase)
        {
            nextPhase = -1;
            switch (phase)
            {
            case 0:
                {
                    nextPhase = -1;
                    SetDataRoot(item);
                    if (_dataContextChangedToken.value != 0)
                    {
                        this->obj4.get().DataContextChanged(_dataContextChangedToken);
                        _dataContextChangedToken.value = 0;
                    }
                    _isInitialized = true;
                 }
                 break;
            }
            Update_(::winrt::unbox_value<::winrt::SimplePhotoViewer::ImageSku>(item) , 1 << phase);
        }


    private:
        // Fields for each control that has bindings.
        ::winrt::weak_ref<::winrt::Windows::UI::Xaml::Controls::Image> obj4;

        // Fields for binding tracking.
        ::winrt::weak_ref<::winrt::Windows::UI::Xaml::Data::INotifyPropertyChanged> cachePC_;
        ::winrt::event_token tokenPC_ {};

        // Update methods for each path node used in binding steps.

        void Update_(::winrt::SimplePhotoViewer::ImageSku obj, int32_t phase)
        {
            _bindingsTracking->UpdatePropertyChangedListener(obj, cachePC_, tokenPC_);
            if (obj)
            {
                if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
                {
                    Update_ImageThumbnail(obj.ImageThumbnail(), phase);
                }
            }
        }

        void Update_ImageThumbnail(::winrt::Windows::UI::Xaml::Media::Imaging::BitmapImage obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
            {
                // DetailPage.xaml line 21
                if (obj4)
                {
                    Set_Windows_UI_Xaml_Controls_Image_Source(this->obj4.get(), obj, std::nullopt);
                }
            }
        }

        virtual void ReleaseAllListeners() override
        {
            _bindingsTracking->UpdatePropertyChangedListener(nullptr, cachePC_, tokenPC_);
        }

        virtual void PropertyChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) override
        {
            if (GetDataRoot() && GetDataRoot() == sender)
            {
                auto propName = e.PropertyName();
                auto obj = sender.as<::winrt::SimplePhotoViewer::ImageSku>();
                if (propName.empty())
                {
                    if (obj)
                    {
                        Update_ImageThumbnail(obj.ImageThumbnail(), DATA_CHANGED);
                    }
                }
                else if (propName == L"ImageThumbnail")
                {
                    if (obj)
                    {
                        Update_ImageThumbnail(obj.ImageThumbnail(), DATA_CHANGED);
                    }
                }
            }
        }

        void CollectionChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) override
        {
        }

        void VectorChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e) override
        {
        }

        void MapChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IMapChangedEventArgs<::winrt::hstring> const& e) override
        {
        }

        void DependencyPropertyChanged(DependencyObject const& sender, DependencyProperty const& prop) override
        {
            if (sender)
            {
            }
        }


        static void Set_Windows_UI_Xaml_Controls_Image_Source(::winrt::Windows::UI::Xaml::Controls::Image const& obj, ::winrt::Windows::UI::Xaml::Media::ImageSource value, std::optional<::winrt::hstring> const& targetNullValue)
        {
            if (!value && targetNullValue)
            {
                value = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper::ConvertValue(::winrt::xaml_typename<::winrt::Windows::UI::Xaml::Media::ImageSource>(), ::winrt::box_value(::winrt::hstring(targetNullValue.value()))).as<::winrt::Windows::UI::Xaml::Media::ImageSource>();
            }
            obj.Source(value);
        }
    }; 

    struct DetailPage_obj1_BindingsTracking : public XamlBindingTrackingBase
    {
        DetailPage_obj1_BindingsTracking()
        {}

        // Event handlers

        void VectorChanged_Object(
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> const& sender,
            ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e)
        {
            VectorChanged(sender, e);
        }

        // Listener update functions

        void UpdateVectorChangedListener_Object(
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> const& obj,
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> & cache,
            ::winrt::event_token token)
        {
            if (cache && cache != obj)
            {
                cache.VectorChanged(token);
                cache = nullptr;
            }
            if (!cache && obj)
            {
                cache = obj;
                token = obj.VectorChanged({this, &DetailPage_obj1_BindingsTracking::VectorChanged_Object});
            }
        }
    };

    template <typename D, typename ... I>
    struct DetailPageT<D, I...>::DetailPage_obj1_Bindings
        : public ::winrt::SimplePhotoViewer::implementation::ReferenceTypeXamlBindings<::winrt::SimplePhotoViewer::DetailPage, DetailPage_obj1_BindingsTracking>
        , public ::winrt::SimplePhotoViewer::implementation::IXamlBindingTracking
{
        DetailPage_obj1_Bindings()
        {
            InitializeTracking(this);
        }

        ~DetailPage_obj1_Bindings()
        {
            ReleaseAllListeners();
        }

        void Connect(int32_t connectionId, IInspectable const& target) override
        {
            switch(connectionId)
            {
            case 3: // DetailPage.xaml line 15
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::FlipView>();
                    obj3 = targetElement;
                }
                break;
            }
        }

        void DisconnectUnloadedObject(int connectionId) override
        {
            throw ::winrt::hresult_invalid_argument { L"No unloadable elements to disconnect." };
        }


    private:
        // Fields for each control that has bindings.
        ::winrt::Windows::UI::Xaml::Controls::FlipView obj3 { nullptr };

        // Fields for binding tracking.
        ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> cacheVC_ImageSkus{nullptr};
        ::winrt::event_token tokenVC_ImageSkus {};

        // Update methods for each path node used in binding steps.

        void Update_(::winrt::SimplePhotoViewer::DetailPage obj, int32_t phase)
        {
            if (obj)
            {
                if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
                {
                    Update_ImageSkus(obj.ImageSkus(), phase);
                }
            }
        }

        void Update_ImageSkus(::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> obj, int32_t phase)
        {
            _bindingsTracking->UpdateVectorChangedListener_Object(obj, cacheVC_ImageSkus, tokenVC_ImageSkus);
            if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
            {
                // DetailPage.xaml line 15
                Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(obj3, obj, std::nullopt);
            }
        }

        virtual void ReleaseAllListeners() override
        {
            _bindingsTracking->UpdateVectorChangedListener_Object(nullptr, cacheVC_ImageSkus, tokenVC_ImageSkus);
        }

        virtual void PropertyChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) override
        {
        }

        void CollectionChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) override
        {
        }

        void VectorChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e) override
        {
            if (cacheVC_ImageSkus && cacheVC_ImageSkus == sender)
            {
                ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> obj = sender.as<::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable>>();
            }
        }

        void MapChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IMapChangedEventArgs<::winrt::hstring> const& e) override
        {
        }

        void DependencyPropertyChanged(DependencyObject const& sender, DependencyProperty const& prop) override
        {
            if (sender)
            {
            }
        }


        static void Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(::winrt::Windows::UI::Xaml::Controls::ItemsControl const& obj, ::winrt::Windows::Foundation::IInspectable value, std::optional<::winrt::hstring> const& targetNullValue)
        {
            if (!value && targetNullValue)
            {
                value = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper::ConvertValue(::winrt::xaml_typename<::winrt::Windows::Foundation::IInspectable>(), ::winrt::box_value(::winrt::hstring(targetNullValue.value()))).as<::winrt::Windows::Foundation::IInspectable>();
            }
            obj.ItemsSource(value);
        }
    }; 

    template struct DetailPageT<struct DetailPage>;
}


#pragma warning(pop)

