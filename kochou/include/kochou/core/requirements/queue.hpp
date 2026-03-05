#ifndef KOCHOU_CORE_REQUIREMENTS_QUEUE_HPP
#define KOCHOU_CORE_REQUIREMENTS_QUEUE_HPP

#include <ktl/errc.hpp>

#include <kochou/core/masks/queue.hpp>

namespace kochou::core
{
template < queue_type QUEUE_TYPE >
struct queue final
{
    static consteval ktl::errc
    apply() noexcept;
};
} // namespace kochou::core

template < kochou::core::queue_type QUEUE_TYPE >
consteval ktl::errc
kochou::core::queue< QUEUE_TYPE >::apply() noexcept
{
    return ktl::errc::success;
}

#endif
