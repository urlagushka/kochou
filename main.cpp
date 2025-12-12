#include <kochou/kochou.hpp>

#include <ranges>
#include <iostream>
#include <glm/glm.hpp>

class metadata_render
    : kochou::core::ensure< kochou::core::extension< "KHR" > >
    , kochou::core::ensure< kochou::core::version< kochou::core::vulkan_version::v1_0 > >
{};

struct pohui
{
    int a, b, c, d;
};

struct pohui2
{
    glm::vec3 asda;
    glm::vec4 asfa;
    glm::mat3 sadf;
    glm::mat4 asss;
};

int main()
{
    metadata_render tmp;
    // std::cout << ktl::reflection::fields_amount< pohui > << std::endl;
    // std::cout << ktl::reflection::fields_amount< pohui2 > << std::endl;

    static_assert(std::same_as< ktl::reflection::field_type< pohui2, 0 >, glm::vec3 >);

    constexpr std::size_t size = 100;
    ktl::memory::direct_storage< pohui, size > test;
    auto * ptr = test.get< 0 >();
    for (int i : std::views::iota(0, static_cast< int >(size)))
    {
        ptr[i] = i;
    }
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << ptr[i] << std::endl;
    }
}
