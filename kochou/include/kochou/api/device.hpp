#ifndef KOCHOU_API_DEVICE_HPP
#define KOCHOU_API_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "platform/mask.hpp"

namespace kochou::api
{
    // allowed mesh_pipeline
    struct device final
    {
        vk::raii::Device naked;

        pipeline_mask allowed_pipelines;
        
    };
}

#endif
