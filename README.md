![logo](https://github.com/urlagushka/kochou/blob/main/pics/kochou2.png)
# kochou
## C++ 23 | VulkanAPI

# ITS WILL BE GPU DRIVEN CORE WITH CPU METADATA ONLY

### Compilation
```sh
xmake build
```

```
1.2 - descriptor_indexing
1.3 - mesh_shader, pipeline_callback, dynamic_rendering
```


### Color space priority
1. VK_COLOR_SPACE_HDR10_ST2084_EXT
2. VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT
3. VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT
4. VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT
5. VK_COLOR_SPACE_SRGB_NONLINEAR_KHR
6. VK_COLOR_SPACE_BT709_NONLINEAR_EXT

git ls-files --exclude-standard -- ':!**/*.png' | xargs wc -l


about modules
```cpp
// main.cpp

namespace kochou::core
{
ktl::memory::uptr make_unique_context(json);
ktl::memory::uptr make_unique_context(conf);
ktl::memory::sptr make_shared_context(json);
ktl::memory::sptr make_shared_context(conf);
}

// user can specify its own render_config struct
// or use default render_config
// default render_config

// for example
struct shadow_config final
{
    using cubemap = kochou::user::shadow_cubmap;
};

struct render_config final
{
    // shadows
    bool allow_quality_change;
}

int main(int argc, char ** argv)
{
    auto debug_render_config   = {
        .quality_settin
    };
    auto release_render_config = {...};

    kochou::core::context debug_context   = kochou::core::make_context(debug_render_config);
    kochou::core::context release_context = kochou::core::make_context(release_render_config);
}
```

```json
// render config
{

}
```
