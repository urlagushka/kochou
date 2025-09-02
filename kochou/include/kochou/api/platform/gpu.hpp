#ifndef KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP
#define KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP

#include <ranges>

#include <vulkan/vulkan_raii.hpp>

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
        cpu        = 4
    };

    struct gpu final
    {
        vk::raii::PhysicalDevice naked = nullptr;

        const std::string name;
        const gpu_type type;
        const uint32_t extensions;
        const gpu_queue_vector graphic_queue;
        const gpu_queue_vector present_queue;
    };

    inline static std::vector< gpu > // can't be constexpr
    enumerate_gpu(vk::raii::Instance & instance, std::optional< vk::SurfaceKHR > surface_khr = std::nullopt)
    {
        auto gpu_list = std::move(instance.enumeratePhysicalDevices());
        if (gpu_list.empty())
        {
            return {};
        }

        std::vector< gpu > resolve;
        for (auto & device : gpu_list)
        {
            const auto extensions = device.enumerateDeviceExtensionProperties();
            const auto properties = device.getProperties();
            // const auto features = device.getFeatures();

            const gpu_type type = static_cast< const gpu_type >(properties.deviceType);
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

            if (surface_khr)
            {
                assert(false && "TODO: find queues for physical device!");
            }

            resolve.push_back({
                std::move(device),
                properties.deviceName,
                type,
                exts,
                {}, {}
            });
        }

        return resolve;
    }
}

namespace kochou::api
{
    struct gpu_requirements
    {
        const gpu_type type;
        const uint32_t extensions;
    };

    template< gpu_requirements gpu_ex >
    bool gpu_filter(const gpu & rhs)
    {
        if (gpu_ex.type != rhs.type)
        {
            return false;
        }
        if (gpu_ex.type)
        {
            if (gpu_ex.type.value() != rhs.value)
            {
                res = false;
            }
        }

        if (gpu_ex.extensions)
        {
            const auto & exts = gpu_ex.extensions.value();
            const bool is_descriptor_indexing_req = exts & descriptor_indexing_bit;
            const bool is_dynamic_render_req = exts & dynamic_render_bit;
            const bool is_req_mesh = exts & mesh_ext_bit;
            if (is_descriptor_indexing_req)
            {
                
            }
            //
        }
    }
}

#endif
