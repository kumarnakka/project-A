/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_node_params
#define H_adas_dds_node_params

#include <adas/dds/common/string.h>
#include <adas/dds/common/log.h>

#include <string>
#include <unordered_map>

namespace adas {

namespace dds {

// application node parameter class
class NodeParams
{
public:
    /*
     *  @brief NodeParams constructor
     */
    NodeParams();

    /*
     *  @brief NodeParams destructor
     */
    ~NodeParams();

    /*  
     *  @brief init application node parameters
     *
     *  @[in] argc
     *  @[in] argv
     *
     *  @return void
     */
    void init_params(int argc, const char *argv[]);

    /*  
     *  @brief init application node parameters
     *
     *  @[in] argc
     *  @[in] argv
     *
     *  @return void
     */
    void init_params(int argc, char *argv[]);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, const std::string& value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     *
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, std::string& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, char value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, char& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, unsigned char value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, unsigned char& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, int value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, int& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, unsigned int value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, unsigned int& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, short value);

    /*  
     *  @brief get parameter value
     *
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, short& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, unsigned short value);

    /*  
     *  @brief get parameter value
     *  
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, unsigned short& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, long value);

    /*  
     *  @brief get parameter value
     *  
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, long& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, unsigned long value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, unsigned long& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, long long value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, long long& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, unsigned long long value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, unsigned long long& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, float value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, float& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, double value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, double& value);

    /*  
     *  @brief set parameter value
     *
     *  @[in] param
     *  @[in] value
     *
     *  @return 0 for success, otherwise failure
     */
    int setParam(const std::string& param, long double value);

    /*  
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    int getParam(const std::string& param, long double& value);

    /*   
     *  @brief get parameter value
     *        
     *  @[in] param
     *  @[out] value
     * 
     *  @return 0 for success, otherwise failure
     */
    template<typename T>
    int getParam(const std::string& param, T& value, T&& default_value)
    {
        int ret = getParam(param, value);

        if (ret != 0)
        {
            value = default_value;
            ret = 0;
        }

        return ret;
    }

private:
    std::unordered_map<std::string, std::string> m_param_map;
};

} // dds

} // adas

#endif // H_adas_dds_node_params
