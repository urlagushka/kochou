#ifndef KTL_API_VERSION_HPP
#define KTL_API_VERSION_HPP

#include <ktl/type.hpp>

namespace ktl::api
{
using vulkan_version = ktl::u32;

constexpr ktl::api::vulkan_version
make_version(ktl::u32 _variant, ktl::u32 _major, ktl::u32 _minor, ktl::u32 _patch)
{
    return (_variant << 29U) | (_major << 22U) | (_minor << 12U) | _patch;
}
} // namespace ktl::api

#endif
