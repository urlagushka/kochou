#ifndef KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP
#define KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "vulkan.hpp"
#include "queue.hpp"
#include "type.hpp"
#include "mask.hpp"

namespace kochou::api
{
    struct gpu_device final // gpu_dev
    {
        vk::raii::PhysicalDevice naked = nullptr;

        const std::string    name;
        const vendor_type    vendor;
    
        const vk_api_version api;
        const gpu_mask       gpu;
        const ext_mask       ext;

        const queue_distribution< vendor > queues;
    };

    inline static std::vector< gpu_device > // can't be constexpr
    enumerate_gpu(vk::raii::Instance & instance)
    {
        auto gpu_list = std::move(instance.enumeratePhysicalDevices());
        if (gpu_list.empty())
        {
            return {};
        }

        std::vector< gpu_device > resolve;
        for (auto & device : gpu_list)
        {
            const auto extensions = device.enumerateDeviceExtensionProperties();
            const auto properties = device.getProperties();

            const std::string name   = properties.deviceName;
            const vendor_type vendor = static_cast< const vendor_type >(properties.vendorID);
            const vk_api_version api = static_cast< const vk_api_version >(properties.apiVersion & ~(uint32_t)0xFFF);
            const gpu_mask gpu       = static_cast< const gpu_mask >(1 << static_cast< uint32_t >(properties.deviceType));

            ext_mask ext;
            for (const auto & extension : extensions)
            {
                const auto & name = extension.extensionName;
                
                if (std::string_view(name) == "VK_EXT_mesh_shader" && (ext & ext_mask::mesh_shader) != ext_mask::mesh_shader)
                {
                    ext ^= ext_mask::mesh_shader;
                }
                if (std::string_view(name) == "VK_KHR_dynamic_rendering" && (ext & ext_mask::dynamic_rendering) != ext_mask::dynamic_rendering)
                {
                    ext ^= ext_mask::dynamic_rendering;
                }
                if (std::string_view(name) == "VK_EXT_descriptor_indexing" && (ext & ext_mask::descriptor_indexing) != ext_mask::descriptor_indexing)
                {
                    ext ^= ext_mask::descriptor_indexing;
                }
            }

            resolve.push_back({std::move(device), std::move(name), vendor, api, gpu, ext});
        }

        return resolve;
    }
}

namespace kochou::api
{
    struct gpu_requirements // gpu_req
    {
        const vk_api_version api;
        const gpu_mask       gpu;
        const ext_mask       ext;
    };

    template< gpu_requirements gpu_req >
    bool gpu_filter(const gpu_device & gpu_dev)
    {
        if (gpu_req.api > gpu_dev.api)
        {
            return false;
        }

        if ((gpu_req.gpu & gpu_dev.gpu) != gpu_dev.gpu)
        {
            return false;
        }

        if ((gpu_req.ext & gpu_dev.ext) != gpu_req.ext)
        {
            return false;
        }

        return true;
    }
}

#endif
