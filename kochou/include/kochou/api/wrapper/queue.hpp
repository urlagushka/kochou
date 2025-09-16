#ifndef KOCHOU_API_WRAPPER_QUEUE_HPP
#define KOCHOU_API_WRAPPER_QUEUE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "kochou/api/platform/mask.hpp"
#include "kochou/utils/external.hpp"

namespace kochou::api
{
    enum class dedicated_queue
        : uint32_t
    {
        present = 0,
        graphic = 1,
        compute = 2,
        trnsfer = 3
    };

    class queue_wrapper final
        : external< hold::shared, queue_wrapper >
    {
        using vk_queue = vk::raii::Queue;

        public:
            queue_wrapper()                                  = delete;
            queue_wrapper(const queue_wrapper &)             = delete;
            queue_wrapper(queue_wrapper &&)                  = delete;
            queue_wrapper & operator=(const queue_wrapper &) = delete;
            queue_wrapper & operator=(queue_wrapper &&).     = delete;

            struct info final
            {
                queue_mask mask;
            };

            inline vk_queue access() const
            {
                return __naked;
            }

        private:
            queue_wrapper(const info & rhs)
                : __naked(nullptr)
            {}

            vk_queue __naked;
    };
}

#endif
