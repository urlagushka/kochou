#include <iostream>

#include <kochou/kochou.hpp>

int main()
{
  try
  {
    kochou::shader vert = {
      "/Users/urlagushka/Documents/ohri/shaders/compiled/vertex/shader.spv",
      "main"
    };
    kochou::shader frag = {
      "/Users/urlagushka/Documents/ohri/shaders/compiled/fragment/shader.spv",
      "main"
    };
    kochou::info app_info = {
      "test app",
      {800, 600},
      false,
      false,
      true,
      std::nullopt,
      std::move(vert),
      std::move(frag),
      std::nullopt
    };
    kochou::core app(app_info);

    kochou::cube_info info = {
      {0, 0, 0},
      {0, 0, 0},
      {1, 1, 1},
      {255, 255, 255}
    };
    kochou::object::create< kochou::cube, kochou::cube_info >(app, info)
  }
  catch (const vk::SystemError & err)
  {
    std::cerr << "vk::SystemError: " << err.what() << std::endl;
    return 1;
  }
  catch (const std::exception & err)
  {
    std::cerr << "std::exception: " << err.what() << std::endl;
    return 1;
  }
  catch (...)
  {
    std::cerr << "Unknown error\n";
    return 1;
  }

  return 0;
}
