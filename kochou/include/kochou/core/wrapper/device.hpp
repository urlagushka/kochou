#ifndef KOCHOU_API_WRAPPER_DEVICE_HPP
#define KOCHOU_API_WRAPPER_DEVICE_HPP

#include "kochou/utils/external.hpp"

namespace kochou::api
{
    class device_wrapper final
        : external< hold::unique, device_wrapper >
    {
        public:
            device_wrapper() = default;

            inline auto present() const noexcept;
            inline auto graphic() const noexcept;
            inline auto compute() const noexcept;
            inline auto trnsfer() const noexcept;

        private:
            device_wrapper(/* ??? */);

            vk::raii::Device __naked;

            vk::raii::Queue __graphics;
            vk::raii::Queue __computes;
            vk::raii::Queue __transfer;
    };
}

#endif
