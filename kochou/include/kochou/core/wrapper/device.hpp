#ifndef KOCHOU_API_WRAPPER_DEVICE_HPP
#define KOCHOU_API_WRAPPER_DEVICE_HPP

#include "kochou/utils/external.hpp"

namespace kochou::api
{
    struct device_info
    {
        struct
        {

        } queue_req;

        struct
        {

        } extension_req;

        struct
        {

        } feature_req;
    };

    class device_wrapper final
        : external< hold::unique, device_wrapper >
    {
        public:
            device_wrapper()                                   = delete;
            device_wrapper(const device_wrapper &)             = delete;
            device_wrapper(device_wrapper &&)                  = delete;
            device_wrapper & operator=(const device_wrapper &) = delete;
            device_wrapper & operator=(device_wrapper &&)      = delete;

            inline auto present() const noexcept;
            inline auto graphic() const noexcept;
            inline auto compute() const noexcept;
            inline auto trnsfer() const noexcept;

        private:
            device_wrapper(const device_info & info);

            vk::raii::Device __naked;
            vk::raii::Queue __present;
            vk::raii::Queue __graphic;
            vk::raii::Queue __compute;
            vk::raii::Queue __trnsfer;
    };
}

/*
auto device = kochou::api::device_wrapper::make(info);
*/

#endif
