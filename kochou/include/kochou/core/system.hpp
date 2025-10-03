#ifndef KOCHOU_CORE_SYSTEM_HPP
#define KOCHOU_CORE_SYSTEM_HPP

#include <cassert>

#include "kochou/utils/mask.hpp"

namespace kochou::core
{
    enum class os_type
        : uint32_t
    {
        linux,
        macos,
        windows
    };

    enum class api_type
        : uint32_t
    {
        vulkan,
        metal,
        directx
    };

    #if defined(__linux__)
        static constexpr api_type api_defined = api_type::vulkan;
        static constexpr os_type os_defined = os_type::linux;

    #elif defined(__APPLE__)
        static constexpr api_type api_defined = api_type::metal;
        static constexpr os_type os_defined = os_type::macos;
        static_assert("macos not supported!" && false);

    #elif defined(_WIN32)
        static constexpr api_type api_defined = api_type::vulkan | api_type::directx;
        static constexpr os_type os_defined = os_type::windows;
        static_assert("windows not supported!" && false);

    #else
        static_assert("unknown os! not supported!" && false);

    #endif
}

#endif
