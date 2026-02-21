cmake_minimum_required(VERSION 3.15)
project(ktl LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Vulkan REQUIRED)

add_library(ktl INTERFACE)

target_include_directories(ktl INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(ktl INTERFACE Vulkan::Vulkan)
