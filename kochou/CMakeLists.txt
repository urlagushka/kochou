set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Vulkan REQUIRED)

add_library(kochou
  "src/api/metal.mm"

  "src/core/type_ostream.cpp"
  "src/core/context.cpp"
  "src/core/vulkan_chain.cpp"
  "src/core/instance.cpp"  
)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../ktl ktl)

target_include_directories(kochou PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(kochou PUBLIC Vulkan::Vulkan ktl)

if(APPLE)
    find_library(COCOA_FRAMEWORK Cocoa REQUIRED)
    find_library(METAL_FRAMEWORK Metal REQUIRED)
    find_library(QUARTZCORE_FRAMEWORK QuartzCore REQUIRED)
    find_library(FOUNDATION_FRAMEWORK Foundation REQUIRED)
    
    target_link_libraries(kochou PRIVATE
        ${COCOA_FRAMEWORK}
        ${METAL_FRAMEWORK}
        ${QUARTZCORE_FRAMEWORK}
        ${FOUNDATION_FRAMEWORK}
    )
endif()
