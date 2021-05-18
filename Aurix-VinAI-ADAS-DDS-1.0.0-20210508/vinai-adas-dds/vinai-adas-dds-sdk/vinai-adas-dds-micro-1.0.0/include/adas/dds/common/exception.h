/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_exception
#define H_adas_dds_common_exception

#include <string>
#include <exception>

namespace adas {

namespace dds {

// Exception class
class Exception : public std::exception {
public:
    /*  
     *  @brief Exception constructor
     *
     *  @[in] msg
     *
     */
    explicit Exception(const std::string& msg);

    /*  
     *  @brief Exception constructor
     *
     *  @[in] file
     *  @[in] line
     *  @[in] msg
     *
     */
    explicit Exception(const std::string& file, unsigned line, const std::string& msg);

    /*  
     *  @brief Exception destructor
     *
     */
    virtual ~Exception() throw();

    /*  
     *  @brief what
     *
     *  @return char const*
     */
    virtual char const* what() const throw();

private:
    std::string m_msg;
};

} // dds

} // adas

static inline void __adas_dds_check_error_throw__(bool condition, const std::string& msg, const std::string& file, unsigned line)
{
    if (condition)
        throw adas::dds::Exception(file, line, msg);
}

#define ADAS_DDS_CHECK_ERROR_THROW(condition, msg) \
    __adas_dds_check_error_throw__(condition, msg, __FILE__, __LINE__)

#endif // H_adas_dds_common_exception
