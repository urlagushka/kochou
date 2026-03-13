#ifndef KTL_API_VERSION_HPP
#define KTL_API_VERSION_HPP

#include <ktl/api/type.hpp>
#include <ktl/type.hpp>

namespace ktl::api
{
constexpr ktl::api::vulkan_version
make_version(ktl::u32 variant, ktl::u32 major, ktl::u32 minor, ktl::u32 patch)
{
    return (variant << 29U) | (major << 22U) | (minor << 12U) | patch;
}
} // namespace ktl::api

#endif
