#ifndef KOCHOU_API_PLATFORM_VULKAN_HPP
#define KOCHOU_API_PLATFORM_VULKAN_HPP

#include "os.hpp"

namespace kochou::api
{
    using ccarray = const char *;

    inline constexpr std::vector< ccarray > get_instance_extensions()
    {
        switch (os)
        {
            case os_type::linux:
            return {
                VK_KHR_SURFACE_EXTENSION_NAME,
                "VK_EXT_mesh_shader",
                "VK_KHR_xcb_surface",
                "VK_EXT_swapchain_colorspace"
            };
        }
    }
}

#endif
