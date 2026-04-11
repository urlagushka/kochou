#ifndef KTL_API_TYPE_HPP
#define KTL_API_TYPE_HPP

#include <ktl/fixed_string.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/type.hpp>

namespace ktl::api
{
template < typename T >
struct ptr_meta final
{
    using parent = T::parent;
    using type   = T::type;
    enum : std::underlying_type_t< ktl::u32 >
    {
        object = 0
    };
};

template < typename T >
struct struct_meta final
{
    // valid vulkan chain
    // vulkan chain - linear graph of deps
    /*
        kochou::core::ensure< kochou::core::version< ktl::u32 > >
        kochou::core::ensure< kochou::core::extension< ktl::fixed_string > >
        kochou::core::ensure< kochou::core::feature< ktl::api::feature_struct_typename, feature_struct_impl > >
        kochou::core::should< kochou::core::feature< ktl::api::feature_struct_typename, feature_struct_impl > >
        kochou::core::should< kochou::core::layer< ktl::fixed_string > >
    */
    static constexpr ktl::usize                                next_size = 0;
    static constexpr ktl::flat_set< ktl::api::structure_type > next_data = {};
};

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

// never use
struct anative_window;
struct ahardware_buffer;
} // namespace ktl::api

#endif
