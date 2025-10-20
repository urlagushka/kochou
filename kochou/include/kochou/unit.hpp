#ifndef KOCHOU_UNIT_HPP
#define KOCHOU_UNIT_HPP

namespace kochou
{
    template< typename UNIT >
    struct unit
    {
        constexpr std::string unit_name = #UNIT;
    };
}

#endif
