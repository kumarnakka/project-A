/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_string
#define H_adas_dds_common_string

#include <string>
#include <vector>
#include <unordered_map>

namespace adas {

namespace dds {

/*  
 *  @brief trim special characters on left side
 *
 *  @[in] str
 *  @[in] chars
 *
 *  @return std::string
 */
std::string& ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");

/*  
 *  @brief trim special characters on right side
 *
 *  @[in] str
 *  @[in] chars
 *
 *  @return std::string
 */
std::string& rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");

/*  
 *  @brief trim special characters
 *
 *  @[in] str
 *  @[in] chars
 *
 *  @return std::string
 */
std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ");

/*  
 *  @brief split string into a vector of substrings
 *
 *  @[in] s
 *  @[in] ch
 *
 *  @return std::vector<std::string>
 */
std::vector<std::string> vectorify(const std::string& s, char ch = ':');

/*  
 *  @brief split string into a list of substring pairs
 *
 *  @[in] s
 *
 *  @return std::unordered_map<std::string, std::string>
 */
std::unordered_map<std::string, std::string> mappify(const std::string& s);

} // dds

} // adas

#endif // H_adas_dds_common_string
