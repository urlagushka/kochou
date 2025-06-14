#ifndef KOCHOU_ENGINE_MESH_HPP
#define KOCHOU_ENGINE_MESH_HPP

#include <memory>
#include <span>

#include <glm/glm.hpp>

#include <vulkan_utils/vertices.hpp>

namespace kochou
{
  class mesh
  {
    friend struct object;
    public:
      mesh() = delete;
      mesh(const mesh &) = delete;
      mesh(mesh &&) = delete;
      mesh & operator=(const mesh &) = delete;
      mesh & operator=(mesh &&) = delete;

      virtual void move(const glm::vec3 & pos) = 0;
      virtual void scale(const glm::vec3 & size) = 0;
      virtual void rotate(const glm::vec3 & angle) = 0;

    protected:
      ~mesh() = default;
      virtual void init() = 0;

      std::span< vk::utils::vertex3 > __vertices;
      std::span< uint32_t > __indices;
  };

  using unique_mesh = std::unique_ptr< mesh >;
  using shared_mesh = std::shared_ptr< mesh >;
}

#endif
