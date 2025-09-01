#ifndef KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP
#define KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

namespace kochou::api
{
    using gpu_queue_vector = std::vector< uint32_t >;

    enum class gpu_type final
        : uint8_t
    {
        other      = 0,
        integrated = 1,
        discrete   = 2,
        virtual    = 3,
        cpu        = 4
    };

    struct gpu final
    {
        vk::raii::PhysicalDevice naked;

        const std::string name;
        const gpu_type type;
        const gpu_queue_vector graphic_queue;
        const gpu_queue_vector present_queue;
    };

    inline static std::vector< gpu > // can't be constexpr
    enumerate_gpu(vk::raii::Instance instance, std::optional< vk::SurfaceKHR > surface_khr)
    {
        auto gpu_list = std::move(instance.enumeratePhysicalDevices());
        if (gpu_list.empty())
        {
            return {};
        }

        for (auto & device : gpu_list)
        {
            const auto properties = device.getProperties();
            const auto features = device.getFeatures();
            const gpu_type type = static_cast< const gpu_type >(properties.deviceType);

        }
    }
}

#endif
