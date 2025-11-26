#include <kochou/ktl/reflection.hpp>
// #include <kochou/ktl/memory/direct_storage.hpp>

#include <iostream>
#include <glm/glm.hpp>

struct pohui
{
    int a, b, c, d;
};

struct pohui2
{
    glm::vec3 * asda;
    glm::vec4 * asfa;
    glm::mat3 * sadf;
    glm::mat4 asss;
};

int main()
{
    std::cout << ktl::reflection::fields_amount< pohui > << std::endl;
    std::cout << ktl::reflection::fields_amount< pohui2 > << std::endl;

    static_assert(std::same_as< ktl::reflection::field_type< pohui2, 0 >, glm::vec3 * >);
}
