#ifndef KOCHOU_API_PLATFORM_QUEUE_HPP
#define KOCHOU_API_PLATFORM_QUEUE_HPP

#include "mask.hpp"

#include <vulkan/vulkan_raii.hpp>

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
template < vendor_type T >
struct queue_distribution final
{
    static constexpr queue_mask graphics = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
    static constexpr queue_mask compute = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
    static constexpr queue_mask transfer = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
    static constexpr queue_mask sparse = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
};

template <>
struct queue_distribution< vendor_type::nvidia > final
{
    static constexpr queue_mask graphics = queue_mask::graphics;
    static constexpr queue_mask compute = queue_mask::graphics | queue_mask::compute;
    static constexpr queue_mask transfer = queue_mask::transfer;
    static constexpr queue_mask sparse = queue_mask::graphics | queue_mask::sparse;
};

template <>
struct queue_distribution< vendor_type::amd > final
{
    static constexpr queue_mask graphics = queue_mask::graphics;
    static constexpr queue_mask compute = queue_mask::graphics | queue_mask::compute;
    static constexpr queue_mask transfer = queue_mask::transfer;
    static constexpr queue_mask sparse = queue_mask::graphics | queue_mask::sparse;
};

template < vendor_type T >
queue_distribution< T >
get_queue_distribution(vendor_type vendor)
{
    switch (vendor)
    {
    case vendor_type::nvidia:
        return queue_distribution< vendor_type::nvidia >;

    default:
        break;
    }
}
} // namespace kochou::api

#endif
