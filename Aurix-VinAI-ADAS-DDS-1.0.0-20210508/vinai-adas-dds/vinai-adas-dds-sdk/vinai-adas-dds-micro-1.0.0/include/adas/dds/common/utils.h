/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_util
#define H_adas_dds_common_util

#include <string>
#include <unordered_map>
#include <vector>

namespace adas_dds {

namespace common {

std::string& ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");
std::string& rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");
std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ");

std::vector<std::string> vectorify(const std::string& s, char ch = ':');
std::unordered_map<std::string, std::string> mappify(const std::string& s);

#define MAP_GET_VALUE(map_var, key, default_value)                              \
    ({                                                                          \
        auto it = map_var.find(key);                                            \
        std::string ret = (it == map_var.end()) ? (default_value) : it->second; \
        ret;                                                                    \
    })

}  // namespace common

}  // namespace adas_dds

#endif  // H_adas_dds_common_util
