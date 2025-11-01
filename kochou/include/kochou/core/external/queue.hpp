#ifndef KOCHOU_CORE_EXTERNAL_QUEUE_HPP
#define KOCHOU_CORE_WRAPPER_QUEUE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "kochou/api/platform/mask.hpp"
#include "kochou/utils/external.hpp"

namespace kochou::core::vulkan
{
    struct vk_queue final
    {
        enum type
        {
            graphics,
            computes,
            transfer
        };

        vk::raii::Queue naked;
        uint32_t index;
        type     queue_type;
        bool     is_dedicated;
    };

    std::vector< vk_queue > enumerate_queues(const device & dev)
    {

    }

    class vk_queue_view final
    {
        std::weak_ptr< vk_queue > graphics;
        std::weak_ptr< vk_queue > computes;
        std::weak_ptr< vk_queue > transfer;
    };
}

#endif
