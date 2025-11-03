#include <iostream>

#include <kochou/kochou.hpp>

struct test
    : kochou::unit< test >
{
    test()
    {
        throw kochou::exception(this, "bad args");
    }
};

using kochou_result = kochou::result< int, kochou::errc >;

kochou_result return_ok()
{
    return kochou::ok{0};
}

kochou_result return_err()
{
    return kochou::err{kochou::errc::bad_vk_api_version};
}

int main()
{
    try
    {
        /*
        enumerate modules
        create render module
        */
        // auto error = kochou::errc::bad_vk_api_version;
        auto ext = kochou::core::extension::from("VK_KHR_dynamic_rendering");
        if (ext.is_err())
        {
            std::cout << ext.view_err() << std::endl;
        }
        // std::cout << error << std::endl;
        // test t;
        // throw kochou::exception(nullptr, error, "reason");
    }
    catch (const kochou::exception & exception)
    {
        std::cout << exception << std::endl;
    }
    return 0;
}
