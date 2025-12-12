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
            std::set< std::string_view > instance_extensions_; // instance
            std::set< std::string_view > device_extensions_;   // device
            // std::set< std::string_view > features_;            // device
            std::set< std::string_view > layers_;              // instance
            std::set< uint32_t > versions_;                    // instance

            ktl::memory::shared_ptr< instance > instance_;
            ktl::memory::shared_ptr< device > device_;

            // std::list<  > errors list - backtrace on finalize
    };
}

#endif
