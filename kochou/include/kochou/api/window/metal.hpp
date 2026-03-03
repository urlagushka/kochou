#ifndef KOCHOU_API_WINDOW_METAL_HPP
#define KOCHOU_API_WINDOW_METAL_HPP

// #ifdef METAL_PROFILE

#include <kochou/core/requirements/ensure.hpp>
#include <kochou/core/requirements/extension.hpp>
#include <kochou/core/requirements/feature.hpp>

namespace kochou::api
{

struct metal_config final : core::ensure< core::extension< "VK_KHR_surface" > >,
                            core::ensure< core::extension< "VK_EXT_metal_surface" > >
{
    using window_handle = void;
    using native_handle = void;
    using create_fn     = void;
    using destroy_fn    = void;
};

using active_config = metal_config;
} // namespace kochou::api

// #endif
#endif
