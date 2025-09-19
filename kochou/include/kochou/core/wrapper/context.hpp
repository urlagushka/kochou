#ifndef KOCHOU_API_CONTEXT_HPP
#define KOCHOU_API_CONTEXT_HPP

namespace kochou::api
{
    class context final
        : external< hold::shared >
    {
        public:
            context()                            = delete;
            context(const context &)             = delete;
            context(context &&)                  = delete;
            context & operator=(const context &) = delete;
            context & operator=(context &&)      = delete;
    };
}

#endif
