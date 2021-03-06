﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#include "pch.h"
#include "BackdropBlurBrush.h"
#include "BackdropExposureBrush.h"
#include "BackdropSaturationBrush.h"
#include "BackdropSepiaBrush.h"
#include "BackdropTemperatureAndTintBrush.h"
#include "DetailPage.h"
#include "DirectoryItem.h"
#include "ExplorerItemTemplateSelector.h"
#include "ImageSku.h"
#include "MainPage.h"
#include "PageNavigationParameter.h"
#include "XamlMetaDataProvider.h"

int32_t WINRT_CALL WINRT_CanUnloadNow() noexcept
{
#ifdef _WRL_MODULE_H_
    if (!::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().Terminate())
    {
        return 1; // S_FALSE
    }
#endif

    if (winrt::get_module_lock())
    {
        return 1; // S_FALSE
    }

    winrt::clear_factory_cache();
    return 0; // S_OK
}

int32_t WINRT_CALL WINRT_GetActivationFactory(void* classId, void** factory) noexcept
{
    try
    {
        *factory = nullptr;
        uint32_t length{};
        wchar_t const* const buffer = WINRT_WindowsGetStringRawBuffer(classId, &length);
        std::wstring_view const name{ buffer, length };

        auto requal = [](std::wstring_view const& left, std::wstring_view const& right) noexcept
        {
            return std::equal(left.rbegin(), left.rend(), right.rbegin(), right.rend());
        };

        if (requal(name, L"SimplePhotoViewer.BackdropBlurBrush"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::BackdropBlurBrush>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.BackdropExposureBrush"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::BackdropExposureBrush>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.BackdropSaturationBrush"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::BackdropSaturationBrush>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.BackdropSepiaBrush"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::BackdropSepiaBrush>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.BackdropTemperatureAndTintBrush"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::BackdropTemperatureAndTintBrush>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.DetailPage"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::DetailPage>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.DirectoryItem"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::DirectoryItem>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.ExplorerItemTemplateSelector"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::ExplorerItemTemplateSelector>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.ImageSku"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::ImageSku>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.MainPage"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::MainPage>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.PageNavigationParameter"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::PageNavigationParameter>());
            return 0;
        }

        if (requal(name, L"SimplePhotoViewer.XamlMetaDataProvider"))
        {
            *factory = winrt::detach_abi(winrt::make<winrt::SimplePhotoViewer::factory_implementation::XamlMetaDataProvider>());
            return 0;
        }

#ifdef _WRL_MODULE_H_
        return ::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().GetActivationFactory(static_cast<HSTRING>(classId), reinterpret_cast<::IActivationFactory**>(factory));
#else
        return winrt::hresult_class_not_available(name).to_abi();
#endif
    }
    catch (...) { return winrt::to_hresult(); }
}
