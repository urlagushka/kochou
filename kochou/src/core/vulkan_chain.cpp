#include <kochou/core/vulkan_chain.hpp>

/*
ktl::result< kochou::core::vulkan_struct_base *, kochou::errc >
kochou::core::vulkan_chain::last_chainlet_access(vk::StructureType type) noexcept
{
    if (!head_)
    {
        return ktl::ok{static_cast< vulkan_struct_base * >(head_)};
    }

    auto * chainlet = static_cast< vulkan_struct_base * >(head_);
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
*/