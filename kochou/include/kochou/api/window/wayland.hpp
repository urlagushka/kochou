#ifndef KOCHOU_API_WINDOW_WAYLAND_HPP
#define KOCHOU_API_WINDOW_WAYLAND_HPP

#ifdef WAYLAND_PROFILE
// #include <X11/Xlib.h>

#include <ktl/api/type.hpp>

#include <kochou/core/requirements/ensure.hpp>
#include <kochou/core/requirements/extension.hpp>

namespace kochou::api
{
struct wayland_config : core::ensure< core::extension< "VK_KHR_xlib_surface" > >,
                        core::ensure< core::extension< "VK_KHR_surface" > >
{
    using handle_type = void;
    using create_fn = void (*)();
    // etc
    using close_fn = void (*)();
};
} // namespace kochou::api

#endif
#endif
