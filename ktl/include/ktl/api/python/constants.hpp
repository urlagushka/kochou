#ifndef KTL_CONSTANTS_HPP
#define KTL_CONSTANTS_HPP

#include <cstdint>

#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_NORMAL_NV                         0.50f;
#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_HIGH_NV                           0.75f;
#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_LOW_NV                            0.25f;
#define KTL_API_LOD_CLAMP_NONE                                               1000.0F;
#define KTL_API_PARTITIONED_ACCELERATION_STRUCTURE_PARTITION_INDEX_GLOBAL_NV (~0U);
#define KTL_API_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM   128;
#define KTL_API_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_ALIGNMENT_AMDX          128;
#define KTL_API_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_STRIDE_AMDX             128;
#define KTL_API_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM               3;
#define KTL_API_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR                       7;
#define KTL_API_MAX_VIDEO_VP9_REFERENCES_PER_FRAME_KHR                       3;
#define KTL_API_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT                        32;
#define KTL_API_MAX_PIPELINE_BINARY_KEY_SIZE_KHR                             32;
#define KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE                                256;
#define KTL_API_QUEUE_FAMILY_FOREIGN_EXT                                     (~2U);
#define KTL_API_MAX_GLOBAL_PRIORITY_SIZE                                     16;
#define KTL_API_SHADER_INDEX_UNUSED_AMDX                                     (~0U);
#define KTL_API_MAX_EXTENSION_NAME_SIZE                                      256;
#define KTL_API_REMAINING_3D_SLICES_EXT                                      (~0U);
#define KTL_API_REMAINING_ARRAY_LAYERS                                       (~0U);
#define KTL_API_QUEUE_FAMILY_EXTERNAL                                        (~1U);
#define KTL_API_MAX_DEVICE_GROUP_SIZE                                        32;
#define KTL_API_MAX_DESCRIPTION_SIZE                                         256;
#define KTL_API_REMAINING_MIP_LEVELS                                         (~0U);
#define KTL_API_QUEUE_FAMILY_IGNORED                                         (~0U);
#define KTL_API_MAX_DRIVER_NAME_SIZE                                         256;
#define KTL_API_MAX_DRIVER_INFO_SIZE                                         256;
#define KTL_API_ATTACHMENT_UNUSED                                            (~0U);
#define KTL_API_SHADER_UNUSED_KHR                                            (~0U);
#define KTL_API_MAX_MEMORY_TYPES                                             32;
#define KTL_API_MAX_MEMORY_HEAPS                                             16;
#define KTL_API_SUBPASS_EXTERNAL                                             (~0U);
#define KTL_API_UUID_SIZE                                                    16;
#define KTL_API_LUID_SIZE                                                    8;
#define KTL_API_FALSE                                                        0;
#define KTL_API_TRUE                                                         1;
#define KTL_API_WHOLE_SIZE                                                   (~0ULL);

#endif
