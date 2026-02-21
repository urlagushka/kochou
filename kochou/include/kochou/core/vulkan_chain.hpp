#ifndef KOCHOU_CORE_VULKAN_CHAIN_HPP
#define KOCHOU_CORE_VULKAN_CHAIN_HPP

#include <concepts>

#include <ktl/errc.hpp>
#include <ktl/memory.hpp>
#include <ktl/result.hpp>

#include <vulkan/vulkan.hpp>

namespace kochou::core
{
struct vulkan_struct_base final
{
    vk::StructureType sType;
    void * pNext;
};

template < typename T >
concept vulkan_struct_type = requires(T t) {
    requires std::same_as< decltype(t.sType), vk::StructureType >;
    requires std::same_as< decltype(t.pNext), void * >;
    requires std::is_aggregate_v< T >;
};

class vulkan_chain final
{
public:
    template < vulkan_struct_type STRUCT >
    ktl::result< void *, ktl::errc >
    insert(STRUCT value) noexcept;

private:
    ktl::result< vulkan_struct_base *, ktl::errc >
    last_chainlet_access(vk::StructureType type) noexcept;

private:
    void * head_;
};
} // namespace kochou::core

template < kochou::core::vulkan_struct_type STRUCT >
ktl::result< void *, ktl::errc >
kochou::core::vulkan_chain::insert(STRUCT value) noexcept
{
    auto access_result = last_chainlet_access(value.sType);
    if (access_result.is_err())
    {
        return ktl::err{access_result.take_err()};
    }
    auto * chainlet = access_result.take_ok();
    auto alloc_result = ktl::memory::alloc< STRUCT >(value);
    if (alloc_result.is_err())
    {
        return ktl::err{alloc_result.take_err()};
    }
    chainlet->pNext = alloc_result.take_ok();
    return chainlet;
}

#endif
