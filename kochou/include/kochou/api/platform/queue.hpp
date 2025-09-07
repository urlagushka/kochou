#ifndef KOCHOU_API_PLATFORM_QUEUE_HPP
#define KOCHOU_API_PLATFORM_QUEUE_HPP

#include <vulkan/vulkan_raii.hpp>

namespace kochou::api
{
    enum class queue_mask
        : vk::QueueFlagBits
    {
        graphics = vk::QueueFlagBits::eGraphics,
        compute  = vk::QueueFlagBits::eCompute,
        transfer = vk::QueueFlagBits::eTransfer,
        sparse   = vk::QueueFlagBits::eSparseBinding
    };

    template< vendor_type vendor >
    struct queue_distribution final
    {
        constexpr queue_mask graphics;
        constexpr queue_mask compute;
        constexpr queue_mask transfer;
        constexpr queue_mask sparse;
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

    template< >
    struct queue_distribution< vendor_type::other > final
    {
        constexpr queue_mask graphics = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask compute  = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask transfer = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
        constexpr queue_mask sparse   = queue_mask::graphics | queue_mask::compute | queue_mask::transfer;
    };
}

#endif
