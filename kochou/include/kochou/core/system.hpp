#ifndef KOCHOU_CORE_SYSTEM_HPP
#define KOCHOU_CORE_SYSTEM_HPP

#include <cassert>

#include <kochou/ktl/mask.hpp>

namespace kochou::core
{
    enum class os_flag
        : ktl::mask_underlying_type
    {
        linux,
        macos,
        windows
    };

    enum class api_flag
        : ktl::mask_underlying_type
    {
        vulkan,
        metal,
        directx
    };

    #if defined(__linux__)
        // static constexpr api_type api_defined = api_type::vulkan;
        static constexpr os_flag os_defined = os_flag::linux;

    #elif defined(__APPLE__)
        // static constexpr api_type api_defined = api_type::metal;
        static constexpr os_flag os_defined = os_flag::macos;
        // static_assert("macos not supported!" && false);

    #elif defined(_WIN32)
        // static constexpr api_type api_defined = api_type::vulkan | api_type::directx;
        static constexpr os_flag os_defined = os_flag::windows;
        static_assert("windows not supported!" && false);

    #else
        static_assert("unknown os! not supported!" && false);

    #endif
}

#endif
