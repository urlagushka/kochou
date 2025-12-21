#ifndef KOCHOU_CORE_EXTERNAL_INSTANCE_HPP
#define KOCHOU_CORE_EXTERNAL_INSTANCE_HPP

#include <functional>
#include <set>

#include <vulkan/vulkan_raii.hpp>

#include "external.hpp"

/*
void
kochou::corec::context::build_instance(std::string_view app_name, vk_api_version api, bool is_debug)
{
    vk::ApplicationInfo app_info(app_name.data(), 1, core_name, 1, static_cast< uint32_t >(api));
    vk::InstanceCreateInfo instance_info({}, &app_info);

    const auto app_extensions = get_instance_extensions();
    instance_info.enabledExtensionCount = static_cast< uint32_t >(app_extensions.size());
    instance_info.ppEnabledExtensionNames = app_extensions.data();
    // instance_info.flags |= vk::InstanceCreateFlagBits::eEnumeratePortabilityKHR;

    std::vector< ccarray > app_layers;
    if (is_debug)
    {
        app_layers = {
            "VK_LAYER_KHRONOS_validation"
        };

        instance_info.enabledLayerCount = static_cast< uint32_t >(app_layers.size());
        instance_info.ppEnabledLayerNames = app_layers.data();
    }

    _instance = vk::raii::Instance({}, instance_info);
}

    */

namespace kochou::core
{
    class instance final
        : public external< hold::shared, instance >
    {
        public:
            using extensions_type = std::vector< const char * >;
            using layers_type = std::vector< const char * >;
            using versions_type = std::set< uint32_t, std::greater< uint32_t > >;

        public:
            instance(const extensions_type & _extensions,
                     const layers_type & _layers,
                     const versions_type & _versions);

        private:

        private:
            vk::raii::Instance instance_;
    };
}

#endif
