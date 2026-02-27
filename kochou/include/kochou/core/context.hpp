#ifndef KOCHOU_CORE_CONTEXT_HPP
#define KOCHOU_CORE_CONTEXT_HPP

#include <chrono>
#include <memory>
#include <source_location>
#include <tuple>

#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/memory.hpp>
#include <ktl/result.hpp>

#include <kochou/core/external/device.hpp>
#include <kochou/core/external/instance.hpp>
#include <kochou/core/masks/extension.hpp>
#include <kochou/core/vulkan_chain.hpp>

namespace kochou::core
{
class context final
{
public:
    using src_ctx = std::source_location;
    using errc_timestamp = std::chrono::time_point< std::chrono::system_clock >;
    using errc_ctx = std::source_location;
    using errc_log = std::tuple< errc_timestamp, ktl::errc, errc_ctx >;
    // using backtrace_list_type = std::list<  >

public:
    consteval context() = default;
    ~context() = default;

    template < vulkan_struct_type FEATURE_TYPE >
    consteval void
    apply_feature(FEATURE_TYPE _feature, src_ctx _ctx = src_ctx::current());
    consteval void
    apply_version(std::uint32_t _version);
    consteval void
    apply_extension(std::string_view _name, extension_target _target);
    consteval void
    apply_layer(std::string_view _name);
    consteval void
    register_errc(ktl::errc _errc, src_ctx _ctx = src_ctx::current());

    ktl::errc
    finalize();

private:
    ktl::flat_set< std::string_view > instance_extensions_; // instance
    ktl::flat_set< std::string_view > device_extensions_;   // device
    // vulkan_chain features_;                                          // device
    ktl::flat_set< std::string_view > layers_;                          // instance
    ktl::flat_set< std::uint32_t, std::greater< uint32_t > > versions_; // instance

    ktl::memory::sptr< instance > instance_;
    ktl::memory::sptr< device > device_;

    // std::list<  > errors list - backtrace on finalize
};

extern constinit context kochou_context_instance;

inline void /* error list */
init()
{
    kochou_context_instance.finalize();
}
} // namespace kochou::core

template < kochou::core::vulkan_struct_type FEATURE_TYPE >
consteval void
kochou::core::context::apply_feature(FEATURE_TYPE _feature, src_ctx _ctx)
{
    /*
    auto result = features_.insert< FEATURE_TYPE >(_feature);
    if (result.is_err())
    {
        register_errc(result.take_err(), _ctx);
    }

    std::ignore = result.take_ok(); */
}

consteval void
kochou::core::context::apply_version(std::uint32_t _version)
{
    versions_.insert(_version);
}

consteval void
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

consteval void
kochou::core::context::apply_layer(std::string_view _name)
{
    layers_.insert(_name);
}

consteval void
kochou::core::context::register_errc(ktl::errc _errc, src_ctx _backtrace)
{
    return;
}

#endif
