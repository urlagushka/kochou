#ifndef KOCHOU_API_CONTEXT_HPP
#define KOCHOU_API_CONTEXT_HPP

#include <memory>
#include <string>

#include <vulkan/vulkan_raii.hpp>

#include <kochou/api/platform/gpu.hpp>

namespace kochou::api
{
    struct context_make_info // ctx_info
    {
        std::string app_name;
        bool is_debug;
    };

    class context final // ctx
    {
        friend struct modifiers;
        friend std::shared_ptr< context > make_shared_context(const context_make_info &);
        friend std::unique_ptr< context > make_unique_context(const context_make_info &);

        public:
            context()                            = delete;
            context(const context &)             = delete;
            context & operator=(const context &) = delete;

        private:
            context(const context_make_info & ctx_info);

            void build_instance(std::string_view app_name, bool is_debug = false);

            vk::raii::Instance       __instance;
    };

    using shared_context = std::shared_ptr< context >; // s_ctx
    using unique_context = std::unique_ptr< context >; // u_ctx

    shared_context make_shared_context(const context_make_info & ctx_info); // -> throw on failure
    unique_context make_unique_context(const context_make_info & ctx_info); // -> throw on failure
}

#endif
