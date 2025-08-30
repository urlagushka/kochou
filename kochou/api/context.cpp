#include "context.hpp"

kochou::api::shared_context
kochou::api::make_shared_context(context_make_info & info)
{
    #if !defined(__linux__) assert(false && "platform not supported!");
    #endif
}

kochou::api::unique_context
kochou::api::make_unique_context(context_make_info & info)
{

}

void
kochou::api::context::build_instance(std::string_view app_name, bool is_debug)
{
    vk::ApplicationInfo app_info(app_name.data(), 1, "kochou", 1, VK_API_VERSION_1_3);
    vk::InstanceCreateInfo instance_info({}, &app_info);

    std::vector< const char * > app_extensions = {
        VK_KHR_SURFACE_EXTENSION_NAME,
        "VK_EXT_mesh_shader",
        "VK_KHR_xcb_surface",
        "VK_EXT_swapchain_colorspace"
    };
    instance_info.enabledExtensionCount = static_cast< uint32_t >(app_extensions.size());
    instance_info.ppEnabledExtensionNames = app_extensions.data();

    if (is_debug)
    {
        std::vector< const char * > app_layers = {
            "VK_LAYER_KHRONOS_validation"
        };

        instance_info.enabledLayerCount = static_cast< uint32_t >(app_layers.size());
        instance_info.ppEnabledLayerNames = app_layers.data();
    }

    __instance = vk::raii::Instance({}, instance_info);
}

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
        if (__physical_device.getSurfaceSupportKHR(i, /* surface */))
        {
            __present_queues.push_back(i);
        }
    }

    if (__graphic_queues.empty() || __present_queues.empty())
    {
        throw std::runtime_error("can't find queues!");
    }
}