#ifndef KOCHOU_CORE_WRAPPER_INSTANCE_HPP
#define KOCHOU_CORE_WRAPPER_INSTANCE_HPP

#include <vulkan/vulkan_raii.hpp>

#include "kochou/unit.hpp"

namespace kochou::core
{
    class instance final
        : unit< instance >
    {
        public:
            instance() = delete;
            instance(/* extension list? */)
                : vk_instance_(VK_NULL_HANDLE)
            {

            }

        private:
            vk::raii::Instance vk_instance_;
    }
}

#endif
