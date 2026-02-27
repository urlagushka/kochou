#include <kochou/core/context.hpp>

ktl::errc
kochou::core::context::finalize()
{
    return ktl::errc::unspecified;
    // instance_ = instance::make(instance_extensions_);
    // device_ = device::make(device_extensions_);
}
