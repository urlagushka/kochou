#ifndef KOCHOU_CORE_REQUIREMENTS_VERSION_HPP
#define KOCHOU_CORE_REQUIREMENTS_VERSION_HPP

#include <ktl/api/version.hpp>

#include <kochou/core/context.hpp>

namespace kochou::core
{
template < ktl::api::vulkan_version VERSION >
struct version final
{
    static consteval ktl::errc
    apply(requirement_type _type) noexcept;

    static bool
    allowed() noexcept;
};
} // namespace kochou::core

template < ktl::api::vulkan_version VERSION >
consteval ktl::errc
kochou::core::version< VERSION >::apply(requirement_type _type) noexcept
{
    return kochou_context_instance.apply_version(static_cast< uint32_t >(VERSION));
}

template < ktl::api::vulkan_version VERSION >
bool
kochou::core::version< VERSION >::allowed() noexcept
{
    return false;
}

#endif
