#ifndef KTL_API_TYPE_HPP
#define KTL_API_TYPE_HPP

#include <cstdint>

#include <ktl/fixed_string.hpp>
#include <ktl/flat_set.hpp>

#include "constants.hpp"

#define KTL_API_MAX_FEATURE_NAME_SIZE 1024
#define KTL_API_MAX_LAYER_NAME_SIZE 1024

namespace ktl::api
{
struct extension_name final : ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE >
{
    using ktl::fixed_string< KTL_API_MAX_EXTENSION_NAME_SIZE >::fixed_string;
};
struct feature_name final : ktl::fixed_string< KTL_API_MAX_FEATURE_NAME_SIZE >
{
    using ktl::fixed_string< KTL_API_MAX_FEATURE_NAME_SIZE >::fixed_string;
};
struct layer_name final : ktl::fixed_string< KTL_API_MAX_LAYER_NAME_SIZE >
{
    using ktl::fixed_string< KTL_API_MAX_LAYER_NAME_SIZE >::fixed_string;
};
using version_type = std::uint32_t;

struct feature final
{
    ktl::api::feature_name                    name;
    ktl::api::version_type                    version;
    ktl::flat_set< ktl::api::extension_name > extension_deps;
    ktl::flat_set< ktl::api::feature_name >   feature_deps;

    std::uint32_t structure_type;
    std::uint32_t offset;
    std::uint32_t size;
};

struct extension final
{
    ktl::api::extension_name                  name;
    ktl::api::version_type                    spec_version;
    ktl::api::version_type                    promoted_to;
    ktl::flat_set< ktl::api::feature >        features;
    ktl::flat_set< ktl::api::extension_name > deps;
};
} // namespace ktl::api

#endif
