#version 450
layout(location = 0) in vec3 inPosition;
layout(location = 1) in vec3 inColor;

layout(location = 0) out vec3 fragColor;

void main() {
    // Жестко заданная матрица перспективной проекции
    float near = 0.1;
    float far = 100.0;
    float fov = radians(45.0);
    float aspect = 1.0; // соотношение сторон
    
    float tanHalfFov = tan(fov / 2.0);
    
    mat4 projection = mat4(
        1.0 / (aspect * tanHalfFov), 0.0, 0.0, 0.0,
        0.0, 1.0 / tanHalfFov, 0.0, 0.0,
        0.0, 0.0, -(far + near) / (far - near), -1.0,
        0.0, 0.0, -(2.0 * far * near) / (far - near), 0.0
    );
    
    // Матрица вида (камера немного отодвинута)
    mat4 view = mat4(
        1.0, 0.0, 0.0, 0.0,
        0.0, 1.0, 0.0, 0.0,
        0.0, 0.0, 1.0, 0.0,
        0.0, 0.0, -3.0, 1.0
    );
    
    // Матрица модели (поворот куба)
    float angle = radians(45.0);
    mat4 model = mat4(
        cos(angle), 0.0, sin(angle), 0.0,
        0.0, 1.0, 0.0, 0.0,
        -sin(angle), 0.0, cos(angle), 0.0,
        0.0, 0.0, 0.0, 1.0
    );
    
    // Комбинированная матрица
    mat4 mvp = projection * view * model;
    
    gl_Position = mvp * vec4(inPosition, 1.0);
    fragColor = inColor;
}