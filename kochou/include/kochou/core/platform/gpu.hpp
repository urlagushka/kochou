#ifndef KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP
#define KOCHOU_API_PLATFORM_PHYSICAL_DEVICE_HPP

#include <ktl/mask.hpp>

#include "version.hpp"

#include <vulkan/vulkan_raii.hpp>

namespace kochou::core
{
struct gpu final
{
    enum _type : ktl::mask_underlying_type
    {
        other = 0x1,
        integrated = 0x2,
        discrete = 0x4,
        vvirtual = 0x8,
        cpu = 0x10
    };

    enum _vendor : ktl::mask_underlying_type
    {
        nvidia = 0x10DE,
        amd = 0x1002
    };

    std::string name;
    _type type;
    _vendor vendor;
    vk_version api;
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

        const std::string name = properties.deviceName;
        const vendor_type vendor = static_cast< const vendor_type >(properties.vendorID);
        const vk_api_version api = static_cast< const vk_api_version >(properties.apiVersion & ~(uint32_t)0xFFF);
        const gpu_mask gpu = static_cast< const gpu_mask >(1 << static_cast< uint32_t >(properties.deviceType));

        resolve.push_back({std::move(device), std::move(name), vendor, api, gpu, ext});
    }

    return resolve;
}
} // namespace kochou::core

namespace kochou::api
{
struct gpu_requirements // gpu_req
{
    const vk_api_version api;
    const gpu_mask gpu;
    const ext_mask ext;
};

template < gpu_requirements gpu_req >
bool
gpu_filter(const gpu_device & gpu_dev)
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
} // namespace kochou::api

#endif
