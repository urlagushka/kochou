#ifndef KOCHOU_USER_WINDOW_METAL_HPP
#define KOCHOU_USER_WINDOW_METAL_HPP

#ifdef __APPLE__

#include <Metal/Metal.h>
#include <QuartzCore/CAMetalLayer.h>

#include <kochou/core/requirements/ensure.hpp>
#include <kochou/core/requirements/extension.hpp>
#include <kochou/core/requirements/feature.hpp>

namespace kochou::user
{
struct metal_config final : core::ensure< core::extension< "VK_KHR_surface" > >,
                            core::ensure< core::extension< "VK_EXT_metal_surface" > >
{
    using window_handle = void;
    using display_handle = void;
    using create_fn = void;
    using destroy_fn = void;
};

using active_config = metal_config;
} // namespace kochou::user

#endif
#endif
