#include <kochou/core/context.hpp>
#include <kochou/core/type_ostream.hpp>

void
kochou::core::context::apply_version(uint32_t _version)
{
    versions_.insert(_version);
}

void
kochou::core::context::apply_extension(std::string_view _name, extension_target _target)
{
    switch (_target)
    {
    case extension_target::instance:
        instance_extensions_.insert(_name);
        break;
    case extension_target::device:
        device_extensions_.insert(_name);
        break;
    }
}

void
kochou::core::context::apply_feature(std::string_view _name)
{

}

void
kochou::core::context::apply_layer(std::string_view _name)
{
    layers_.insert(_name);
}

void
kochou::core::context::register_errc(errc _errc, std::source_location _backtrace)
{

}

kochou::errc
kochou::core::context::finalize()
{
    // instance_ = instance::make(instance_extensions_);
    // device_ = device::make(device_extensions_);
}
