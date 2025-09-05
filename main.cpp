#include <iostream>

#include <kochou/api/context.hpp>

int main()
{
    kochou::api::context_make_info ctx_info = {
        "kochou",
        kochou::api::vk_api_version::v1_4,
        true
    };

    auto context = kochou::api::make_unique_context(ctx_info);
    return 0;
}
