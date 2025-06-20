set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(kochou
  engine/core.cpp
  engine/cube.cpp
  engine/object.cpp
  engine/buffer.cpp

  assets/shader.cpp
  assets/texture.cpp
)

target_link_libraries(kochou PRIVATE vulkan_utils)

target_include_directories(kochou PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(kochou PUBLIC ${Vulkan_INCLUDE_DIRS})
