#ifndef KOCHOU_ENGINE_INFO_HPP
#define KOCHOU_ENGINE_INFO_HPP

#include <string>
#include <vector>
#include <optional>

#include <vulkan/vulkan.hpp>

#include <kochou/assets/shader.hpp>
#include <kochou/assets/texture.hpp>

namespace kochou
{
  struct color_space_priority
  {
    std::vector< vk::ColorSpaceKHR > range;
    vk::ColorSpaceKHR least;
  };

  struct window
  {
    std::size_t width;
    std::size_t height;
  };

  struct info
  {
    std::string app_name;
    window size;
    bool is_fullscreen;
    bool is_resizable;
    bool is_vulkan_vl;

    std::optional< color_space_priority > cs_priority;

    shader vert;
    shader frag;

    std::optional< std::vector< texture > > textures;
  };
}

#endif
