/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneEyeQ4_1873455581_h
#define LaneEyeQ4_1873455581_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneEyeQ4
    #define TSeq LaneEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneEyeQ4
    #define TSeq LaneEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneEyeQ4*
    LaneEyeQ4_create();

    NDDSUSERDllExport extern void
    LaneEyeQ4_delete(LaneEyeQ4* sample);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize(
        LaneEyeQ4* self);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize_ex(
        LaneEyeQ4* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_initialize_w_params(
        LaneEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_finalize(
        LaneEyeQ4* self);

    NDDSUSERDllExport
    RTIBool LaneEyeQ4_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneEyeQ4 */

