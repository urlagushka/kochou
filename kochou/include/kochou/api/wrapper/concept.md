# External Resource Concept

```cpp
#include <memory>

template< typename T >
using sptr = std::shared_ptr< T >;

template< typename T >
using uptr = std::unique_ptr< T >;

struct resource_info
{
    ...
};

class resource final
{
    friend sptr< resource > make_shared_resource(const resource_ingo &);
    friend uptr< resource > make_unique_resource(const resource_ingo &);
    friend struct modifiers;

    public:
        resource()                             = delete;
        resource(const resource &)             = delete;
        resource & opreator=(const resource &) = delete;
        resource(resource &&);                 = delete;
        resource & operator=(resource &&);     = delete;

        /*
        all public methods and fields are thread safe!
        const or synchronized
        */

    private:
        resource(const resource_info &);
};

sptr< resource > make_shared_resource(const resource_ingo &);
uptr< resource > make_unique_resource(const resource_ingo &);

```
