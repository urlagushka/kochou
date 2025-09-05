#ifndef KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP
#define KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP

#include <iostream>

#include <vulkan/vulkan_raii.hpp>

#include "vulkan.hpp"

namespace kochou::api
{
    using gpu_queue_vector = std::vector< uint32_t >;

    constexpr uint32_t descriptor_indexing_bit = 0x00000001;
    constexpr uint32_t dynamic_render_bit      = 0x00000010;
    constexpr uint32_t mesh_ext_bit            = 0x00000100;

    enum class gpu_type
        : uint32_t
    {
        other      = 0,
        integrated = 1,
        discrete   = 2,
        vvirtual   = 3,
        cpu        = 4,
        any        = 5
    };

    struct gpu_device final
    {
        vk::raii::PhysicalDevice naked = nullptr;

        const std::string name;
        const vk_api_version api;
        const gpu_type type;
        const uint32_t extensions;
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

            uint32_t exts = 0;
            for (const auto & extension : extensions)
            {
                const auto & name = extension.extensionName;
                if (std::string_view(name) == "VK_EXT_mesh_shader")
                {
                    exts ^= mesh_ext_bit;
                }
                if (std::string_view(name) == "VK_KHR_dynamic_rendering")
                {
                    exts ^= dynamic_render_bit;
                }
                if (std::string_view(name) == "VK_EXT_descriptor_indexing")
                {
                    exts ^= descriptor_indexing_bit;
                }
            }

            resolve.push_back({
                std::move(device),
                properties.deviceName,
                static_cast< const vk_api_version >(properties.apiVersion & ~(uint32_t)0xFFF),
                static_cast< const gpu_type >(properties.deviceType),
                exts
            });
        }

        return resolve;
    }
}

namespace kochou::api
{
    struct gpu_requirements
    {
        const vk_api_version api;
        const gpu_type type;
        const uint32_t extensions;
    };

    template< gpu_requirements gpu_ex >
    bool gpu_filter(const gpu_device & device)
    {
        if (static_cast< uint32_t >(gpu_ex.api) != 0 && device.api < gpu_ex.api)
        {
            return false;
        }
        if (gpu_ex.type != gpu_type::any && device.type != gpu_ex.type)
        {
            return false;
        }

        if (gpu_ex.extensions & descriptor_indexing_bit && !(device.extensions & descriptor_indexing_bit))
        {
            return false;
        }
        if (gpu_ex.extensions & dynamic_render_bit && !(device.extensions & dynamic_render_bit))
        {
            return false;
        }
        if (gpu_ex.extensions & mesh_ext_bit && !(device.extensions & mesh_ext_bit))
        {
            return false;
        }

        return true;
    }
}

#endif
