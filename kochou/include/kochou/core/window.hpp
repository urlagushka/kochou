#ifndef KOCHOU_CORE_WINDOW_HPP
#define KOCHOU_CORE_WINDOW_HPP

#include <string_view>

#include "kochou/unit.hpp"
#include "kochou/utils/external.hpp"

namespace kochou::core
{
    class window final
        : unit< window >
        , external< hold::shared, window >
        , 
    {
        public:
            window(std::size_t width, std::size_t height, std::string_view title);
            bool should_close() const;

        private:
            GLFWwindow * __glfw_window;
    };
}

#endif
