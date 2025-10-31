#ifndef KOCHOU_EXTERNAL_EXTERNAL_HPP
#define KOCHOU_EXTERNAL_EXTERNAL_HPP

#include "kochou/result.hpp"
#include "kochou/errc.hpp"

namespace kochou::core
{
    enum class hold
    {
        unique,
        shared
    };

    template< hold, typename >
    class external {};

    template< typename T >
    class external< hold::unique >
    {
        using ptr_type = std::unique_ptr< T >;
        using result_type = result< ptr_type, errc >;

        public:
            external(const external &)             = delete;
            external(external &&)                  = delete;
            external & operator=(const external &) = delete;
            external & operator=(external &&)      = delete;

            template< typename ... Args >
            static result_type make(Args ...&& args)
            {
                return ptr_type< T >(new T(std::forward<Args>(args)...));
            }

        private:
            external()  = default;
            ~external() = default;
    };

    template< typename T >
    class external< hold::shared >
    {
        using ptr_type = std::shared_ptr< T >;

        public:
            external(const external &)             = delete;
            external(external &&)                  = delete;
            external & operator=(const external &) = delete;
            external & operator=(external &&)      = delete;

            template< typename ... Args >
            static ptr_type make(Args ...&& args)
            {
                return ptr_type< T >(new T(std::forward<Args>(args)...));
            }

        private:
            external()  = default;
            ~external() = default;
    };
}

#endif
