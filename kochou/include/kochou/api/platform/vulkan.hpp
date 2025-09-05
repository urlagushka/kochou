#ifndef KOCHOU_API_PLATFORM_VULKAN_HPP
#define KOCHOU_API_PLATFORM_VULKAN_HPP

#include <vulkan/vulkan.hpp>

#include "os.hpp"

namespace kochou::api
{
    using ccarray = const char *;

    enum class vk_api_version
        : uint32_t
    {
        v1_0 = VK_API_VERSION_1_0,
        v1_1 = VK_API_VERSION_1_1,
        v1_2 = VK_API_VERSION_1_2,
        v1_3 = VK_API_VERSION_1_3,
        v1_4 = VK_API_VERSION_1_4
    };

    static constexpr ccarray core_name = "kochou";
    constexpr std::vector< ccarray > get_instance_extensions()
    {
        switch (os)
        {
            case os_type::linux:
            return {
                "VK_KHR_surface",
                "VK_KHR_xcb_surface",
                "VK_EXT_mesh_shader",
                "VK_EXT_swapchain_colorspace"
            };

            case os_type::macos:
            return {
                "VK_KHR_surface",
                "VK_MVK_macos_surface",
                "VK_EXT_metal_surface",
                VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME,
                VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME,
                "VK_EXT_swapchain_colorspace"
            };
        };
    }
}

#endif
