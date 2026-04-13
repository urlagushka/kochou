#ifndef KOCHOU_CORE_REQUIREMENTS_QUEUE_HPP
#define KOCHOU_CORE_REQUIREMENTS_QUEUE_HPP

#include <ktl/errc.hpp>

#include <kochou/core/masks/queue.hpp>
#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < queue_type QUEUE_TYPE >
struct queue final
{
    static ktl::errc
    apply(requirement_type _type) noexcept;

    static bool
    allowed() noexcept;
};
} // namespace kochou::core

template < kochou::core::queue_type QUEUE_TYPE >
ktl::errc
kochou::core::queue< QUEUE_TYPE >::apply(requirement_type _type) noexcept
{
    return ktl::errc::success;
}

template < kochou::core::queue_type QUEUE_TYPE >
bool
kochou::core::queue< QUEUE_TYPE >::allowed() noexcept
{
    return false;
}

#endif
