#ifndef KOCHOU_ENGINE_CUBE_HPP
#define KOCHOU_ENGINE_CUBE_HPP

#include <glm/glm.hpp>

#include <kochou/engine/mesh/mesh.hpp>

namespace kochou
{
  struct cube_info
  {
    glm::vec3 pos;
    glm::vec3 angle;
    glm::vec3 size;
    glm::vec3 color;
  };

  struct cube_uniform
  {
    glm::mat4 model;
    glm::vec3 color;
  };

  class cube:
    public mesh
  {
    public:
      struct vertex;
      struct index;
      struct uniform;

      void move(const glm::vec3 & pos) override;
      void scale(const glm::vec3 & size) override;
      void rotate(const glm::vec3 & angle) override;

    private:
      cube(const cube_info & info);

      void init() override;

      cube_info __info;
      cube_uniform __uniform;
  };

  using unique_cube = std::unique_ptr< cube >;
  using shared_cube = std::shared_ptr< cube >;
}

#endif
