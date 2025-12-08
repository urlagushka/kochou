#ifndef KOCHOU_CORE_EXTERNAL_DEVICE_HPP
#define KOCHOU_CORE_EXTERNAL_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

namespace kochou::core
{
    class device final
    {
        public:

        private:
            vk::raii::Device __naked;

            vk::raii::Queue __graphics;
            vk::raii::Queue __computes;
            vk::raii::Queue __transfer;
    };
}

#endif
