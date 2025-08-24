![logo](https://github.com/urlagushka/kochou/blob/main/pics/kochou2.png)
# kochou
## C++ 20 | VulkanAPI | GLFW

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
