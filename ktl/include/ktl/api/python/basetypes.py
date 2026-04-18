from typing import TextIO


def fill_definition(_file: TextIO,):
    _file.write("""
namespace ktl::api
{
using bool32 = std::uint32_t;
using flag32 = std::uint32_t;
using flag64 = std::uint64_t;
using dvsize = std::uint64_t;
using dvaddr = std::uint64_t;
using spmask = std::uint32_t;

using remote_address_nv = void *;
}

struct ANativeWindow;
struct AHardwareBuffer;

#ifdef __OBJC__
@class CAMetalLayer;
@protocol MTLDevice;
typedef __unsafe_unretained id< MTLDevice > MTLDevice_id;
@protocol MTLCommandQueue;
typedef __unsafe_unretained id< MTLCommandQueue > MTLCommandQueue_id;
@protocol MTLBuffer;
typedef __unsafe_unretained id< MTLBuffer > MTLBuffer_id;
@protocol MTLTexture;
typedef __unsafe_unretained id< MTLTexture > MTLTexture_id;
@protocol MTLSharedEvent;
typedef __unsafe_unretained id< MTLSharedEvent > MTLSharedEvent_id;
#else
using CAMetalLayer       = void;
using MTLDevice_id       = void *;
using MTLCommandQueue_id = void *;
using MTLBuffer_id       = void *;
using MTLTexture_id      = void *;
using MTLSharedEvent_id  = void *;
#endif

typedef struct __IOSurface * IOSurfaceRef;
typedef struct NativeWindow OHNativeWindow;
struct OHBufferHandle;
struct OH_NativeBuffer;
""")


def fill_implementation():
    pass # nothing to do
