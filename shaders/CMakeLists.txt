# Поиск компилятора шейдеров
find_program(GLSLANGVALIDATOR glslangValidator)

function(compile_shader SHADER_IN SHADER_OUT)
    add_custom_command(
        OUTPUT ${SHADER_OUT}
        COMMAND ${GLSLANGVALIDATOR} -V ${SHADER_IN} -o ${SHADER_OUT}
        DEPENDS ${SHADER_IN}
        COMMENT "Compiling shader ${SHADER_IN}"
    )
endfunction()

file(GLOB SHADER_SOURCES "/source/*/*.glsl")
foreach(SHADER ${SHADER_SOURCES})
    get_filename_component(SHADER_NAME ${SHADER} NAME_WE)
    get_filename_component(SHADER_TYPE ${SHADER} DIRECTORY)
    get_filename_component(SHADER_TYPE ${SHADER_TYPE} NAME)
    
    set(OUTPUT_PATH "${CMAKE_BINARY_DIR}/compiled/${SHADER_TYPE}/${SHADER_NAME}.spv")
    compile_shader(${SHADER} ${OUTPUT_PATH})
    list(APPEND COMPILED_SHADERS ${OUTPUT_PATH})
endforeach()

add_custom_target(shaders ALL DEPENDS ${COMPILED_SHADERS})
