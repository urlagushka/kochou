#ifndef KOCHOU_API_WRAPPER_QUEUE_HPP
#define KOCHOU_API_WRAPPER_QUEUE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "kochou/utils/memory.hpp"

namespace kochou::api
{
    enum class queue_type
        : uint32_t
    {
        present = 0,
        graphic = 1,
        compute = 2,
        trnsfer = 3
    };

    enum class dedicated_queue
        : uint32_t
    {
        present = 0,
        graphic = 1,
        compute = 2,
        trnsfer = 3
    };

    class queue_wrapper final
    {
        public:
        private:
            vk::raii::Queue naked;
    };

    sptr< queue_wrapper > 
}

#endif
