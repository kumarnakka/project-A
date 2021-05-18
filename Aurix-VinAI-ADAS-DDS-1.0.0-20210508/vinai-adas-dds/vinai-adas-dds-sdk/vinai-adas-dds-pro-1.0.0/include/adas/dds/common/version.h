/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_version
#define H_adas_dds_common_version

#include <stdint.h>

namespace adas {

namespace dds {

// libadas_dds version structure
struct Version
{
    uint32_t major;
    uint32_t minor;
    uint32_t patch;
    uint32_t build;
    char extra[32];
};

/*  
 *  @brief get libadas_dds library version
 *
 *  @[out] version
 *
 *  @return 0 for success, otherwise failure
 */
int getVersion(Version& version);

} // dds

} // adas

#endif // H_adas_dds_common_version
