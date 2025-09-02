#ifndef KOCHOU_SHADER_LOAD_HPP
#define KOCHOU_SHADER_LOAD_HPP

#include "type.hpp"

namespace kochou
{
    bool valid_shader_path(const fs::path & path);

    bool load_shader(const fs::path & path_q, shader & shader_q);
}

#endif
