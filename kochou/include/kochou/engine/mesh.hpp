#ifndef KOCHOU_ENGINE_MESH_HPP
#define KOCHOU_ENGINE_MESH_HPP

#include <memory>

#include <glm/glm.hpp>

#include <vulkan_utils/vertices.hpp>

namespace kochou
{
  class mesh
  {
    public:
      virtual void move(const glm::vec3 & pos) = 0;
      virtual void scale(const glm::vec3 & size) = 0;
      virtual void rotate(const glm::vec3 & angle) = 0;

    protected:
      ~mesh() = default;
      virtual void init() = 0;

      std::vector< vk::utils::vertex3 > __vertices;
      std::vector< uint32_t > __indices;
  };

  using shared_mesh = std::shared_ptr< mesh >;
}

#endif
