#ifndef KTL_API_FORMATS_HPP
#define KTL_API_FORMATS_HPP

#include <array>

#ifndef KTL_API_API_HPP
#include "common.hpp"
#include "enums.hpp"
#endif

namespace ktl::api
{
template < ktl::api::format FORMAT >
struct format_meta
{
};

template <>
struct format_meta< ktl::api::format::v_undefined >
{
    struct component final
    {
        ktl::u32 bits        = {};
        bool     has_plane   = {};
        ktl::u32 plane_index = {};
        bool     is_present  = {};
    };
    struct plane final
    {
        ktl::u32         width_divisor  = {};
        ktl::u32         height_divisor = {};
        ktl::api::format compatible     = {};
    };
};

template <>
struct format_meta< ktl::api::format::v_r4g4_unorm_pack8 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 8;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        4,
        false,
        0,
        true
    };
    static constexpr component g = {
        4,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r4g4b4a4_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        4,
        false,
        0,
        true
    };
    static constexpr component g = {
        4,
        false,
        0,
        true
    };
    static constexpr component b = {
        4,
        false,
        0,
        true
    };
    static constexpr component a = {
        4,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b4g4r4a4_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        4,
        false,
        0,
        true
    };
    static constexpr component g = {
        4,
        false,
        0,
        true
    };
    static constexpr component b = {
        4,
        false,
        0,
        true
    };
    static constexpr component a = {
        4,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r5g6b5_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        6,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b5g6r5_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        6,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r5g5b5a1_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        5,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        1,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b5g5r5a1_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        5,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        1,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a1r5g5b5_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        5,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        1,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a1b5g5r5_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        5,
        false,
        0,
        true
    };
    static constexpr component g = {
        5,
        false,
        0,
        true
    };
    static constexpr component b = {
        5,
        false,
        0,
        true
    };
    static constexpr component a = {
        1,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8g8b8a8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8a8_srgb >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_unorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_snorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_uscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_sscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_uint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_sint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a8b8g8r8_srgb_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        8,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_unorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_snorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_uscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_sscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_uint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2r10g10b10_sint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_unorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_snorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_uscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_sscaled_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_uint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a2b10g10r10_sint_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        2,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_snorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_uscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_sscaled >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16b16a16_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        16,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 12;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 12;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 12;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32a32_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        32,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32a32_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        32,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r32g32b32a32_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        32,
        false,
        0,
        true
    };
    static constexpr component g = {
        32,
        false,
        0,
        true
    };
    static constexpr component b = {
        32,
        false,
        0,
        true
    };
    static constexpr component a = {
        32,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 24;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 24;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 24;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64a64_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 32;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        64,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64a64_sint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 32;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        64,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r64g64b64a64_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 32;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        64,
        false,
        0,
        true
    };
    static constexpr component g = {
        64,
        false,
        0,
        true
    };
    static constexpr component b = {
        64,
        false,
        0,
        true
    };
    static constexpr component a = {
        64,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b10g11r11_ufloat_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        11,
        false,
        0,
        true
    };
    static constexpr component g = {
        11,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_e5b9g9r9_ufloat_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        9,
        false,
        0,
        true
    };
    static constexpr component g = {
        9,
        false,
        0,
        true
    };
    static constexpr component b = {
        9,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_d16_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_x8_d24_unorm_pack32 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 32;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_d32_sfloat >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_s8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_d16_unorm_s8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_d24_unorm_s8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_d32_sfloat_s8_uint >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 5;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        0,
        false,
        0,
        false
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc1_rgb_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc1_rgb_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc1_rgba_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc1_rgba_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc2_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc2_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc3_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc3_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc4_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc4_snorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc5_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc5_snorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc6h_ufloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc6h_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc7_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_bc7_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8a1_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8a1_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8a8_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_etc2_r8g8b8a8_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_eac_r11_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        11,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_eac_r11_snorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        11,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_eac_r11g11_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        11,
        false,
        0,
        true
    };
    static constexpr component g = {
        11,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_eac_r11g11_snorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        11,
        false,
        0,
        true
    };
    static constexpr component g = {
        11,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 20;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 20;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 25;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 25;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 30;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 30;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x5_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 40;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x5_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 40;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x6_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x6_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x8_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x8_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x5_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 50;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x5_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 50;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x6_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 60;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x6_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 60;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x8_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x8_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x10_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x10_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x10_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 120;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x10_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 120;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x12_unorm_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 144;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 12;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x12_srgb_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 144;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 12;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8b8g8r8_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b8g8r8g8_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        8,
        false,
        0,
        true
    };
    static constexpr component b = {
        8,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_420_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        2,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r8_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_420_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        1,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r8g8_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        2,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r8_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        1,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r8g8_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_444_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        2,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6g10x6_unorm_2pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6g10x6b10x6a10x6_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        10,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6b10x6g10x6r10x6_422_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b10x6g10x6r10x6g10x6_422_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_420_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        2,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r10x6_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_420_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        1,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r10x6g10x6_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_422_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        2,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_422_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        1,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r10x6g10x6_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_444_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        2,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4g12x4_unorm_2pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4g12x4b12x4a12x4_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        12,
        false,
        0,
        true
    };
    static constexpr component a = {
        12,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4b12x4g12x4r12x4_422_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        12,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b12x4g12x4r12x4g12x4_422_unorm_4pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        12,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_420_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        2,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r12x4_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_420_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        1,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            2,
            ktl::api::format::v_r12x4g12x4_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_422_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        2,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_422_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        1,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            2,
            1,
            ktl::api::format::v_r12x4g12x4_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_444_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        2,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16b16g16r16_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_b16g16r16g16_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 2;
    static constexpr ktl::u32 block_height = 1;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        16,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_420_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        2,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r16_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_420_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        1,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r16g16_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        2,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r16_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_422_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        1,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r16g16_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_444_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        2,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 3;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc1_2bpp_unorm_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc1_4bpp_unorm_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc2_2bpp_unorm_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc2_4bpp_unorm_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc1_2bpp_srgb_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc1_4bpp_srgb_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc2_2bpp_srgb_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_pvrtc2_4bpp_srgb_block_img >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 16;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 20;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 25;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 30;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x5_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 40;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x6_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_8x8_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 8;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x5_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 50;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x6_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 60;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x8_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 8;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_10x10_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 10;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x10_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 120;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 10;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_12x12_sfloat_block >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 144;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 12;
    static constexpr ktl::u32 block_height = 12;
    static constexpr ktl::u32 block_depth = 1;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_3x3x3_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 27;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 3;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_3x3x3_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 27;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 3;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_3x3x3_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 27;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 3;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x3x3_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x3x3_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x3x3_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 36;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 3;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x3_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x3_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x3_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 48;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 3;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x4_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x4_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_4x4x4_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 64;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 4;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4x4_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4x4_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x4x4_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 80;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 4;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x4_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x4_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x4_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 100;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 4;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x5_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 125;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x5_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 125;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_5x5x5_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 125;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 5;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5x5_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 150;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5x5_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 150;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x5x5_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 150;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 5;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x5_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 180;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x5_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 180;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x5_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 180;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 5;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x6_unorm_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 216;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 6;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x6_srgb_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 216;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 6;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_astc_6x6x6_sfloat_block_ext >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 16;
    static constexpr ktl::u32 texels_per_block = 216;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 6;
    static constexpr ktl::u32 block_height = 6;
    static constexpr ktl::u32 block_depth = 6;
    static constexpr bool is_3d = true;
    static constexpr bool is_compressed = true;
    static constexpr component r = {
        0,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_444_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 3;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        true,
        1,
        true
    };
    static constexpr component g = {
        8,
        true,
        0,
        true
    };
    static constexpr component b = {
        8,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r8_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r8g8_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_444_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        true,
        1,
        true
    };
    static constexpr component g = {
        10,
        true,
        0,
        true
    };
    static constexpr component b = {
        10,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r10x6_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r10x6g10x6_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_444_unorm_3pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        true,
        1,
        true
    };
    static constexpr component g = {
        12,
        true,
        0,
        true
    };
    static constexpr component b = {
        12,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r12x4_unorm_pack16
        },
        plane{
            1,
            1,
            ktl::api::format::v_r12x4g12x4_unorm_2pack16
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_444_unorm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 444;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        true,
        1,
        true
    };
    static constexpr component g = {
        16,
        true,
        0,
        true
    };
    static constexpr component b = {
        16,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r16_unorm
        },
        plane{
            1,
            1,
            ktl::api::format::v_r16g16_unorm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a4r4g4b4_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        4,
        false,
        0,
        true
    };
    static constexpr component g = {
        4,
        false,
        0,
        true
    };
    static constexpr component b = {
        4,
        false,
        0,
        true
    };
    static constexpr component a = {
        4,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_a4b4g4r4_unorm_pack16 >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        4,
        false,
        0,
        true
    };
    static constexpr component g = {
        4,
        false,
        0,
        true
    };
    static constexpr component b = {
        4,
        false,
        0,
        true
    };
    static constexpr component a = {
        4,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16g16_sfixed5_nv >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        16,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6_uint_pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6g10x6_uint_2pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r10x6g10x6b10x6a10x6_uint_4pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        10,
        false,
        0,
        true
    };
    static constexpr component g = {
        10,
        false,
        0,
        true
    };
    static constexpr component b = {
        10,
        false,
        0,
        true
    };
    static constexpr component a = {
        10,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4_uint_pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4g12x4_uint_2pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r12x4g12x4b12x4a12x4_uint_4pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        12,
        false,
        0,
        true
    };
    static constexpr component g = {
        12,
        false,
        0,
        true
    };
    static constexpr component b = {
        12,
        false,
        0,
        true
    };
    static constexpr component a = {
        12,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2_uint_pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2g14x2_uint_2pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        14,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2g14x2b14x2a14x2_uint_4pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        14,
        false,
        0,
        true
    };
    static constexpr component b = {
        14,
        false,
        0,
        true
    };
    static constexpr component a = {
        14,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2_unorm_pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 4;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        14,
        false,
        0,
        true
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r14x2g14x2b14x2a14x2_unorm_4pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 8;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        false,
        0,
        true
    };
    static constexpr component g = {
        14,
        false,
        0,
        true
    };
    static constexpr component b = {
        14,
        false,
        0,
        true
    };
    static constexpr component a = {
        14,
        false,
        0,
        true
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g14x2_b14x2r14x2_2plane_420_unorm_3pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 420;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        true,
        1,
        true
    };
    static constexpr component g = {
        14,
        true,
        0,
        true
    };
    static constexpr component b = {
        14,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r14x2_unorm_pack16_arm
        },
        plane{
            2,
            2,
            ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_g14x2_b14x2r14x2_2plane_422_unorm_3pack16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 6;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 16;
    static constexpr ktl::u32 chroma = 422;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        14,
        true,
        1,
        true
    };
    static constexpr component g = {
        14,
        true,
        0,
        true
    };
    static constexpr component b = {
        14,
        true,
        1,
        true
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 2;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            1,
            1,
            ktl::api::format::v_r14x2_unorm_pack16_arm
        },
        plane{
            2,
            1,
            ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_bool_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r16_sfloat_fpencoding_bfloat16_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 2;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        16,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_sfloat_fpencoding_float8e4m3_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};

template <>
struct format_meta< ktl::api::format::v_r8_sfloat_fpencoding_float8e5m2_arm >
{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = 1;
    static constexpr ktl::u32 texels_per_block = 1;
    static constexpr ktl::u32 packed = 0;
    static constexpr ktl::u32 chroma = 0;
    static constexpr ktl::u32 block_width = 0;
    static constexpr ktl::u32 block_height = 0;
    static constexpr ktl::u32 block_depth = 0;
    static constexpr bool is_3d = false;
    static constexpr bool is_compressed = false;
    static constexpr component r = {
        8,
        false,
        0,
        true
    };
    static constexpr component g = {
        0,
        false,
        0,
        false
    };
    static constexpr component b = {
        0,
        false,
        0,
        false
    };
    static constexpr component a = {
        0,
        false,
        0,
        false
    };
    static constexpr ktl::u32 planes_amount = 0;
    static constexpr std::array< plane, 3 > planes = {
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        },
        plane{
            0,
            0,
            ktl::api::format::v_undefined
        }
    };
};
}

#endif
