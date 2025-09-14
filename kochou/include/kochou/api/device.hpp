#ifndef KOCHOU_API_DEVICE_HPP
#define KOCHOU_API_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "platform/mask.hpp"

/*
GPU
ensure< ext_mask T >
ensure< gpu_mask T >
ensure< vk_api_version T >

QUEUE
ensure< queue_mask >
*/

namespace kochou::api
{
    class device final // dev
    {
        public:
            queue_link< queue_type::present > present_queue;
            queue_link< queue_type::graphic > graphic_queue;
            queue_link< queue_type::compute > compute_queue;
            queue_link< queue_type::trnsfer > trnsfer_queue;

        private:
            vk::raii::Device naked;
            gpu_device gpu;
    };
}

#endif
