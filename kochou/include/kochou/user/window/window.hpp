#ifndef KOCHOU_USER_WINDOW_WINDOW_HPP
#define KOCHOU_USER_WINDOW_WINDOW_HPP

#include "wayland.hpp"
#include "xlib.hpp"

namespace kochou::user
{
template < typename WINDOW_TYPE >
class window final
{
    // common window interface
    // using function and type from WINDOW_TYPE
};

using xlib_window = window< xlib_config >;
} // namespace kochou::user

#endif
