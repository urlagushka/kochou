#include <kochou/assets/shader.hpp>

#include <stdexcept>

bool
kochou::valid_shader_path_no_throw(const fs::path & path)
{
  return path.extension() == ".spv";
}

void
kochou::valid_shader_path_wh_throw(const fs::path & path)
{
  if (!valid_shader_path_no_throw(path))
  {
    throw std::runtime_error("shader extension is invalid! (.spv required)");
  }
}
