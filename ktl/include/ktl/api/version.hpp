#ifndef KTL_API_VERSION_HPP
#define KTL_API_VERSION_HPP

#include <ktl/api/type.hpp>

namespace ktl::api
{
constexpr version_type
make_version(std::uint32_t variant, std::uint32_t major, std::uint32_t minor, std::uint32_t patch)
{
    return (variant << 29U) | (major << 22U) | (minor << 12U) | patch;
}
} // namespace ktl::api

#endif
