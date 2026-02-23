low level vulkan api

```cpp
ktl::api::create_instance <- VkCreateInstance

objects:
    ktl::api::extension
    ktl::api::feature
    ktl::api::version

// constexpr
struct ktl::api::extension
{
    char name[MAX_EXTENSION_NAME_SIZE];
    ktl::api::version spec_version;
    ktl::api::version promoted_to;
    ktl::flat_set< ktl::api::feature > features;
    ktl::flat_set< char[MAX_EXTENSION_NAME_SIZE] > deps;
};

// constexpr
constexpr ktl::flat_map< char[MAX_EXTENSION_NAME_SIZE], ktl::api::extension >
get_all_extensions() noexcept
{
    static constexpr ktl::flat_map< char[MAX_EXTENSION_NAME_SIZE], ktl::api::extension > all = {
        // ...
    }
    return all;
}
// contains/at noexcept

// constexpr
struct ktl::api::feature
{
    char name[MAX_FEATURE_NAME_SIZE];
    ktl::api::version version;
    ktl::flat_set< char[MAX_EXTENSION_NAME_SIZE] > extension_deps;
    ktl::flat_set< char[MAX_FEATURE_NAME_SIZE] > feature_deps;
    
    ktl::api::structure_type structure_type;
    std::uint32_t offset;
    std::uint32_t size;
};

constexpr ktl::flat_map< char[MAX_FEATURE_NAME_SIZE], ktl::api::feature >
get_all_extensions() noexcept
{
    static constexpr ktl::flat_map< char[MAX_FEATURE_NAME_SIZE], ktl::api::feature > all = {
        // ...
    }
    return all;
}
// contains/at noexcept

using ktl::api::version = std::uint32_t;
```
