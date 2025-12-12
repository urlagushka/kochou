#include <kochou/core/context.hpp>
#include <kochou/core/type_ostream.hpp>

kochou::errc 
kochou::core::context::apply_version(std::string_view _name)
{

}

kochou::errc
kochou::core::context::apply_extension(std::string_view _name)
{

}

kochou::errc
kochou::core::context::apply_feature(std::string_view _name)
{

}

kochou::errc
kochou::core::context::apply_layer(std::string_view _name)
{

}

kochou::errc
kochou::core::context::finalize()
{
    // instance_ = instance::make(instance_extensions_);
    // device_ = device::make(device_extensions_);
}

void
kochou::core::context::register_errc(errc _errc, std::source_location _backtrace)
{

}
