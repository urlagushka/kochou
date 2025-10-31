#ifndef KOCHOU_EXTERNAL_EXTERNAL_HPP
#define KOCHOU_EXTERNAL_EXTERNAL_HPP

#include <stdexcept>
#include <cassert>

#include "kochou/exception.hpp"
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
    class external
    {
        // assert(false && "usage of unspecified external template!");
    };

    template< typename T >
    struct external< hold::unique, T >
    {
        using ptr_type = std::unique_ptr< T >;
        using result_type = result< ptr_type, errc >;

        external() = default;
        ~external() = default;

        external(const external &) = delete;
        external(external &&) = delete;
        external & operator=(const external &) = delete;
        external & operator=(external &&) = delete;

        template< typename ... ARGS >
        static result_type make(ARGS &&... _args)
        {
            T * object = nullptr;
            try
            {
                object = new T(std::forward<ARGS>(_args)...);
            }
            catch (const std::bad_alloc &)
            {
                return err{errc::cpp_bad_alloc};
            }
            catch (const exception & error)
            {
                // return err{error.errc.value_or(errc::unspecified)};
            }

            return ok{std::move(ptr_type(object))};
        }
    };

    template< typename T >
    struct external< hold::shared, T >
    {
        using ptr_type = std::shared_ptr< T >;
        using result_type = result< ptr_type, errc >;

        external() = default;
        ~external() = default;

        external(const external &) = delete;
        external(external &&) = delete;
        external & operator=(const external &) = delete;
        external & operator=(external &&) = delete;

        template< typename ... ARGS >
        static result_type make(ARGS &&... _args)
        {
            T * object = nullptr;
            try
            {
                object = new T(std::forward<ARGS>(_args)...);
            }
            catch (const std::bad_alloc &)
            {
                return err{errc::cpp_bad_alloc};
            }
            catch (const exception & error)
            {
                // return err{error.errc.value_or(errc::unspecified)};
            }

            return ok{std::move(ptr_type(object))};
        }
    };
}

#endif
