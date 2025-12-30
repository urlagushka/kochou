#ifndef KOCHOU_CORE_CONSTANTS_HPP
#define KOCHOU_CORE_CONSTANTS_HPP

#include <cstdint>

namespace kochou::core
{
    float    KOCHOU_COMPUTE_OCCUPANCY_PRIORITY_NORMAL_NV                         = 0.50f;
    float    KOCHOU_COMPUTE_OCCUPANCY_PRIORITY_HIGH_NV                           = 0.75f;
    float    KOCHOU_COMPUTE_OCCUPANCY_PRIORITY_LOW_NV                            = 0.25f;
    float    KOCHOU_LOD_CLAMP_NONE                                               = 1000.0F;
    uint32_t KOCHOU_PARTITIONED_ACCELERATION_STRUCTURE_PARTITION_INDEX_GLOBAL_NV = (~0U);
    uint32_t KOCHOU_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM   = 128;
    uint32_t KOCHOU_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_ALIGNMENT_AMDX          = 128;
    uint32_t KOCHOU_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_STRIDE_AMDX             = 128;
    uint32_t KOCHOU_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM               = 3;
    uint32_t KOCHOU_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR                       = 7;
    uint32_t KOCHOU_MAX_VIDEO_VP9_REFERENCES_PER_FRAME_KHR                       = 3;
    uint32_t KOCHOU_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT                        = 32;
    uint32_t KOCHOU_MAX_PIPELINE_BINARY_KEY_SIZE_KHR                             = 32;
    uint32_t KOCHOU_MAX_PHYSICAL_DEVICE_NAME_SIZE                                = 256;
    uint32_t KOCHOU_QUEUE_FAMILY_FOREIGN_EXT                                     = (~2U);
    uint32_t KOCHOU_MAX_GLOBAL_PRIORITY_SIZE                                     = 16;
    uint32_t KOCHOU_SHADER_INDEX_UNUSED_AMDX                                     = (~0U);
    uint32_t KOCHOU_MAX_EXTENSION_NAME_SIZE                                      = 256;
    uint32_t KOCHOU_REMAINING_3D_SLICES_EXT                                      = (~0U);
    uint32_t KOCHOU_REMAINING_ARRAY_LAYERS                                       = (~0U);
    uint32_t KOCHOU_QUEUE_FAMILY_EXTERNAL                                        = (~1U);
    uint32_t KOCHOU_MAX_DEVICE_GROUP_SIZE                                        = 32;
    uint32_t KOCHOU_MAX_DESCRIPTION_SIZE                                         = 256;
    uint32_t KOCHOU_REMAINING_MIP_LEVELS                                         = (~0U);
    uint32_t KOCHOU_QUEUE_FAMILY_IGNORED                                         = (~0U);
    uint32_t KOCHOU_MAX_DRIVER_NAME_SIZE                                         = 256;
    uint32_t KOCHOU_MAX_DRIVER_INFO_SIZE                                         = 256;
    uint32_t KOCHOU_ATTACHMENT_UNUSED                                            = (~0U);
    uint32_t KOCHOU_SHADER_UNUSED_KHR                                            = (~0U);
    uint32_t KOCHOU_MAX_MEMORY_TYPES                                             = 32;
    uint32_t KOCHOU_MAX_MEMORY_HEAPS                                             = 16;
    uint32_t KOCHOU_SUBPASS_EXTERNAL                                             = (~0U);
    uint32_t KOCHOU_UUID_SIZE                                                    = 16;
    uint32_t KOCHOU_LUID_SIZE                                                    = 8;
    uint32_t KOCHOU_FALSE                                                        = 0;
    uint32_t KOCHOU_TRUE                                                         = 1;
    uint64_t KOCHOU_WHOLE_SIZE                                                   = (~0ULL);
}

#endif
