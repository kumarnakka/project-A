/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_processor
#define H_adas_dds_common_processor

namespace adas_dds {

namespace common {

#define barrier() asm volatile("" :: \
                                   : "memory")

#if defined(__x86_64__)
#define cpu_relax() asm volatile("rep; nop" :: \
                                     : "memory")
#elif defined(__aarch64__)
#define cpu_relax() asm volatile("yield" :: \
                                     : "memory")
#endif

}  // namespace common

}  // namespace adas_dds

#endif
