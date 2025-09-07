#include <kochou/api/context.hpp>

#include <iostream>
#include <ranges>

#include <kochou/api/platform/vulkan.hpp>
#include <kochou/api/platform/gpu.hpp>
#include <kochou/api/type_ostream.hpp>

kochou::api::shared_context
kochou::api::make_shared_context(const context_make_info & info)
{
    auto * ctx = new context(info);
    return std::shared_ptr< context >(ctx);
}

kochou::api::unique_context
kochou::api::make_unique_context(const context_make_info & info)
{
    auto * ctx = new context(info);
    return std::unique_ptr< context >(ctx);
}

kochou::api::context::context(const context_make_info & ctx_info)
    : __instance(nullptr)
{
    build_instance(ctx_info.app_name, ctx_info.api, ctx_info.is_debug);

    constexpr gpu_requirements any_gpu = {
        .api = vk_api_version::v1_2,
        .gpu = gpu_mask::integrated | gpu_mask::discrete,
        .ext = ext_mask::dynamic_render | ext_mask::descriptor_indexing
    };

    const auto gpu_devs = enumerate_gpu(__instance);
    for (const auto gpu_dev : gpu_devs | std::views::filter(gpu_filter< any_gpu >))
    {
        std::cout << gpu_dev << std::endl;
    }
}

void
kochou::api::context::build_instance(std::string_view app_name, vk_api_version api, bool is_debug)
{
    vk::ApplicationInfo app_info(app_name.data(), 1, core_name, 1, static_cast< uint32_t >(api));
    vk::InstanceCreateInfo instance_info({}, &app_info);

    const auto app_extensions = get_instance_extensions();
    instance_info.enabledExtensionCount = static_cast< uint32_t >(app_extensions.size());
    instance_info.ppEnabledExtensionNames = app_extensions.data();
    instance_info.flags |= vk::InstanceCreateFlagBits::eEnumeratePortabilityKHR;

    std::vector< ccarray > app_layers;
    if (is_debug)
    {
        app_layers = {
            "VK_LAYER_KHRONOS_validation"
        };

        instance_info.enabledLayerCount = static_cast< uint32_t >(app_layers.size());
        instance_info.ppEnabledLayerNames = app_layers.data();
    }

    __instance = vk::raii::Instance({}, instance_info);
}

/*
void
kochou::api::context::find_queues()
{
    std::vector< vk::QueueFamilyProperties > queues = __physical_device.getQueueFamilyProperties();

    for (uint32_t i = 0; i < queues.size(); ++i)
    {
        if (queues[i].queueFlags & vk::QueueFlagBits::eGraphics)
        {
            __graphic_queues.push_back(i);
        }
        if (__physical_device.getSurfaceSupportKHR(i, ))
        {
            __present_queues.push_back(i);
        }
    }

    if (__graphic_queues.empty() || __present_queues.empty())
    {
        throw std::runtime_error("can't find queues!");
    }
}
*/
