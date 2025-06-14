![logo]()
# kochou
## C++ 20 | VulkanAPI | Eigen | GLFW

### Compilation
MacOS ARM64:
```sh
mkdir build && cd build
cmake -DCMAKE_OSX_ARCHITECTURES="arm64" ..
make
```

### Color space priority
1. VK_COLOR_SPACE_HDR10_ST2084_EXT
2. VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT
3. VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT
4. VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT
5. VK_COLOR_SPACE_SRGB_NONLINEAR_KHR
6. VK_COLOR_SPACE_BT709_NONLINEAR_EXT

git ls-files --exclude-standard -- ':!**/*.png' | xargs wc -l

### Vulkan
1. Base (Основные объекты)
  1. Instance
  2. Window
  3. Surface
  4. Physical Device (выбор GPU)
  5. Logical Device
  6. Queues (графическая, презентационная)

2. Resources Setup (Ресурсы)
  7. Swapchain
  8. Render Pass
  9. Command Pool

3. Texture Pipeline (Текстуры и конвейер)
  10. Загрузка текстур:
    - stbi_load → пиксельные данные
    - Создание staging buffer
    - Создание VkImage (текстура)
    - Копирование данных через командный буфер
    - Создание image view и sampler
  11. Vertex/Index Buffers (если есть геометрия)
  12. Descriptors:
    - Создание Descriptor Set Layout (с указанием текстуры)
    - Создание Descriptor Pool
    - Выделение Descriptor Sets
    - Привязка текстуры и uniform буферов к дескрипторам
  13. Pipeline:
    - Создание шейдерных модулей
    - Создание Pipeline Layout (с привязкой descriptor set layout)
    - Создание Graphics Pipeline

4. Rendering (Рендеринг)
  14. Framebuffers
  15. Command Buffers (запись команд с привязкой текстур)


### shaders
```cpp
namespace egirl
{
  struct shader
  {
    std::filesystem::path path;
    std::string entry;
  };

  struct shaders
  {
    shader vert;
    shader frag;
  };
}
```


int main()
{
  egirl::shaders shaders = {
    .vert = {
      "shader.spv",
      "main"
    },
    .frag = {
      "shader.spv",
      "main"
    }
  };

  egirl::textures

  egirl::config = {
    "app_name",
    {
      "vertex_shader.spv",
      "fragment_shader.spv",
    }
  };
  egirl::assets = {};
  egirl::core
}
