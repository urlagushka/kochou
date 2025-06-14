#ifndef KOCHOU_ENGINE_OBJECT_HPP
#define KOCHOU_ENGINE_OBJECT_HPP

#include <cstddef>

#include <kochou/engine/core.hpp>
#include <kochou/engine/object_interface.hpp>

namespace kochou
{
  struct object
  {
    static std::size_t put(core & m_core, shared_object_interface obj);
  };
}

#endif
