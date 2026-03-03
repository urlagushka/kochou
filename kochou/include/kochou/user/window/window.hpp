#ifndef KOCHOU_USER_WINDOW_WINDOW_HPP
#define KOCHOU_USER_WINDOW_WINDOW_HPP

#include <concepts>

namespace kochou::user
{
#ifdef XLIB_WINDOW
#include "xlib.hpp"
using active_window_config = xlib_config;
#elifdef WAYLAY_WINDOW
#include "wayland.hpp"
using active_window_config = waylay_config;
#elifdef NO_WINDOW
using active_window_config = void;
#else
using active_window_config = void;
// static_assert(false && "window not provides!");
#endif

template < typename T >
concept window_concept = requires() { requires std::same_as< decltype(T::), ktl::errc >; };

template < window_concept WINDOW_TYPE >
class window_interface final
{
    // common window interface
    // using function and type from WINDOW_TYPE
};

using window = window_interface< active_window_config >;
} // namespace kochou::user

#endif
