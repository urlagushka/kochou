#include <kochou/engine/object.hpp>

std::size_t
kochou::object::put(core & m_core, shared_object_interface obj)
{
  std::size_t counter = m_core.__objects.size();
  m_core.__objects[++counter] = obj;

  m_core.update_vertex();
  m_core.update_index();
  m_core.update_uniform();
  m_core.update_descriptors();
  m_core.update_pipeline();

  return counter;
}
