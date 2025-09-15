#ifndef KOCHOU_UTILS_EXTERNAL_HPP
#define KOCHOU_UTILS_EXTERNAL_HPP

namespace kochou
{
    enum class hold
    {
        unique,
        shared
    }

    template< hold PTR, typename T >
    struct external
    {

    };

    template< typename T >
    struct external< hold::unique >
    {
        using ptr_type = std::unique_ptr< T >;
        using info_type = typename T::info;

        static ptr_type make(const info_type & info)
        {
            return std::make_unique< T >(info);
        }
    };

    template< typename T >
    struct external< hold::shared >
    {
        using ptr_type = std::shared_ptr< T >;
        using info_type = typename T::info;

        static ptr_type make(const info_type & info)
        {
            return std::make_shared< T >(info);
        }
    };
}

/*

auto queue = external< hold::unique, queue_wrapper >::make(queue_info);

*/

#endif
