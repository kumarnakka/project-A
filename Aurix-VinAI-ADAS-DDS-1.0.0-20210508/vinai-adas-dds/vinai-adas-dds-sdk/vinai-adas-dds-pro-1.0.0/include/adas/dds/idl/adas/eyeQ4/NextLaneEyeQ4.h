

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NextLaneEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NextLaneEyeQ4_1711493545_h
#define NextLaneEyeQ4_1711493545_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *NextLaneEyeQ4TYPENAME;

    struct NextLaneEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class NextLaneEyeQ4TypeSupport;
    class NextLaneEyeQ4DataWriter;
    class NextLaneEyeQ4DataReader;
    #endif
    class NextLaneEyeQ4 
    {
      public:
        typedef struct NextLaneEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NextLaneEyeQ4TypeSupport TypeSupport;
        typedef NextLaneEyeQ4DataWriter DataWriter;
        typedef NextLaneEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   lane_track_id ;
        DDS_Float   lane_exist_probability ;
        DDS_Octet   lane_type_class ;
        DDS_Float   lane_view_range_start ;
        DDS_Float   lane_view_range_end ;
        DDS_Octet   lane_color ;
        DDS_Octet   lane_dlm_type ;
        DDS_Float   lane_marker_width ;
        DDS_Float   dash_average_length ;
        DDS_Float   dash_average_gap ;
        DDS_Float   c0 ;
        DDS_Float   c1 ;
        DDS_Float   c2 ;
        DDS_Float   c3 ;
        DDS_Octet   lane_id ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NextLaneEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NextLaneEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NextLaneEyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NextLaneEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NextLaneEyeQ4Seq, NextLaneEyeQ4);

    NDDSUSERDllExport
    RTIBool NextLaneEyeQ4_initialize(
        NextLaneEyeQ4* self);

    NDDSUSERDllExport
    RTIBool NextLaneEyeQ4_initialize_ex(
        NextLaneEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NextLaneEyeQ4_initialize_w_params(
        NextLaneEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NextLaneEyeQ4_finalize_w_return(
        NextLaneEyeQ4* self);

    NDDSUSERDllExport
    void NextLaneEyeQ4_finalize(
        NextLaneEyeQ4* self);

    NDDSUSERDllExport
    void NextLaneEyeQ4_finalize_ex(
        NextLaneEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NextLaneEyeQ4_finalize_w_params(
        NextLaneEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NextLaneEyeQ4_finalize_optional_members(
        NextLaneEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NextLaneEyeQ4_copy(
        NextLaneEyeQ4* dst,
        const NextLaneEyeQ4* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::NextLaneEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NextLaneEyeQ4 */

