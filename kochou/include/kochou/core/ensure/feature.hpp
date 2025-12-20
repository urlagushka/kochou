#ifndef KOCHOU_CORE_ENSURE_FEATURE_HPP
#define KOCHOU_CORE_ENSURE_FEATURE_HPP

#include <kochou/core/vulkan_chain.hpp>
#include <kochou/errc.hpp>

namespace kochou::core
{
    template< vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
    struct feature final
    {
        static errc apply() noexcept;
    };
}

template< kochou::core::vulkan_struct_type FEATURE_TYPE, FEATURE_TYPE FEATURE >
kochou::errc
kochou::core::feature< FEATURE_TYPE, FEATURE >::apply() noexcept
{
    context::get()->apply_feature< FEATURE_TYPE >(FEATURE);
}

#endif
