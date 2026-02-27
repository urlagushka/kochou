#ifndef KOCHOU_CORE_REQUIREMENTS_VERSION_HPP
#define KOCHOU_CORE_REQUIREMENTS_VERSION_HPP

#include <set>
#include <string_view>

#include <kochou/core/context.hpp>
#include <kochou/core/masks/version.hpp>

#include <vulkan/vulkan.hpp>

namespace kochou::core
{
using versions_set = std::set< vulkan_version >;

template < vulkan_version VERSION >
struct version final
{
    using enum vulkan_version;

    static consteval ktl::errc
    apply() noexcept;
};
} // namespace kochou::core

template < kochou::core::vulkan_version VERSION >
consteval ktl::errc
kochou::core::version< VERSION >::apply() noexcept
{
    constexpr bool is_v1_0 = VERSION == vulkan_version::v1_0;
    constexpr bool is_v1_1 = VERSION == vulkan_version::v1_1;
    constexpr bool is_v1_2 = VERSION == vulkan_version::v1_2;
    constexpr bool is_v1_3 = VERSION == vulkan_version::v1_3;
    constexpr bool is_v1_4 = VERSION == vulkan_version::v1_4;
    if constexpr (!is_v1_0 && !is_v1_1 && !is_v1_2 && !is_v1_3 && !is_v1_4)
    {
        return ktl::errc::unknown_vk_api_version;
    }

    kochou_context_instance.apply_version(static_cast< uint32_t >(VERSION));
    return ktl::errc::success;
}

#endif
