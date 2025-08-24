#ifndef KOCHOU_SHADER_SHADER_HPP
#define KOCHOU_SHADER_SHADER_HPP

namespace kochou
{
    class shader_wrapper
    {
        using opt_str_view = std::optional< std::string_view >;
        namespace fs = std::filesystem;

        public:
            shader_wrapper(const fs::path & path, shader_type type, opt_str_view entry = {})
                : __error(std::errc::owner_dead) // ибо нехуй просить ошибку просто так
                , __is_error(false)
            {
                // valid path
                // read bytes
            }

            // &&create(device)

            bool is_error() const
            {
                return __is_error;
            }

            std::errc error() const
            {
                return __error;
            }

        private:
            std::error_code __error;
            bool __is_error;
    }
}

#endif
