#ifndef KOCHOU_MESH_TYPE_HPP
#define KOCHOU_MESH_TYPE_HPP

#include <glm/glm.hpp>
#include <cstdint>
#include <vector>

namespace kochou
{
    constexpr uint8_t max_triangle = 124;
    constexpr uint8_t max_vertices = 64;

    struct mesh
    {
        std::vector< int > triangle_indices;
        std::vector< glm::vec3 > vertex_positions;
    };

    struct meshlet_triangle
    {
        uint8_t vertex0;
        uint8_t vertex1;
        uint8_t vertex2;
    };

    struct meshlet
    {
        int local_vertices[max_vertices];
        meshlet_triangle triangles[max_triangle];
    }
}

#endif
