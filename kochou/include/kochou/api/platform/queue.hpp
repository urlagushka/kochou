#ifndef KOCHOU_API_PLATFORM_QUEUE_HPP
#define KOCHOU_API_PLATFORM_QUEUE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "mask.hpp"

/*

RENDER - HIGH | PRESENT
class render
    : context< present, critical >
    , require< mesh >
{
    render(device)
        : context(device)
        , 
}

class culling : context< compute, high >

*/

namespace kochou::api
{
    enum class queue_priority
        : float
    {
        critical   = 1.0f,
        high       = 0.8f,
        medium     = 0.6f,
        async      = 0.4f,
        background = 0.2f,
        low        = 0.1f
    };

    template< vendor_type T >
    struct queue_distribution final
    {
        constexpr queue_mask graphics = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask compute  = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask transfer = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask sparse   = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
    };

    template< >
    struct queue_distribution< vendor_type::nvidia > final
    {
        constexpr queue_mask graphics = queue_mask::graphics;
        constexpr queue_mask compute  = queue_mask::graphics | queue_mask::compute;
        constexpr queue_mask transfer = queue_mask::transfer;
        constexpr queue_mask sparse   = queue_mask::graphics | queue_mask::sparse;
    };

    template< >
    struct queue_distribution< vendor_type::amd > final
    {
        constexpr queue_mask graphics = queue_mask::graphics;
        constexpr queue_mask compute  = queue_mask::graphics | queue_mask::compute;
        constexpr queue_mask transfer = queue_mask::transfer;
        constexpr queue_mask sparse   = queue_mask::graphics | queue_mask::sparse;
    };
}

#endif
