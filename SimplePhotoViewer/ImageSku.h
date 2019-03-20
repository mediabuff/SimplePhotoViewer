﻿#pragma once

#include "ImageSku.g.h"

namespace winrt::SimplePhotoViewer::implementation
{
	///<summary>
	///ImageSku is used to represent an image file and related its properties.Several properties are designed to be observable.Whenever their values change, PropertyChangedEvent should be raised and the corresponding xaml controls or widgets should be updated duly.
	///</summary>
    struct ImageSku : ImageSkuT<ImageSku>
    {
		//Constructors 
        ImageSku() = delete;
        ImageSku(Windows::Storage::FileProperties::ImageProperties const& imageProps, Windows::Storage::StorageFile const& imageFile, hstring const& name, hstring const& type);

		//Properties
        Windows::Storage::StorageFile ImageFile() const;
        Windows::Storage::FileProperties::ImageProperties ImageProperties() const;
        hstring ImageName() const;
        hstring ImageFileType() const;

		//Observable property related event register and revoker, note that it's automatically registered by MVVM framework.
        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;


	private:
		Windows::Storage::StorageFile m_imageFile{ nullptr };
		Windows::Storage::FileProperties::ImageProperties m_imageProps{ nullptr };
		hstring m_imageName;
		hstring m_imageFileType;

		//Delegate for observable property
		event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::SimplePhotoViewer::factory_implementation
{
    struct ImageSku : ImageSkuT<ImageSku, implementation::ImageSku>
    {
    };
}
