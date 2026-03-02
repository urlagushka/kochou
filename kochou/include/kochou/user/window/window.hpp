#ifndef KOCHOU_USER_WINDOW_WINDOW_HPP
#define KOCHOU_USER_WINDOW_WINDOW_HPP

#ifdef XLIB_ALLOWED
#include "xlib.hpp"
using ____private_window_config = kochou::user::xlib_config;
#elifdef WAYLAY_ALLOWED
#include "wayland.hpp"
using ____private_window_config = kochou::user::waylay_config;
#endif

namespace kochou::user
{
template < typename WINDOW_TYPE >
class window_interface final
{
    // common window interface
    // using function and type from WINDOW_TYPE
};

using window = window< config >;
} // namespace kochou::user

#endif
