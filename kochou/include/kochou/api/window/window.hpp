#ifndef KOCHOU_API_WINDOW_WINDOW_HPP
#define KOCHOU_API_WINDOW_WINDOW_HPP

#include <concepts>

#include "metal.hpp"
#include "wayland.hpp"
#include "win32.hpp"
#include "xcb.hpp"
#include "xlib.hpp"

namespace kochou::user
{
template < typename T >
concept window_concept = requires {
    typename T::window_handle;
    typename T::native_handle;
    typename T::create_fn;
    typename T::destroy_fd;
    // etc
};

template < window_concept WINDOW_TYPE >
class window_interface final
{
    // common window interface
    // using function and type from WINDOW_TYPE
};

// using window = window_interface< active_config >;
} // namespace kochou::user

#endif
