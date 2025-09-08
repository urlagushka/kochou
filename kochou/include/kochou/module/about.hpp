

enum class requirement_mask
    : uint32_t
{
    r_4giga = 0x1,
    r_4ydra = 0x2,
    ...
};

enum class queue_mask
    : uint32_t
{
    graphic,
    compute
}

template< requirement_mask mask >
class require // not final
{
    protected: // all protected
        bool is_suit(const device &); // compare with mask
};

template< queue_mask mask >
class command // not final
{
    protected: // all protected
        uint32_t queue(const device &); // get queue by mask
};

class ray_tracing
    : require< requirement_mask::r_4giga | requirement_mask::r_4ydra >
    , command< graphic >
{
    ...
};

class shadow
    : require< requirement_mask::r_4ydra >
    , command< compute >
{
    ...
};




