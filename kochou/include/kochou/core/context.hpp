#ifndef KOCHOU_CORE_CONTEXT_HPP
#define KOCHOU_CORE_CONTEXT_HPP

#include <source_location>
#include <memory>

#include <kochou/core/masks/extension.hpp>
#include <kochou/core/external/instance.hpp>
#include <kochou/core/external/device.hpp>
#include <kochou/errc.hpp>

#include <kochou/ktl/fixed_string.hpp>
#include <kochou/ktl/result.hpp>
#include <kochou/ktl/memory.hpp>

/*
errc verify_version
errc verify_extension
errc verify_feature
errc verify_layer
    verify - check if exists and if not deprecated

register_error
    time, errc, src
*/

namespace kochou::core
{
    class context final
    {
        public:
            using extension_set_type = std::set< std::string_view >;
            using layer_set_type = std::set< std::string_view >;
            using version_set_type = std::set< uint32_t, std::greater< uint32_t > >;
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

            void apply_version(uint32_t _version);
            void apply_extension(std::string_view _name, extension_target _target);
            void apply_feature(std::string_view _name);
            void apply_layer(std::string_view _name);
            void register_errc(errc _errc, std::source_location _backtrace = std::source_location::current());

            errc finalize();

        private:
            extension_set_type instance_extensions_; // instance
            extension_set_type device_extensions_;   // device
            // std::set< std::string_view > features_;            // device
            layer_set_type layers_;              // instance
            version_set_type versions_;                    // instance

            ktl::memory::shared_ptr< instance > instance_;
            ktl::memory::shared_ptr< device > device_;

            // std::list<  > errors list - backtrace on finalize
    };
}

#endif
