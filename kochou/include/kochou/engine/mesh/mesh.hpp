#ifndef KOCHOU_ENGINE_MESH_HPP
#define KOCHOU_ENGINE_MESH_HPP

#include <memory>
#include <vector>

#include <vulkan_utils/vertices.hpp>

namespace kochou
{
  class mesh
  {
    friend struct object;
    public:
      mesh() = default;
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

      std::vector< vk::utils::vertex3 > __vertices;
      std::vector< uint32_t > __indices;
  };

  using unique_mesh = std::unique_ptr< mesh >;
  using shared_mesh = std::shared_ptr< mesh >;

  template< typename T >
  concept mesh_type = std::is_base_of_v< mesh, T >;
}

#endif
