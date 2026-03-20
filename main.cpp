#include <iostream>
#include <ranges>

#include <ktl/api.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/reflection/type_name.hpp>

#include <kochou/api/window/window.hpp>
#include <kochou/core/context.hpp>
#include <kochou/core/loader.hpp>
#include <kochou/core/requirements/allowed.hpp>
#include <kochou/core/requirements/ensure.hpp>
#include <kochou/user/default_render.hpp>

static kochou::loader::handle_type handle;

struct vk_instance;
struct allocator_callbacks;

struct vk_application_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_application_info;
    const void *             next = nullptr;
    const char *             application_name;
    ktl::u32                 application_version;
    const char *             engine_name;
    ktl::u32                 api_version;
};

struct vk_instance_create_info final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_instance_create_info;
    const void *                next = nullptr;
    ktl::u32                    flags;
    const vk_application_info * application_info;
    ktl::u32                    enabled_layer_count;
    const char * const *        enabled_layer_names;
    ktl::u32                    enabled_extension_count;
    const char * const *        enabled_extension_names;
};

ktl::api::result
vk_create_instance(const vk_instance_create_info * _create_info, vk_instance ** _instance)
{
    using pnf_vk_create_instance =
        ktl::api::result (*)(const vk_instance_create_info *, const allocator_callbacks *, vk_instance **);

    static kochou::loader::proc_type ptr = kochou::loader::proc_null;
    if (ptr == kochou::loader::proc_null)
    {
        auto result = kochou::loader::proc(handle, "vkCreateInstance");
        if (!result.has_value())
        {
            std::cerr << result.error() << std::endl;
            std::abort();
        }
        ptr = result.take_value();
    }

    return ((pnf_vk_create_instance)ptr)(_create_info, nullptr, _instance);
}

int
main()
{
    auto rc = kochou::loader::load();
    if (!rc.has_value())
    {
        std::cout << rc.error() << std::endl;
        return 1;
    }
    handle = rc.take_value();
    std::cout << "loaded" << std::endl;

    {
        vk_application_info application_info = {.application_name    = "ohri",
                                                .application_version = 1,
                                                .engine_name         = "kochou",
                                                .api_version         = ktl::api::make_version(0, 1, 0, 0)};

        vk_instance_create_info instance_create_info = {.flags                   = 0,
                                                        .application_info        = &application_info,
                                                        .enabled_layer_count     = 0,
                                                        .enabled_layer_names     = nullptr,
                                                        .enabled_extension_count = 0,
                                                        .enabled_extension_names = nullptr};

        vk_instance * instance = nullptr;
        auto          rc       = vk_create_instance(&instance_create_info, &instance);
        std::cout << (ktl::i32)rc << std::endl;
    }

    auto rc1 = kochou::loader::free(handle);
    if (!rc1.has_value())
    {
        std::cout << rc1.error() << std::endl;
    }
    // kochou::user::metadata_render render;
}

// kochou::user::metadata_render render;
// std::cout << kochou::core::allowed< kochou::user::metadata_render >() << std::endl;
