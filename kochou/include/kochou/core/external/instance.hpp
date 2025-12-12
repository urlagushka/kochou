#ifndef KOCHOU_CORE_EXTERNAL_INSTANCE_HPP
#define KOCHOU_CORE_EXTERNAL_INSTANCE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "external.hpp"

#include <kochou/core/ensure/extension.hpp>
#include <kochou/core/ensure/feature.hpp>
#include <kochou/core/ensure/layer.hpp>
#include <kochou/core/ensure/version.hpp>

/*
instance is not default constructable
args:
    extension list
    enable validation layers?

instance() -> instance; // throw
instance::make(...) -> result<sptr<instance>, kochou::errc>; // no throw
*/
/*
namespace
{
    using namespace kochou::core;

    vulkan_version get_min_vk_version(const extension_set & _set)
    {
        return std::min_element(_set.cbegin(), _set.cend(), [](const extension & _lhs, const extension & _rhs) -> bool
        {
            return _lhs.copy_version() > _rhs.copy_version();       
        })->copy_version();
    }
}

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
            using set_type = std::set< std::string_view, std::greater<  > >;

        public:
            instance(set_type _extensions, set_type _layers, set_type _versions)
                : instance_(VK_NULL_HANDLE)
            {
                // cauto version = std::min
            }

        private:

        private:
            vk::raii::Instance instance_;
    };
}

#endif
