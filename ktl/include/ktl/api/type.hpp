#ifndef KTL_API_TYPE_HPP
#define KTL_API_TYPE_HPP

#include <cstdint>

#include <ktl/flat_set.hpp>

#include "constants.hpp"

#define KTL_API_MAX_FEATURE_NAME_SIZE 1024

namespace ktl::api
{
using version_type = std::uint32_t;
using feature_name_type = char[KTL_API_MAX_FEATURE_NAME_SIZE];
using extension_name_type = char[KTL_API_MAX_EXTENSION_NAME_SIZE];

struct feature final
{
    ktl::api::feature_name_type name;
    ktl::api::version_type version;
    ktl::flat_set< ktl::api::extension_name_type > extension_deps;
    ktl::flat_set< ktl::api::feature_name_type > feature_deps;

    std::uint32_t structure_type;
    std::uint32_t offset;
    std::uint32_t size;
};

struct extension final
{
    ktl::api::extension_name_type name;
    ktl::api::version_type spec_version;
    ktl::api::version_type promoted_to;
    ktl::flat_set< ktl::api::feature > features;
    ktl::flat_set< ktl::api::extension_name_type > deps;
};
} // namespace ktl::api

#endif
