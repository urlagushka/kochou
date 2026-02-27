#ifndef KTL_API_TYPE_HPP
#define KTL_API_TYPE_HPP

#include <cstdint>

#include <ktl/flat_set.hpp>

#include "constants.hpp"

#define KTL_API_MAX_FEATURE_NAME_SIZE 1024

namespace ktl::api
{
using version = std::uint32_t;

struct feature
{
    char name[KTL_API_MAX_FEATURE_NAME_SIZE];
    ktl::api::version version;
    ktl::flat_set< char[KTL_API_MAX_FEATURE_NAME_SIZE] > extension_deps;
    ktl::flat_set< char[KTL_API_MAX_EXTENSION_NAME_SIZE] > feature_deps;

    std::uint32_t structure_type;
    std::uint32_t offset;
    std::uint32_t size;
};

struct extension
{
    char name[KTL_API_MAX_EXTENSION_NAME_SIZE];
    ktl::api::version spec_version;
    ktl::api::version promoted_to;
    ktl::flat_set< ktl::api::feature > features;
    ktl::flat_set< char[KTL_API_MAX_EXTENSION_NAME_SIZE] > deps;
};
} // namespace ktl::api

#endif
