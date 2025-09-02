#ifndef KOCHOU_API_WINDOW_HPP
#define KOCHOU_API_WINDOW_HPP

namespace kochou::api
{
    struct window_make_info // win_info
    {
        std::size_t width;
        std::size_t height;
        std::string title;
    }; 

    class window final // win
    {
        friend struct modifiers;
        friend std::shared_ptr< window > make_shared_window(window_make_info &);
        friend std::unique_ptr< window > make_unique_window(window_make_info &);

        public:
            window()                           = delete;
            window(const window &)             = delete;
            window & operator=(const window &) = delete;

            bool should_close() const;

        private:
            window(window_make_info & win_info);

            GLFWwindow * __glfw_window;
    };

    using shared_window = std::shared_ptr< window >; // s_win
    using unique_window = std::unique_ptr< window >; // u_win

    shared_window make_shared_window(const window_make_info & win_info); // -> throw on failure
    unique_window make_unique_window(const window_make_info & win_info); // -> throw on failure
}

#endif
