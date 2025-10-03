#ifndef KOCHOU_CORE_WINDOW_HPP
#define KOCHOU_CORE_WINDOW_HPP

#include <string_view>

#include "kochou/utils/external.hpp"

namespace kochou::core
{
    class window final
        : external< hold::shared, window >
    {
        public:
            bool should_close() const;

        private:
            window(std::size_t width, std::size_t height, std::string_view title);

            GLFWwindow * __glfw_window;
    };
}

#endif
