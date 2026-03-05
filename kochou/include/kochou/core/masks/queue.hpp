#ifndef KOCHOU_CORE_MASKS_QUEUE_HPP
#define KOCHOU_CORE_MASKS_QUEUE_HPP

#include <ktl/api/enums.hpp>
#include <ktl/mask.hpp>

namespace kochou::core
{
enum class queue_type : ktl::mask_underlying_type
{
    graphics = static_cast< ktl::mask_underlying_type >(ktl::api::queue_flag_bits::v_graphics_bit),
    compute  = static_cast< ktl::mask_underlying_type >(ktl::api::queue_flag_bits::v_compute_bit),
    transfer = static_cast< ktl::mask_underlying_type >(ktl::api::queue_flag_bits::v_transfer_bit),
    sparse   = static_cast< ktl::mask_underlying_type >(ktl::api::queue_flag_bits::v_sparse_binding_bit),
    present
};
} // namespace kochou::core

#endif
