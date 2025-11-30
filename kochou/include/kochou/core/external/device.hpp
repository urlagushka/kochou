#ifndef KOCHOU_CORE_EXTERNAL_DEVICE_HPP
#define KOCHOU_CORE_EXTERNAL_DEVICE_HPP

#include "wrapper.hpp"

namespace kochou::core
{
    class device final
        : wrapper< device >
    {
        public:
            device_wrapper() = default;

        private:
            vk::raii::Device __naked;

            vk::raii::Queue __graphics;
            vk::raii::Queue __computes;
            vk::raii::Queue __transfer;
    };
}

#endif
