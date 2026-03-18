cmake_minimum_required(VERSION 3.10)
project(kochou_ex)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-fno-exceptions -fno-rtti)

find_package(glm REQUIRED)

set(SOURCES main.cpp)

add_subdirectory(kochou)

add_executable(${PROJECT_NAME} ${SOURCES})

if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_WIN32_KHR)
elseif (APPLE)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_MACOS_MVK)
elseif (UNIX)
    target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_XLIB_KHR)
endif()

target_link_libraries(${PROJECT_NAME} kochou)
