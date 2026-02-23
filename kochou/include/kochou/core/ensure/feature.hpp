#ifndef KOCHOU_CORE_ENSURE_FEATURE_HPP
#define KOCHOU_CORE_ENSURE_FEATURE_HPP

#include <ktl/errc.hpp>

#include <kochou/core/vulkan_chain.hpp>

namespace kochou::core
{
template < vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
struct feature final
{
    static consteval ktl::errc
    apply() noexcept;
};
} // namespace kochou::core

template < kochou::core::vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
consteval ktl::errc
kochou::core::feature< FEATURE_TYPE, FEATURE >::apply() noexcept
{
    context::get()->apply_feature< FEATURE_TYPE >(FEATURE);
    return ktl::errc::success;
}

#endif
