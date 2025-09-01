#ifndef KOCHOU_API_PLATFORM_VULKAN_HPP
#define KOCHOU_API_PLATFORM_VULKAN_HPP

#include <vulkan/vulkan.hpp>

#include "os.hpp"

namespace kochou::api
{
    using ccarray = const char *;

    static constexpr uint32_t vk_api_version = VK_API_VERSION_1_3;
    inline constexpr std::vector< ccarray > get_instance_extensions()
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
        }
    }
}

#endif
