#ifndef KOCHOU_CORE_ENSURE_EXTENSION_HPP
#define KOCHOU_CORE_ENSURE_EXTENSION_HPP

#include <kochou/ktl/result.hpp>
#include <kochou/ktl/fixed_string.hpp>
#include <kochou/ktl/mask.hpp>

#include <kochou/errc.hpp>
#include <kochou/core/ensure/version.hpp>

#include <vulkan/vulkan_extension_inspection.hpp>

namespace kochou::core
{
    enum class extension_type
        : ktl::mask_underlying_type
    {
        khr,
        ext,
        nv,
        amd,
        intel,
        arm,
        img,
        qcom,
        mvk,
        fuchsia,
        ggp,
        nn,
        google,
        valve,
        huawei,
        brcm,
        sec,
        mesa
    };

    enum class extension_target
        : ktl::mask_underlying_type
    {
        instance,
        device
    };

    template< ktl::fixed_string NAME >
    struct extension final
    {
        using enum extension_type;
        using enum extension_target;

        static ktl::result< std::string_view, errc > satisfy();
        static ktl::result< extension_type, errc > type();
        static ktl::result< extension_target, errc > target();
        static ktl::result< vulkan_version, errc > version();
        static bool is_deprecated();
    };
}

template< ktl::fixed_string NAME >
ktl::result< std::string_view, kochou::errc >
kochou::core::extension< NAME >::satisfy()
{
    using this_extension = extension< NAME >;
    if (this_extension::is_deprecated())
    {
        return ktl::err{errc::extension_is_deprecated};
    }

    auto type_result = this_extension::type();
    if (type_result.is_err())
    {
        return ktl::err{type_result.take_err()};
    }

    auto target_result = this_extension::target();
    if (target_result.is_err())
    {
        return ktl::err{target_result.take_err()};
    }
    
    auto version_result = this_extension::version();
    if (version_result.is_err())
    {
        return ktl::err{version_result.take_err()};
    }

    return ktl::ok{NAME};
}

template< ktl::fixed_string NAME >
ktl::result< kochou::core::extension_type, kochou::errc >
kochou::core::extension< NAME >::type()
{
    std::string name = NAME;
    if (name.size() < 3)
    {
        return ktl::err{errc::extension_not_provided};
    }

    std::string prefix = name.substr(3, name.size() - 3);
    if (prefix.starts_with("KHR"))
    {
        return ktl::ok{extension_type::khr};
    }
    if (prefix.starts_with("EXT"))
    {
        return ktl::ok{extension_type::ext};
    }
    if (prefix.starts_with("NV"))
    {
        return ktl::ok{extension_type::nv};
    }
    if (prefix.starts_with("AMD"))
    {
        return ktl::ok{extension_type::amd};
    }
    if (prefix.starts_with("INTEL"))
    {
        return ktl::ok{extension_type::intel};
    }
    if (prefix.starts_with("ARM"))
    {
        return ktl::ok{extension_type::arm};
    }
    if (prefix.starts_with("IMG"))
    {
        return ktl::ok{extension_type::img};
    }
    if (prefix.starts_with("QCOM"))
    {
        return ktl::ok{extension_type::qcom};
    }
    if (prefix.starts_with("MVK"))
    {
        return ktl::ok{extension_type::mvk};
    }
    if (prefix.starts_with("FUCHSIA"))
    {
        return ktl::ok{extension_type::fuchsia};
    }
    if (prefix.starts_with("GGP"))
    {
        return ktl::ok{extension_type::ggp};
    }
    if (prefix.starts_with("NN"))
    {
        return ktl::ok{extension_type::nn};
    }
    if (prefix.starts_with("GOOGLE"))
    {
        return ktl::ok{extension_type::google};
    }
    if (prefix.starts_with("VALVE"))
    {
        return ktl::ok{extension_type::valve};
    }
    if (prefix.starts_with("HUAWEI"))
    {
        return ktl::ok{extension_type::huawei};
    }
    if (prefix.starts_with("BRCM"))
    {
        return ktl::ok{extension_type::brcm};
    }
    if (prefix.starts_with("SEC"))
    {
        return ktl::ok{extension_type::sec};
    }
    if (prefix.starts_with("MESA"))
    {
        return ktl::ok{extension_type::mesa};
    }

    return ktl::err{errc::extension_not_provided};
}

template< ktl::fixed_string NAME >
ktl::result< kochou::core::extension_target, kochou::errc >
kochou::core::extension< NAME >::target()
{
    static const auto instance_set = vk::getInstanceExtensions();
    static const auto device_set = vk::getDeviceExtensions();

    if (instance_set.contains(NAME))
    {
        return ktl::ok{extension_target::instance};
    }
    if (device_set.contains(NAME))
    {
        return ktl::ok{extension_target::device};
    }

    return ktl::err{errc::extension_not_provided};
}

template< ktl::fixed_string NAME >
ktl::result< kochou::core::vulkan_version, kochou::errc >
kochou::core::extension< NAME >::version()
{
    static const auto version_map = vk::getPromotedExtensions();

    if (!version_map.contains(NAME))
    {
        return ktl::err{errc::unknown_vk_api_version};
    }

    const auto & version = version_map[NAME];
    if (version == "VK_VERSION_1_0")
    {
        return ktl::ok{vulkan_version::v1_0};
    }
    if (version == "VK_VERSION_1_1")
    {
        return ktl::ok{vulkan_version::v1_1};
    }
    if (version == "VK_VERSION_1_2")
    {
        return ktl::ok{vulkan_version::v1_2};
    }
    if (version == "VK_VERSION_1_3")
    {
        return ktl::ok{vulkan_version::v1_3};
    }
    if (version == "VK_VERSION_1_4")
    {
        return ktl::ok{vulkan_version::v1_4};
    }

    return ktl::err{errc::unknown_vk_api_version};
}

template< ktl::fixed_string NAME >
bool
kochou::core::extension< NAME >::is_deprecated()
{
    static const auto deprecated_map = vk::getDeprecatedExtensions();
    if (deprecated_map.contains(NAME))
    {
        return true;
    }

    return false;
}

#endif
