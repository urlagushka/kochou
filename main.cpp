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
    try
    {
        /*
        enumerate modules
        create render module
        */
       auto error = kochou::errc::bad_vk_api_version;
       std::cout << error << std::endl;
       test t;
    }
    catch (const kochou::exception & exception)
    {
        std::cout << exception << std::endl;
    }
    return 0;
}
