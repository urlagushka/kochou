set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Vulkan REQUIRED)

add_library(kochou
  "src/core/type_ostream.cpp"
)

target_include_directories(kochou PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(kochou PUBLIC Vulkan::Vulkan)
