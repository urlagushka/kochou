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

int main()
{
    using kochou_result = kochou::result< std::size_t, kochou::errc >;
    try
    {
        /*
        enumerate modules
        create render module
        */
        auto error = kochou::errc::bad_vk_api_version;
        // std::cout << error << std::endl;
        // test t;
        throw kochou::exception(nullptr, error, "reason");
    }
    catch (const kochou::exception & exception)
    {
        std::cout << exception << std::endl;
    }
    return 0;
}
