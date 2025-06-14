#ifndef VULKAN_UTILS_VERTICES_HPP
#define VULKAN_UTILS_VERTICES_HPP

#include <vulkan/vulkan.hpp>
#include <glm/glm.hpp>

namespace vk::utils
{
  template< typename T >
  concept vertex_type = requires(T vtype)
  {
    vtype.pos;
    vtype.color;

    { vtype.get_binding_description() } -> std::same_as< vk::VertexInputBindingDescription >;
    { vtype.get_attribute_descriptions() } -> std::same_as< std::vector< vk::VertexInputAttributeDescription > >;
  };

  struct vertex3
  {
    glm::vec3 pos;
    glm::vec3 color;

    static vk::VertexInputBindingDescription get_binding_description();
    static std::vector< vk::VertexInputAttributeDescription > get_attribute_descriptions();
  };

  struct vertex2
  {
    glm::vec2 pos;
    glm::vec3 color;

    static vk::VertexInputBindingDescription get_binding_description();
    static std::vector< vk::VertexInputAttributeDescription > get_attribute_descriptions();
  };
}

#endif
