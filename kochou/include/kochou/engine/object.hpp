#ifndef KOCHOU_ENGINE_OBJECT_HPP
#define KOCHOU_ENGINE_OBJECT_HPP

#include <cstddef>

#include <kochou/engine/mesh.hpp>

namespace kochou
{
  class core;
  struct object
  {
    static std::size_t put(core & m_core, shared_mesh obj);
  };
}

#endif
