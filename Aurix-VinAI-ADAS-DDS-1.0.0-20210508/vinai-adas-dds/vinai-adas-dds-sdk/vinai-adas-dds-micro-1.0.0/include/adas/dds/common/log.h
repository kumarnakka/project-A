/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_log
#define H_adas_dds_common_log

#include <string>
#include <exception>

#if defined(DDS_USE_GLOG)
#include <glog/logging.h>
#else
#include <iostream>

#define LOG(x) std::cout
#endif

namespace adas {

namespace dds {

/*  
 *  @brief init logging
 *
 *  @[in] module_name
 *  @[in] log_dir
 *
 *  @return void
 */
void initLogging(const std::string& module_name, const std::string& log_dir="./");

} // dds

} // adas

#endif
