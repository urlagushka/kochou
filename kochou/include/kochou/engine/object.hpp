#ifndef KOCHOU_ENGINE_OBJECT_HPP
#define KOCHOU_ENGINE_OBJECT_HPP

#include <cstddef>

#include <kochou/engine/mesh.hpp>

namespace kochou
{
  template< typename T >
  concept object_type = std::is_base_of_v< mesh, T >;

  template< typename T >
  concept info_type = requires(T itype)
  {
    { itype.vertex_size } -> std::convertible_to< std::size_t >;
    { itype.index_size } -> std::convertible_to< std::size_t >;
  };

  class core;
  struct object
  {
    template< object_type OBJ, info_type INF >
    static std::size_t create(core & m_core, INF info)
    {
      auto vertex_memory = m_core.alloc_vertex(info.vertex_size);
      auto index_memory = m_core.alloc_index(info.index_size);

      auto new_obj = std::make_unique< OBJ >(info);
      return m_core.put(new_obj);
    }
  };
}

#endif
