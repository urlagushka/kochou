#ifndef KOCHOU_CORE_WINDOW_HPP
#define KOCHOU_CORE_WINDOW_HPP

#include <string_view>

#include "ensure.hpp"
#include "external/external.hpp"

/*
no ensure here
glfwGetRequiredInstanceExtensions(); use for get extension in constructor
*/

namespace kochou::core
{
    class window final
        : external< hold::shared, window >
    {
        public:
            window(std::size_t width, std::size_t height, std::string_view title);
            bool should_close() const;

        private:
            GLFWwindow * __glfw_window;
    };
}

#endif
