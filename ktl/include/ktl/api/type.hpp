#ifndef KTL_API_TYPE_HPP
#define KTL_API_TYPE_HPP

#include <cstdint>

#include <ktl/fixed_string.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/type.hpp>

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
using vulkan_version = ktl::u32;

struct feature final
{
    ktl::api::feature_name                    name;
    ktl::api::vulkan_version                  version;
    ktl::flat_set< ktl::api::extension_name > extension_deps;
    ktl::flat_set< ktl::api::feature_name >   feature_deps;

    ktl::u32 structure_type;
    ktl::u32 offset;
    ktl::u32 size;
};

struct extension final
{
    ktl::api::extension_name                  name;
    ktl::api::vulkan_version                  spec_version;
    ktl::api::vulkan_version                  promoted_to;
    ktl::flat_set< ktl::api::feature >        features;
    ktl::flat_set< ktl::api::extension_name > deps;
};
} // namespace ktl::api

#endif
