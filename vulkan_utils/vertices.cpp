#include <vulkan_utils/vertices.hpp>

vk::VertexInputBindingDescription
vk::utils::vertex3::get_binding_description()
{
  return {0, sizeof(vertex3), vk::VertexInputRate::eVertex};
}

std::vector< vk::VertexInputAttributeDescription >
vk::utils::vertex3::get_attribute_descriptions()
{
  return {
    {0, 0, vk::Format::eR32G32B32Sfloat, offsetof(vertex3, pos)},
    {1, 0, vk::Format::eR32G32B32Sfloat, offsetof(vertex3, color)}
  };
}

vk::VertexInputBindingDescription
vk::utils::vertex2::get_binding_description()
{
  return {0, sizeof(vertex2), vk::VertexInputRate::eVertex};
}

std::vector< vk::VertexInputAttributeDescription >
vk::utils::vertex2::get_attribute_descriptions()
{
  return {
    {0, 0, vk::Format::eR32G32Sfloat, offsetof(vertex2, pos)},
    {1, 0, vk::Format::eR32G32B32Sfloat, offsetof(vertex2, color)}
  };
}
