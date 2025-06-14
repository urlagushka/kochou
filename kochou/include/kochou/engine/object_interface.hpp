#ifndef KOCHOU_ENGINE_OBJECT_INTERFACE_HPP
#define KOCHOU_ENGINE_OBJECT_INTERFACE_HPP

#include <memory>

#include <glm/glm.hpp>

#include <kochou/engine/uniform_buffer.hpp>
#include <vulkan_utils/vertices.hpp>

namespace kochou
{
  class object_interface
  {
    public:
      virtual void move(const glm::vec3 & pos) = 0;
      virtual void scale(const glm::vec3 & size) = 0;
      virtual void rotate(const glm::vec3 & angle) = 0;

    protected:
      ~object_interface() = default;
      virtual void init() = 0;

      std::vector< vk::utils::vertex3 > __vertices;
      std::vector< uint32_t > __indices;
  };

  using shared_object_interface = std::shared_ptr< object_interface >;
}

#endif
