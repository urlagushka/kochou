#ifndef KOCHOU_CORE_CONTEXT_HPP
#define KOCHOU_CORE_CONTEXT_HPP

#include <chrono>
#include <memory>
#include <source_location>
#include <tuple>

#include <ktl/api.hpp>
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
    consteval context() = default;
    ~context() = default;

    template < vulkan_struct_type FEATURE_TYPE >
    consteval ktl::errc
    apply_feature(FEATURE_TYPE _feature);
    consteval ktl::errc
    apply_version(std::uint32_t _version);
    consteval ktl::errc
    apply_extension(ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > _name, extension_target _target);
    consteval ktl::errc
    apply_layer(std::string_view _name);

    ktl::errc
    finalize();

private:
    ktl::flat_set< ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > > ensure_instance_extensions_;
    ktl::flat_set< ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > > should_instance_extensions_;
    ktl::flat_set< ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > > ensure_device_extensions_;
    ktl::flat_set< ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > > should_device_extensions_;
    // vulkan_chain features_;                                          // device
    ktl::flat_set< std::string_view > layers_;                          // instance
    ktl::flat_set< std::uint32_t, std::greater< uint32_t > > versions_; // instance

    ktl::memory::sptr< instance > instance_;
    ktl::memory::sptr< device > device_;
};

extern constinit context kochou_context_instance;
} // namespace kochou::core

template < kochou::core::vulkan_struct_type FEATURE_TYPE >
consteval ktl::errc
kochou::core::context::apply_feature(FEATURE_TYPE _feature)
{
    /*
    auto result = features_.insert< FEATURE_TYPE >(_feature);
    if (result.is_err())
    {
        register_errc(result.take_err(), _ctx);
    }

    std::ignore = result.take_ok(); */
    return ktl::errc::success;
}

consteval ktl::errc
kochou::core::context::apply_version(std::uint32_t _version)
{
    auto rc = versions_.insert(_version);
    if (rc.is_err())
    {
        return rc.take_err();
    }
    return ktl::errc::success;
}

consteval ktl::errc
kochou::core::context::apply_extension(ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > _name,
                                       extension_target _target)
{
    ktl::flat_set< ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > > * target = nullptr;
    switch (_target)
    {
    case extension_target::instance:
        target = &ensure_instance_extensions_;
        break;
    case extension_target::device:
        target = &ensure_device_extensions_;
        break;
    default:
        return ktl::errc::extension_not_provided;
    }

    auto rc = target->insert(_name);
    if (rc.is_err())
    {
        return rc.take_err();
    }
    return ktl::errc::success;
}

consteval ktl::errc
kochou::core::context::apply_layer(std::string_view _name)
{
    auto rc = layers_.insert(_name);
    if (rc.is_err())
    {
        return rc.take_err();
    }
    return ktl::errc::success;
}

#endif
