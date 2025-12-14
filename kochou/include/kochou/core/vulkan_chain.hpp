#ifndef KOCHOU_CORE_VULKAN_CHAIN_HPP
#define KOCHOU_CORE_VULKAN_CHAIN_HPP

#include <concepts>

#include <kochou/ktl/result.hpp>
#include <kochou/ktl/memory.hpp>
#include <kochou/errc.hpp>

#include <vulkan/vulkan.hpp>

namespace kochou::core
{
    struct vulkan_struct_base final
    {
        vk::StructureType sType;
        void * pNext;
    };

    template< typename T >
    concept vulkan_struct_type = requires(T t)
    {
        requires std::same_as< decltype(t.sType), vk::StructureType >;
        requires std::same_as< decltype(t.pNext), void * >;
        requires std::is_aggregate_v< T >;
    };

    class vulkan_chain final
    {
        public:
            template< vulkan_struct_type STRUCT >
            ktl::result< void *, errc > insert(STRUCT value)
            {
                auto * chainlet = last_chainlet_access();
                auto result = ktl::memory::alloc< STRUCT >(value);
                if (result.is_err())
                {
                    return ktl::err{result.take_err()};
                }
                chainlet->pNext = result.take_ok();
                return chainlet;
            }

        private:
            ktl::result< vulkan_struct_base *, errc > last_chainlet_access(vk::StructureType type)
            {
                if (!head_)
                {
                    return ktl::ok{static_cast< vulkan_struct_base >(head_)};
                }

                auto * chainlet = static_cast< vulkan_struct_base >(head_);
                while (chainlet->pNext)
                {
                    if (chainlet->sType == type)
                    {
                        return ktl::err{errc::vulkan_chain_duplicate};
                    }
                    chainlet = chainlet->pNext;
                }
                return ktl::ok{chainlet};
            }

        private:
            void * head_; 
    };
}

#endif
