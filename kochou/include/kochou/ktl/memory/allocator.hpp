#ifndef KTL_MEMORY_ALLOCATOR_HPP
#define KTL_MEMORY_ALLOCATOR_HPP

namespace ktl::memory
{
    class allocator_interface
    {
        public:
            virtual ~allocator_interface() = default;
            virtual void * allocate() = 0;
            virtual void deallocate() = 0;
    };
}

#endif
