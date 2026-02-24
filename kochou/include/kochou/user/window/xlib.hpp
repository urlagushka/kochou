#ifndef KOCHOU_USER_WINDOW_XLIB_HPP
#define KOCHOU_USER_WINDOW_XLIB_HPP

// #include <X11/Xlib.h>

#include <ktl/api/type.hpp>

#include <kochou/core/ensure/ensure.hpp>
#include <kochou/core/ensure/extension.hpp>

namespace kochou::user
{
struct xlib_config : core::ensure< core::extension< "VK_KHR_xlib_surface" > >,
                     core::ensure< core::extension< "VK_KHR_surface" > >
{
    using handle_type = void;
    using create_fn = void (*)();
    // etc
    using close_fn = void (*)();
};
} // namespace kochou::user

#endif
