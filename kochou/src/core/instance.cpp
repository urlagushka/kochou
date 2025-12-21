#include <kochou/core/external/instance.hpp>

kochou::core::instance::instance(const extension_set_type & _extensions,
                                 const layer_set_type & _layers,
                                 const version_set_type & _versions)
    : instance_(VK_NULL_HANDLE)
{
    vk::ApplicationInfo app_info{
        "kochou",
        1,
        "kochou",
        1,
        *_versions.cbegin()
    };

    vk::InstanceCreateInfo instance_info({}, &app_info);

    instance_info.enabledExtensionCount = static_cast< uint32_t >(_extensions.size());
    instance_info.ppEnabledExtensionNames = _extensions.data();
    instance_info.enabledLayerCount = static_cast< uint32_t >(_layers.size());
    instance_info.ppEnabledLayerNames = _layers.data();

    // instance_info.flags |= vk::InstanceCreateFlagBits::eEnumeratePortabilityKHR;
            // "VK_LAYER_KHRONOS_validation"

    instance_ = vk::raii::Instance({}, instance_info);
}
