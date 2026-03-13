#ifndef KOCHOU_CORE_REQUIREMENTS_VERSION_HPP
#define KOCHOU_CORE_REQUIREMENTS_VERSION_HPP

#include <ktl/api/version.hpp>
#include <ktl/errc.hpp>

#include <kochou/core/context.hpp>
#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < ktl::api::vulkan_version VERSION >
struct version final
{
    static ktl::errc
    apply(requirement_type _type) noexcept;

    static bool
    allowed() noexcept;
};
} // namespace kochou::core

template < ktl::api::vulkan_version VERSION >
ktl::errc
kochou::core::version< VERSION >::apply(requirement_type _type) noexcept
{
    return context::get().apply_version(VERSION);
}

template < ktl::api::vulkan_version VERSION >
bool
kochou::core::version< VERSION >::allowed() noexcept
{
    return false;
}

#endif
