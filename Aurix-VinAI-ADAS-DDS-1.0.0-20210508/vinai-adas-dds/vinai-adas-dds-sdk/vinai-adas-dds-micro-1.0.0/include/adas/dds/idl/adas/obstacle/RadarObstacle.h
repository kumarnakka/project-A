/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadarObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef RadarObstacle_242263088_h
#define RadarObstacle_242263088_h

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

    extern const char *RadarObstacleTYPENAME;

    struct RadarObstacleSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RadarObstacleTypeSupport;
    class RadarObstacleDataWriter;
    class RadarObstacleDataReader;
    #endif
    class RadarObstacle 
    {
      public:
        typedef struct RadarObstacleSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RadarObstacleTypeSupport TypeSupport;
        typedef RadarObstacleDataWriter DataWriter;
        typedef RadarObstacleDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   id ;
        DDS_Float   obstacle_in_host ;
        DDS_Float   obstacle_out_host ;
        DDS_Float   score ;
        DDS_Float   lon_accleration ;
        DDS_Float   lon_velocity ;
        DDS_Float   lat_velocity ;
        DDS_Float   lon_distance ;
        DDS_Float   lat_distance ;
        DDS_Float   ver_distance ;
        DDS_Float   lat_distance_sdv ;
        DDS_Float   lon_distance_sdv ;
        DDS_Float   lon_velocity_sdv ;
        DDS_Float   lon_accleration_sdv ;
        DDS_Octet   flag_valid ;
        DDS_Octet   flag_hist ;
        DDS_Octet   flag_meas ;
        DDS_Octet   classification ;
        DDS_Float   class_score ;
        DDS_Float   rear_end_loss ;
        DDS_Float   length ;
        DDS_Float   height ;
        DDS_Octet   moving_state ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* RadarObstacle_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *RadarObstacle_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RadarObstacle_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T RadarObstacle
    #define TSeq RadarObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T RadarObstacle
    #define TSeq RadarObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstacle_create();

    NDDSUSERDllExport extern void
    RadarObstacle_delete(RadarObstacle* sample);

    NDDSUSERDllExport
    RTIBool RadarObstacle_initialize(
        RadarObstacle* self);

    NDDSUSERDllExport
    RTIBool RadarObstacle_initialize_ex(
        RadarObstacle* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RadarObstacle_initialize_w_params(
        RadarObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RadarObstacle_finalize(
        RadarObstacle* self);

    NDDSUSERDllExport
    RTIBool RadarObstacle_finalize_w_return(
        RadarObstacle* self);

    NDDSUSERDllExport
    void RadarObstacle_finalize_ex(
        RadarObstacle* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void RadarObstacle_finalize_w_params(
        RadarObstacle* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void RadarObstacle_finalize_optional_members(
        RadarObstacle* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool RadarObstacle_copy(
        RadarObstacle* dst,
        const RadarObstacle* src);

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

#endif /* RadarObstacle */

