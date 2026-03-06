#ifndef KOCHOU_CORE_MASKS_GPU_HPP
#define KOCHOU_CORE_MASKS_GPU_HPP

#include <ktl/mask.hpp>

namespace kochou::core
{
enum class gpu_type : ktl::mask_underlying_type
{
    other      = 0x1,
    integrated = 0x2,
    discrete   = 0x4,
    vvirtual   = 0x8,
    cpu        = 0x10
};

enum class gpu_vendor : ktl::mask_underlying_type
{
    nvidia = 0x10DE,
    amd    = 0x1002
};
} // namespace kochou::core

#endif
