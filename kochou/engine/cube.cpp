#include <kochou/engine/cube.hpp>

kochou::cube::cube(const cube_info & info):
  __vertices(0),
  __indices(0),
  __info(info)
{
  init();
}
  
void
kochou::cube::move(const glm::vec3 & pos)
{

}

void
kochou::cube::scale(const glm::vec3 & size)
{

}

void
kochou::cube::rotate(const glm::vec3 & angle)
{

}

void
kochou::cube::init()
{
  const float l = __info.size.x / 2.0f;
  const float w = __info.size.y / 2.0f;
  const float h = __info.size.z / 2.0f;

  std::vector< glm::vec3 > pos = {
    {-l, -w,  h},
    { l, -w,  h},
    { l,  w,  h},
    {-l,  w,  h},
    {-l, -w, -h},
    { l, -w, -h},
    { l,  w, -h},
    {-l,  w, -h}
  };

  __indices = {
    0, 1, 2, 2, 3, 0,
    5, 4, 7, 7, 6, 5,
    1, 5, 6, 6, 2, 1,
    4, 0, 3, 3, 7, 4,
    3, 2, 6, 6, 7, 3,
    4, 5, 1, 1, 0, 4
  };

  __vertices.resize(pos.size());
  for (auto & vert : pos)
  {
      vert.pos = pos[i] + __info.pos;
  }

  for (size_t i = 0; i < indices.size(); i += 3)
  {
    glm::vec3 v0 = __vertices[__indices[i]].pos;
    glm::vec3 v1 = __vertices[__indices[i + 1]].pos;
    glm::vec3 v2 = __vertices[__indices[i + 2]].pos;
    
    glm::vec3 edge1 = v1 - v0;
    glm::vec3 edge2 = v2 - v0;
    glm::vec3 normal = glm::normalize(glm::cross(edge1, edge2));

    __vertices[indices[i]].normal = normal;
    __vertices[indices[i + 1]].normal = normal;
    __vertices[indices[i + 2]].normal = normal;
  }
}
