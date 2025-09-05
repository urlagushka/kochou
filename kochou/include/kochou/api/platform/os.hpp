#ifndef KOCHOU_API_PLATFORM_OS_HPP
#define KOCHOU_API_PLATFORM_OS_HPP

#include <cassert>

#include "type.hpp"

namespace kochou::api
{
    #if defined(__linux__)
        static constexpr os_type os_defined = os_type::linux;

    #elif defined(__APPLE__)
        static constexpr os_type os_defined = os_type::macos;
        // assert(false && "macos not supported!");

    #elif defined(_WIN32)
        static constexpr os_type os_defined = os_type::windows;
        assert(false && "windows not supported!");

    #else
        assert(false && "unknown system! not supported!");

    #endif
}

#endif
