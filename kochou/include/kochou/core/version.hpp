#ifndef KOCHOU_CORE_VERSION_HPP
#define KOCHOU_CORE_VERSION_HPP

#include <cstdint>

#include <vulkan/vulkan.hpp>

namespace kochou::core
{
    constexpr uint32_t version = 1;

    enum class vk_version
        : uint32_t
    {
        v1_0 = VK_VERSION_1_0,
        v1_1 = VK_VERSION_1_1,
        v1_2 = VK_VERSION_1_2 ,
        v1_3 = VK_VERSION_1_3,
        v1_4 = VK_VERSION_1_4
    };
}

#endif
