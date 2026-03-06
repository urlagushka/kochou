#ifndef KOCHOU_CORE_REQUIREMENTS_VERSION_HPP
#define KOCHOU_CORE_REQUIREMENTS_VERSION_HPP

#include <kochou/core/context.hpp>
#include <kochou/core/masks/version.hpp>

namespace kochou::core
{
template < vulkan_version VERSION >
struct version final
{
    using enum vulkan_version;

    static consteval ktl::errc
    apply() noexcept;

    static bool
    allowed() noexcept;
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

template < kochou::core::vulkan_version VERSION >
bool
kochou::core::version< VERSION >::allowed() noexcept
{
    return false;
}

#endif
