#ifndef KTL_MEMORY_DIRECT_STORAGE_HPP
#define KTL_MEMORY_DIRECT_STORAGE_HPP

#include <array>
#include <any>

#include <kochou/ktl/reflection.hpp>

namespace ktl::memory::details
{
    template< typename T, std::size_t SIZE >
    struct layer_type
    {
        using value_type = T;

        void * ptr = new value_type[SIZE];
        std::size_t size = sizeof(value_type);
        std::size_t align = alignof(value_type);
    };
}

namespace ktl::memory
{
    template< typename LAYOUT, std::size_t SIZE >
    class direct_storage final
    {
        public:
            static constexpr auto fields_amount = reflection::pod_fields_amount< LAYOUT >;

        public:
            direct_storage()
                : layers_()
            {
                for (auto & layer : layers_)
                {
                    layer = details::layer_type{};
                }
            }

            ~direct_storage()
            {
                for (auto & layer : layers_)
                {
                    delete [] static_cast< details::layer::value_type * >(layer.ptr);
                }
            }

        private:
            std::array< std::any, fields_amount > layers_;
    };
}

#endif
