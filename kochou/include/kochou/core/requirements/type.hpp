#ifndef KOCHOU_CORE_REQUIREMENTS_TYPE_HPP
#define KOCHOU_CORE_REQUIREMENTS_TYPE_HPP

#include <concepts>

#include <ktl/api/constants.hpp>
#include <ktl/api/enums.hpp>
#include <ktl/errc.hpp>

#include <kochou/core/masks/queue.hpp>

namespace kochou::core
{
enum class requirement_type : std::uint32_t
{
    ensure = 0,
    should = 1
};

template < typename T >
concept requirement_concept = requires() {
    requires std::same_as< decltype(T::apply()), ktl::errc >;
    requires std::same_as< decltype(T::allowed()), bool >;
    requires noexcept(T::apply());
    requires noexcept(T::allowed());
};

struct requirement_data final
{
    union
    {
        ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE > extension;
        ktl::fixed_string< KTL_API_MAX_FEATURE_NAME_SIZE >   feature;
        ktl::fixed_string< KTL_API_MAX_LAYER_NAME_SIZE >     layer;
        std::uint32_t                                        version;
        queue_type                                           queue;
    } data;
    enum
    {
        extension,
        feature,
        layer,
        version,
        queue
    } tag;
};
} // namespace kochou::core

#endif
