#ifndef KOCHOU_API_CONTEXT_HPP
#define KOCHOU_API_CONTEXT_HPP

#include <memory>

#include <kochou/core/external/instance.hpp>
#include <kochou/core/external/device.hpp>
#include <kochou/errc.hpp>

#include <kochou/ktl/fixed_string.hpp>
#include <kochou/ktl/result.hpp>

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

            errc verify_version(std::string_view _name);
            errc verify_extension(std::string_view _name);
            errc verify_feature(std::string_view _name);
            errc verify_layer(std::string_view _name);
            errc finalize();

        private:
            std::set< std::string_view > instance_extensions_;
            std::set< std::string_view > device_extensions_;
            std::set< std::string_view > features_;
            std::set< std::string_view > layers_;
            std::set< std::string_view > versions_;

            std::shared_ptr< instance > instance_;
            std::shared_ptr< device > device_;

            // std::list<  > errors list - backtrace on finalize
    };
}

#endif
