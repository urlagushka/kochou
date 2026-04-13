#ifndef KOCHOU_CORE_REQUIREMENTS_FEATURE_HPP
#define KOCHOU_CORE_REQUIREMENTS_FEATURE_HPP

#include <ktl/errc.hpp>

#include <kochou/core/requirements/type.hpp>
#include <kochou/core/vulkan_chain.hpp>

namespace kochou::core
{
template < vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
struct feature final
{
    static ktl::errc
    apply(requirement_type _type) noexcept;

    static bool
    allowed() noexcept;
};
} // namespace kochou::core

template < kochou::core::vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
ktl::errc
kochou::core::feature< FEATURE_TYPE, FEATURE >::apply(requirement_type _type) noexcept
{
    // return kochou_context_instance.apply_feature< FEATURE_TYPE >(FEATURE);
    return ktl::errc::success;
}

template < kochou::core::vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
bool
kochou::core::feature< FEATURE_TYPE, FEATURE >::allowed() noexcept
{
    return false;
}

#endif
