#ifndef KOCHOU_ENGINE_CUBE_HPP
#define KOCHOU_ENGINE_CUBE_HPP

#include <kochou/engine/mesh.hpp>

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
    alignas(16) glm::mat4 model;
    alignas(16) glm::vec3 color;
  };

  class cube:
    public mesh
  {
    public:
      cube(const cube_info & info);
  
      void move(const glm::vec3 & pos) override;
      void scale(const glm::vec3 & size) override;
      void rotate(const glm::vec3 & angle) override;

    private:
      void init() override;

      cube_info __info;
      cube_uniform __uniform;
  };

  using shared_cube = std::shared_ptr< cube >;
}

#endif
