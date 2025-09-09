#ifndef KOCHOU_API_PLATFORM_VULKAN_HPP
#define KOCHOU_API_PLATFORM_VULKAN_HPP

#include <vulkan/vulkan.hpp>

#include "os.hpp"

namespace kochou::api
{
    using ccarray = const char *;

    static constexpr ccarray core_name = "kochou";
    constexpr std::vector< ccarray > get_instance_extensions()
    {
        switch (os_defined)
        {
            case os_type::linux:
            return {
                "VK_KHR_surface",
                "VK_KHR_xcb_surface",
                // "VK_EXT_mesh_shader",
                "VK_EXT_swapchain_colorspace"
            };

            case os_type::macos:
            return {
                "VK_KHR_surface",
                "VK_MVK_macos_surface",
                "VK_EXT_metal_surface",
                "VK_KHR_portability_enumeration",
                "VK_KHR_get_physical_device_properties_2",
                "VK_EXT_swapchain_colorspace"
            };
        };

        return {};
    }
}

#endif
