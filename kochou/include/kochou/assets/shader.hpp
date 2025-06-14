#ifndef KOCHOU_ASSETS_SHADER_HPP
#define KOCHOU_ASSETS_SHADER_HPP

#include <filesystem>
#include <string>

namespace kochou
{
  namespace fs = std::filesystem;

  struct shader
  {
    std::filesystem::path path;
    std::string entry;
  };

  bool valid_shader_path_no_throw(const fs::path & path);
  void valid_shader_path_wh_throw(const fs::path & path);
  // fs::path compile_shader(const fs::path & path);
}

#endif
