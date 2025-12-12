#ifndef KOCHOU_CORE_MASKS_EXTENSION_HPP
#define KOCHOU_CORE_MASKS_EXTENSION_HPP

#include <kochou/ktl/mask.hpp>

namespace kochou::core
{
    enum class extension_type
        : ktl::mask_underlying_type
    {
        khr,
        ext,
        nv,
        amd,
        intel,
        arm,
        img,
        qcom,
        mvk,
        fuchsia,
        ggp,
        nn,
        google,
        valve,
        huawei,
        brcm,
        sec,
        mesa
    };

    enum class extension_target
        : ktl::mask_underlying_type
    {
        instance,
        device
    };
}

#endif
