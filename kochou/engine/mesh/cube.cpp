#include <kochou/engine/mesh/cube.hpp>

#include <glm/gtc/matrix_transform.hpp>

kochou::cube::cube(const cube_info & info):
  mesh(),
  __info(info),
  __uniform()
{
  init();
}
  
void
kochou::cube::move(const glm::vec3 & pos)
{
  __info.pos += pos;
  init();
}

void
kochou::cube::scale(const glm::vec3 & size)
{
  __info.size = size;
  init();
}

void
kochou::cube::rotate(const glm::vec3 & angle)
{
  __uniform.model = glm::rotate(__uniform.model, angle.x, {1,0,0});
  __uniform.model = glm::rotate(__uniform.model, angle.y, {0,1,0});
  __uniform.model = glm::rotate(__uniform.model, angle.z, {0,0,1});
}

void
kochou::cube::init()
{
  const float l = __info.size.x / 2.0f;
  const float w = __info.size.y / 2.0f;
  const float h = __info.size.z / 2.0f;

  std::vector< glm::vec3 > positions = {
    {-l, -w,  h}, { l, -w,  h}, { l,  w,  h}, {-l,  w,  h},
    {-l, -w, -h}, { l, -w, -h}, { l,  w, -h}, {-l,  w, -h}
  };

  __indices = {
    0, 1, 2, 2, 3, 0,
    5, 4, 7, 7, 6, 5,
    1, 5, 6, 6, 2, 1,
    4, 0, 3, 3, 7, 4,
    3, 2, 6, 6, 7, 3,
    4, 5, 1, 1, 0, 4
  };

  __vertices.clear();
  __vertices.resize(positions.size());
  for (size_t i = 0; i < positions.size(); ++i)
  {
    __vertices[i].pos = positions[i] + __info.pos;
    __vertices[i].color = __info.color;
  }
}
