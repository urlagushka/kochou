cmake_minimum_required(VERSION 3.10)
project(ohri)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Vulkan REQUIRED)
find_package(GLM REQUIRED)

set(SOURCES main.cpp)

add_subdirectory(vulkan_utils)
add_subdirectory(kochou)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${Vulkan_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES})

if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_WIN32_KHR)
elseif (APPLE)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_MACOS_MVK)
elseif (UNIX AND NOT APPLE)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_XLIB_KHR)
endif()

target_link_libraries(${PROJECT_NAME} vulkan_utils)
target_link_libraries(${PROJECT_NAME} kochou)
