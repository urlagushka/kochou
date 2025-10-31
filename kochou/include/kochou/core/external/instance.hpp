#ifndef KOCHOU_CORE_WRAPPER_INSTANCE_HPP
#define KOCHOU_CORE_WRAPPER_INSTANCE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "external.hpp"

/*
instance is not default constructable
args:
    extension list
    enable validation layers?

no throw???
instance::make(...) -> result<sptr<instance>, kochou::errc>;
*/

namespace kochou::core
{
    struct instance final
        : external< hold::shared, instance >
    {
        instance(/* extension list? */)
            : vk_instance_(VK_NULL_HANDLE)
        {

        }

        vk::raii::Instance vk_instance_;
    };
}

#endif
