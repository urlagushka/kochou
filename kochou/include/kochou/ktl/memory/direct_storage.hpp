#ifndef KTL_MEMORY_DIRECT_STORAGE_HPP
#define KTL_MEMORY_DIRECT_STORAGE_HPP

#include <array>
#include <any>

#include <kochou/ktl/reflection.hpp>

namespace ktl::memory
{
    template< typename LAYOUT, std::size_t SIZE >
    class direct_storage final
    {
        public:
            static constexpr auto fields_amount = reflection::fields_amount< LAYOUT >;

        public:
            direct_storage()
                : layers_()
            {
                static_assert(fields_amount > 0);
                [&]< std::size_t ... I >(std::index_sequence< I ... >)
                {
                    ((layers_[I] = new reflection::field_type< LAYOUT, I >[SIZE]), ...);
                }
                (std::make_index_sequence< fields_amount >{});
            }

            ~direct_storage()
            {
                [&]< std::size_t ... I >(std::index_sequence< I ... >)
                {
                    (delete [] static_cast< reflection::field_type< LAYOUT, I > * >(layers_[I]), ...);
                }
                (std::make_index_sequence< fields_amount >{});
            }

            template< std::size_t I >
            reflection::field_type< LAYOUT, I > * get()
            {
                return static_cast< reflection::field_type< LAYOUT, I > * >(layers_[I]);
            }

        private:
            std::array< void *, fields_amount > layers_;
    };
}

#endif
