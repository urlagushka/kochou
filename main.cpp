#include <iostream>

#include <kochou/api/context.hpp>

int main()
{
    kochou::api::context_make_info ctx_info = {
        "kochou",
        true
    };

    auto context = kochou::api::make_unique_context(ctx_info);
    return 0;
}
