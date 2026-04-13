# Core level
provides vulkan features

# loader design

```cpp
// context vtable
// hardcode index

// ktl

thread_local pnf_table * ptable = nullptr;

namespace ktl::api
{
    static constexpr pnf_table_size = 0;

    template < typename PROC_TYPE >
    using pnf_table = std::array< PROC_TYPE, pnf_table_size >;
    using pnf_id = ktl::u32;

    // generated
    using pnf_vk_create_instance = ktl::api::result (*)(const vk_instance_create_info *, const allocator_callbacks *,
                                                    ptr_instance *);

    ktl::api::result vk_create_instance(const vk_instance_create_info * _create_info, ptr_instance * _instance)
    {
        kochou::loader::proc_type ptr = &ptable[0]; // 0 for example
        if (ptr == kochou::loader::proc_null) [[unlikely]]
        {
            return ktl::api::result::v_error_unknown;
        }

        return ((pnf_vk_create_instance)ptr)(_create_info, nullptr, _instance);
    }
}

// kochou

#include <ktl/api.hpp>

namespace kochou
{
    // for example
    void draw_konata(kochou::context & _ctx /* or shared */, void * _konata)
    {
        kochou::setup_context(_ctx) ctx; // pnf_table = *_ctx

        ktl::api::draw_konata(/* ... */); // real vulkan-api function

        // pnf_table = nullptr
    }
}

```
