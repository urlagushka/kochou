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
    using extension_set_type = std::set< std::string_view >;
    using layer_set_type = std::set< std::string_view >;
    using version_set_type = std::set< uint32_t, std::greater< uint32_t > >;
    using src_ctx = std::source_location;

    using errc_timestamp = std::chrono::time_point< std::chrono::system_clock >;
    using errc_ctx = std::source_location;
    using errc_log = std::tuple< errc_timestamp, ktl::errc, errc_ctx >;
    // using backtrace_list_type = std::list<  >

public:
    ~context() = default;

private:
    context() = default;

public:
    static auto
    get()
    {
        static auto instance = std::shared_ptr< context >(new context());
        return instance;
    }

    template < vulkan_struct_type FEATURE_TYPE >
    consteval void
    apply_feature(FEATURE_TYPE _feature, src_ctx _ctx = src_ctx::current());
    consteval void
    apply_version(uint32_t _version);
    consteval void
    apply_extension(std::string_view _name, extension_target _target);
    consteval void
    apply_layer(std::string_view _name);

    void
    register_errc(ktl::errc _errc, src_ctx _ctx = src_ctx::current());

    ktl::errc
    finalize();

private:
    ktl::flat_set< std::string_view > instance_extensions_; // instance
    ktl::flat_set< std::string_view > device_extensions_;   // device
    vulkan_chain features_;                                 // device
    ktl::flat_set< std::string_view > layers_;              // instance
    ktl::flat_set< std::uint32_t > versions_;               // instance

    ktl::memory::shared_ptr< instance > instance_;
    ktl::memory::shared_ptr< device > device_;

    // std::list<  > errors list - backtrace on finalize
};
} // namespace kochou::core

template < kochou::core::vulkan_struct_type FEATURE_TYPE >
consteval void
kochou::core::context::apply_feature(FEATURE_TYPE _feature, src_ctx _ctx)
{
    auto result = features_.insert< FEATURE_TYPE >(_feature);
    if (result.is_err())
    {
        register_errc(result.take_err(), _ctx);
    }

    std::ignore = result.take_ok();
}

#endif
