#ifndef KOCHOU_API_WRAPPER_DEVICE_HPP
#define KOCHOU_API_WRAPPER_DEVICE_HPP

#include "kochou/utils/external.hpp"

namespace kochou::api
{
    struct device_info
    {
        
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

            queue_link present() const noexcept;
            queue_link graphic() const noexcept;
            queue_link compute() const noexcept;
            queue_link trnsfer() const noexcept;

        private:
            device_wrapper(const device_info & info);

            vk::raii::Device __naked;
    }
}

/*
auto device = kochou::api::device_wrapper::make(info);
*/

#endif
