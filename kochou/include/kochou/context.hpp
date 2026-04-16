#ifndef KOCHOU_CORE_CONTEXT_HPP
#define KOCHOU_CORE_CONTEXT_HPP

#include <chrono>
#include <memory>
#include <source_location>
#include <tuple>

#include <ktl/api/api.hpp>
#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/memory.hpp>
#include <ktl/result.hpp>
#include <ktl/type.hpp>

#include <kochou/external/device.hpp>
#include <kochou/external/instance.hpp>
#include <kochou/masks/extension.hpp>
#include <kochou/masks/queue.hpp>
#include <kochou/vulkan_chain.hpp>

namespace kochou::core
{
class context final
{
public:
    ~context() = default;

    template < vulkan_struct_type FEATURE_TYPE >
    ktl::errc
    apply_feature(FEATURE_TYPE _feature)
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

    ktl::errc
    apply_version(ktl::api::vulkan_version _version)
    {
        auto rc = versions_.insert(_version);
        if (rc.has_value()) [[likely]]
        {
            return ktl::errc::success;
        }
        return rc.error();
    }

    ktl::errc
    apply_extension(ktl::api::extension_name _name, extension_target _target)
    {
        ktl::flat_set< ktl::api::extension_name > * target = nullptr;
        switch (_target)
        {
        case extension_target::instance:
            target = &ensure_instance_extensions_;
            break;
        case extension_target::device:
            target = &ensure_device_extensions_;
            break;
        default:
            return ktl::errc::extension_not_provides;
        }

        auto rc = target->insert(_name);
        if (rc.has_value()) [[likely]]
        {
            return ktl::errc::success;
        }
        return rc.error();
    }

    ktl::errc
    apply_layer(ktl::api::layer_name _name)
    {
        auto rc = layers_.insert(_name);
        if (rc.has_value()) [[likely]]
        {
            return ktl::errc::success;
        }
        return rc.error();
    }

    bool
    allowed(::std::string_view _name)
    {
        return false;
    };

    ktl::errc
    finalize();

private:
    context() = default;

private:
    ktl::flat_set< ktl::api::extension_name > ensure_instance_extensions_;
    ktl::flat_set< ktl::api::extension_name > should_instance_extensions_;
    ktl::flat_set< ktl::api::extension_name > ensure_device_extensions_;
    ktl::flat_set< ktl::api::extension_name > should_device_extensions_;
    // vulkan_chain features_;                                          // device
    ktl::flat_set< ktl::api::layer_name >                                               layers_;   // instance
    ktl::flat_set< ktl::api::vulkan_version, std::greater< ktl::api::vulkan_version > > versions_; // instance

    ktl::flat_set< ktl::api::extension_name > real_extensions_;
    ktl::flat_set< ktl::api::feature_name >   real_features_;
    ktl::api::vulkan_version                  real_version_;
    ktl::flat_map< std::string_view,
                   std::pair< ktl::u32, ktl::flat_set< std::variant< ktl::api::extension_name, ktl::api::feature_name,
                                                                     ktl::api::layer_name, ktl::u32, queue_type > > > >
        requirements;

    ktl::memory::sptr< instance > instance_;
    ktl::memory::sptr< device >   device_;
};
} // namespace kochou::core

#endif
