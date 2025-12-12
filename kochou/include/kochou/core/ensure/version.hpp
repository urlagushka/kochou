#ifndef KOCHOU_CORE_ENSURE_VERSION_HPP
#define KOCHOU_CORE_ENSURE_VERSION_HPP

#include <set>
#include <string_view>

#include <kochou/ktl/mask.hpp>
#include <kochou/core/context.hpp>

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

    using versions_set = std::set< vulkan_version >;
    template< vulkan_version VERSION >
    struct version final
    {
        using enum vulkan_version;

        static errc apply();
    };
}

template< kochou::core::vulkan_version VERSION >
kochou::errc
kochou::core::version< VERSION >::apply()
{
    constexpr bool is_v1_0 = VERSION == vulkan_version::v1_0;
    constexpr bool is_v1_1 = VERSION == vulkan_version::v1_1;
    constexpr bool is_v1_2 = VERSION == vulkan_version::v1_2;
    constexpr bool is_v1_3 = VERSION == vulkan_version::v1_3;
    constexpr bool is_v1_4 = VERSION == vulkan_version::v1_4;
    if constexpr (!is_v1_0 && !is_v1_1 && !is_v1_2 && !is_v1_3 && !is_v1_4)
    {
        return errc::unknown_vk_api_version;
    }

    context::get()->apply_version(static_cast< uint32_t >(VERSION)c);
    return errc::ok;
}

#endif
