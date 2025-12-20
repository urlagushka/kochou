#ifndef KOCHOU_CORE_CONTEXT_HPP
#define KOCHOU_CORE_CONTEXT_HPP

#include <source_location>
#include <memory>
#include <chrono>
#include <tuple>

#include <kochou/core/masks/extension.hpp>
#include <kochou/core/external/instance.hpp>
#include <kochou/core/external/device.hpp>
#include <kochou/core/vulkan_chain.hpp>
#include <kochou/errc.hpp>

#include <kochou/ktl/fixed_string.hpp>
#include <kochou/ktl/result.hpp>
#include <kochou/ktl/memory.hpp>

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
            using errc_log = std::tuple< errc_timestamp, errc, errc_ctx >;
            // using backtrace_list_type = std::list<  >

        public:
            ~context() = default;

        private:
            context() = default;

        public:
            static auto get()
            {
                static auto instance = std::shared_ptr< context >(new context());
                return instance;
            }

            template< vulkan_struct_type FEATURE_TYPE >
            void apply_feature(FEATURE_TYPE _feature, src_ctx _ctx = src_ctx::current());
            void apply_version(uint32_t _version);
            void apply_extension(std::string_view _name, extension_target _target);
            void apply_layer(std::string_view _name);

            void register_errc(errc _errc, src_ctx _ctx = src_ctx::current());

            errc finalize();

        private:
            extension_set_type instance_extensions_; // instance
            extension_set_type device_extensions_;   // device
            vulkan_chain features_;            // device
            layer_set_type layers_;              // instance
            version_set_type versions_;                    // instance

            ktl::memory::shared_ptr< instance > instance_;
            ktl::memory::shared_ptr< device > device_;

            // std::list<  > errors list - backtrace on finalize
    };
}

template< kochou::core::vulkan_struct_type FEATURE_TYPE >
void
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
