#ifndef KOCHOU_CORE_EXTERNAL_INSTANCE_HPP
#define KOCHOU_CORE_EXTERNAL_INSTANCE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "external.hpp"
#include "kochou/core/extension.hpp"

/*
instance is not default constructable
args:
    extension list
    enable validation layers?

instance() -> instance; // throw
instance::make(...) -> result<sptr<instance>, kochou::errc>; // no throw
*/

namespace
{
    using namespace kochou::core;

    extension::version get_min_vk_version(const extension_set & _set)
    {
        return std::min(_set.cbegin(), _set.cend(), [](const extension & lhs, const extension & rhs)
        {
            return lhs.version > rhs.version;       
        })->version;
    }
}

namespace kochou::core
{
    class instance final
        : external< hold::shared, instance >
    {
        public:
            instance(extension_set _set)
                : vk_instance_(VK_NULL_HANDLE)
            {

            }

        private:
            vk::raii::Instance vk_instance_;
    };
}

#endif
