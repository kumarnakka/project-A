

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneEyeQ4_1873455581_h
#define LaneEyeQ4_1873455581_h

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

    extern const char *LaneEyeQ4TYPENAME;

    struct LaneEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneEyeQ4TypeSupport;
    class LaneEyeQ4DataWriter;
    class LaneEyeQ4DataReader;
    #endif
    class LaneEyeQ4 
    {
      public:
        typedef struct LaneEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneEyeQ4TypeSupport TypeSupport;
        typedef LaneEyeQ4DataWriter DataWriter;
        typedef LaneEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   lane_track_id ;
        DDS_Octet   is_lane_valid ;
        DDS_Float   lane_exist_probability ;
        DDS_Octet   lane_crossing ;
        DDS_Octet   lane_decel_type ;
        DDS_Octet   lane_type_class ;
        DDS_Float   lane_view_range_start ;
        DDS_Float   lane_view_range_end ;
        DDS_Octet   lane_color ;
        DDS_Octet   lane_dlm_type ;
        DDS_Float   lane_marker_width ;
        DDS_Float   dash_average_length ;
        DDS_Float   dash_average_gap ;
        DDS_Octet   prediction_source ;
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
    NDDSUSERDllExport DDS_TypeCode* LaneEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneEyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneEyeQ4Seq, LaneEyeQ4);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize(
        LaneEyeQ4* self);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize_ex(
        LaneEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize_w_params(
        LaneEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_finalize_w_return(
        LaneEyeQ4* self);

    NDDSUSERDllExport
    void LaneEyeQ4_finalize(
        LaneEyeQ4* self);

    NDDSUSERDllExport
    void LaneEyeQ4_finalize_ex(
        LaneEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneEyeQ4_finalize_w_params(
        LaneEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneEyeQ4_finalize_optional_members(
        LaneEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_copy(
        LaneEyeQ4* dst,
        const LaneEyeQ4* src);

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
        struct type_code<adas_dds::LaneEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneEyeQ4 */

