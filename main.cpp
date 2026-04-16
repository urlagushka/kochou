#include <iostream>

#include <ktl/api/api.hpp>
#include <ktl/reflection/selector.hpp>

struct cat final
{
    static constexpr bool
    like_konata() noexcept
    {
        return false;
    }

    void
    say() const noexcept
    {
        std::cout << "cat like konata!" << std::endl;
    }
};

struct dog final
{
    static constexpr bool
    like_konata() noexcept
    {
        return true;
    }

    void
    say() const noexcept
    {
        std::cout << "dog like konata!" << std::endl;
    }
};

template < typename T >
struct konata_condition final
{
    static constexpr bool value = T::like_konata();
};

int
main()
{
    using konata_fan = ktl::reflection::selector< konata_condition, cat, dog >;
    konata_fan fan;
    fan.say();
}
