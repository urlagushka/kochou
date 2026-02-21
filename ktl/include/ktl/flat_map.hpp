#ifndef KTL_FLAT_MAP_HPP
#define KTL_FLAT_MAP_HPP

#include <vector>

namespace ktl
{
    template< typename KEY, typename VALUE, class COMPARE = std::less< KEY > >
    class flat_map final
    {
        public:
            constexpr flat_map();

            constexpr begin();
            constexpr cbegin() const;

        private:
            std::vector< KEY > keys_;
            std::vector< VALUE > values_;
    }
}

#endif
