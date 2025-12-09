#ifndef KTL_MEMORY_DIRECT_STORAGE_HPP
#define KTL_MEMORY_DIRECT_STORAGE_HPP

#include <array>
#include <any>

#include <kochou/ktl/reflection.hpp>

#include "allocator.hpp"

/*
CONSTRUCTOR
создаем storage с constexpr размером, 0 слоев по умолчанию
FUTURE - задавать слои списком инициализации

LAYER
слой представляет собой следующее:
1 вариант - два указателя, один на память, другой на битовую маску используемых элементов
2 вариант - один указатель на память, храним данные чанками по 64 блока - uint64_t...элементы
метаданные слоя:
    - количество чанков? как будет работать с gpu?
    - количество занятых элементов? как будет работать с gpu?
    - размер элемента
    - использует cpu/gpu память

ВСТАВКА НОВОЙ СТРУКТУРЫ
1 - вычислить хеш структуры
2 - создать соотношение полей и слоев
проблема - чрезмерное использование невостребованной памяти
проблема - нельзя нарушать логический смысл слоя, следовательно нельзя использовать
один слой для хранения полей разных структур, если их нужно по разному обрабатывать,
несмотря на то что у полей одинаковый размер

ТЕОРИЯ:
доступ по структуре не настолько важный и в случае чего можно подольше подождать
-> использовать слои разной размерности, делать соотношение индексов
-> первый слой - служебный, хранит пару хеш структуры и соотношение индексов (односвязный список?)

КАК ВСТАВЛЯТЬ И УДАЛЯТЬ?
*/

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
