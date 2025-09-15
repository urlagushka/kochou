#ifndef KOCHOU_API_WRAPPER_DEVICE_HPP
#define KOCHOU_API_WRAPPER_DEVICE_HPP

#include "kochou/utils/external.hpp"

namespace kochou::api
{
    struct device_wrapper
        : external< hold::unique, device_wrapper >
    {

    }
}

/*
auto device = kochou::api::device_wrapper::make(info);
*/

#endif
