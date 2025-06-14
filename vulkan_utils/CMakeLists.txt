set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_library(vulkan_utils STATIC
  io_handles.cpp
  instance.cpp
  device.cpp
  window.cpp
  swapchain.cpp
  pipeline.cpp
  shaders.cpp
  render_pass.cpp
  xx_buffer.cpp
  vertices.cpp
  descriptors.cpp
)

target_link_libraries(vulkan_utils glfw)
target_link_libraries(vulkan_utils glm::glm)

target_include_directories(vulkan_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(vulkan_utils PUBLIC ${Vulkan_INCLUDE_DIRS})

