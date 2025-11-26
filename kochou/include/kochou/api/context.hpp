#ifndef KOCHOU_API_CONTEXT_HPP
#define KOCHOU_API_CONTEXT_HPP

#include <memory>

#include <kochou/core/external/instance.hpp>
#include <kochou/core/external/device.hpp>
#include <kochou/fixed_string.hpp>
#include <kochou/result.hpp>
#include <kochou/errc.hpp>

namespace kochou::api
{
    class context final
    {
        public:
            inline static auto get() const
            {
                static auto instance = std::make_shared< context >();
                return instance;
            }

            inline result< std::shared_ptr< void >, errc > add_extension(const fixed_string & _name)
            {
                auto result = core::extension::from(_name);
                if (result.is_err())
                {
                    return err(result.take_err());
                }

                return ok(std::static_pointer_cast< void >(context::get()));
            }

            // inline result< std::shared_ptr< void >, errc > add_feauture(const fixed_string & _name);
            // 

        private:
            context()
                : instance_(nullptr)
                , device_(nullptr)
            {}
            ~context() = default;

        private:
            std::set< core::extension > extensions_;
            // std::set< core::feature > features_;

            std::unique_ptr< core::instance > instance_;
            std::unique_ptr< core::device > device_;
    };
}

#endif
