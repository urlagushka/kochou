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

    while (!app.should_close())
    {
      app.draw();
    }
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
