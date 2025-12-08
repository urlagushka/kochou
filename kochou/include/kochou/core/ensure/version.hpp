#ifndef KOCHOU_CORE_ENSURE_VERSION_HPP
#define KOCHOU_CORE_ENSURE_VERSION_HPP

#include <kochou/ktl/mask.hpp>

#include <vulkan/vulkan.hpp>

namespace kochou::core
{
    enum class vulkan_version
        : ktl::mask_underlying_type
    {
        v1_0 = VK_API_VERSION_1_0,
        v1_1 = VK_API_VERSION_1_1,
        v1_2 = VK_API_VERSION_1_2 ,
        v1_3 = VK_API_VERSION_1_3,
        v1_4 = VK_API_VERSION_1_4
    };

    template< vulkan_version VERSION >
    struct version final
    {
        using enum vulkan_version;


    };
}

#endif
