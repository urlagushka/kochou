#ifndef KOCHOU_CORE_SLANG_HPP
#define KOCHOU_CORE_SLANG_HPP

namespace kochou::core
{
class slang final
{
public:
    static slang &
    get()
    {
        static slang instance;
        return instance;
    }
};
} // namespace kochou::core

#endif
