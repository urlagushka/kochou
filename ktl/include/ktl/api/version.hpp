#ifndef KTL_API_VERSION_HPP
#define KTL_API_VERSION_HPP

#include <compare>

#include <ktl/type.hpp>

namespace ktl::api
{
struct version
{
    ktl::u32 variant;
    ktl::u32 major;
    ktl::u32 minor;
    ktl::u32 patch;

    constexpr explicit version(ktl::u32 _version)
        : variant((_version >> 29U) & 0x7U), major((_version >> 22U) & 0x7FU), minor((_version >> 12U) & 0x3FFU),
          patch(_version & 0xFFFU)
    {
    }
    constexpr explicit version(ktl::u32 _variant, ktl::u32 _major, ktl::u32 _minor, ktl::u32 _patch)
        : variant(_variant), major(_major), minor(_minor), patch(_patch)
    {
    }

    constexpr ktl::u32
    operator()() const
    {
        return (variant << 29U) | (major << 22U) | (minor << 12U) | patch;
    }

    constexpr explicit
    operator ktl::u32() const
    {
        return operator()();
    }

    constexpr std::strong_ordering
    operator<=>(version _rhs)
    {
        return operator()() <=> _rhs.operator()();
    }
};
} // namespace ktl::api

#endif
