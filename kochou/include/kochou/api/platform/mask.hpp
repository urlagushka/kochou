#ifndef KOCHOU_API_PLATFORM_MASK_HPP
#define KOCHOU_API_PLATFORM_MASK_HPP

#include <cstdint>

namespace kochou::api
{
    enum class ext_mask // mext
        : uint32_t
    {
        descriptor_indexing = 0x1,
        dynamic_render      = 0x2,
        mesh_shading        = 0x4,
    };

    enum class gpu_mask // mgpu
        : uint32_t
    {
        other      = 0x1,
        integrated = 0x2,
        discrete   = 0x4,
        vvirtual   = 0x8,
        cpu        = 0x16
    };
}

#endif
