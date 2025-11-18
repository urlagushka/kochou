#ifndef KOCHOU_ENSURE_HPP
#define KOCHOU_ENSURE_HPP

#include <concepts>
#include <set>

#include "exception.hpp"
#include "result.hpp"
#include "errc.hpp"

/*
template< kochou::fixed_string NAME >
class extension
{
    public:
        static result< std::shared_ptr< void >, kochou::errc > satisfy()
        {
            auto result = kochou::context::get()->verify_extension(NAME);
            if (result.is_err())
            {
                return kochou::err(result.take_err());
            }
            
            return kochou::ok(kochou::context::get());
        }

        ...

    private:
        ...
};

class some_render_module
    : ensure< extension< "VK_EXT_dynamic_rendering" > >
{
    public:
        ...
    private:
        ...
};
*/

namespace kochou
{
    template< typename T >
    concept ensure_type = requires()
    {
        { T::satisfy() } -> std::same_as< result< std::shared_ptr< void >, errc > >;
    };

    template< ensure_type T >
    class ensure
    {
        protected:
            ensure()
            {
                auto result = T::satisfy();
                if (result.is_err())
                {
                    throw exception(this, "ensure satisfy error!", result.take_err());
                }

                ensure_collector::get()->add(result.take_ok());
            }
    };

    class ensure_collector final
    {
        public:
            inline static auto get()
            {
                static auto instance = std::make_shared< ensure_collector >();
                return instance;
            }

            inline void add(std::shared_ptr< void > ptr)
            {
                ensures_.insert(ptr);
            }

        private:
            ensure_collector() = default;
        
        private:
            std::set< std::shared_ptr< void > > ensures_;
    };
}

#endif
