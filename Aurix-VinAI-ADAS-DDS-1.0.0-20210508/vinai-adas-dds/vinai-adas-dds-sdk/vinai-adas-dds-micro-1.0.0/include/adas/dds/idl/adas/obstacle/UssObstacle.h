/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UssObstacle_1275227791_h
#define UssObstacle_1275227791_h

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

#include "../../ros_ported/geometry/Point.h"

namespace adas_dds {

    extern const char *UssObstacleTYPENAME;

    struct UssObstacleSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class UssObstacleTypeSupport;
    class UssObstacleDataWriter;
    class UssObstacleDataReader;
    #endif
    class UssObstacle 
    {
      public:
        typedef struct UssObstacleSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef UssObstacleTypeSupport TypeSupport;
        typedef UssObstacleDataWriter DataWriter;
        typedef UssObstacleDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   lon_distance ;
        DDS_Float   lat_distance ;
        adas_dds::geometry_msgs::PointSeq  points ;
        DDS_Float   score ;
        DDS_Octet   height ;
        DDS_Octet   type ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* UssObstacle_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *UssObstacle_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *UssObstacle_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T UssObstacle
    #define TSeq UssObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T UssObstacle
    #define TSeq UssObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern UssObstacle*
    UssObstacle_create();

    NDDSUSERDllExport extern void
    UssObstacle_delete(UssObstacle* sample);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize(
        UssObstacle* self);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize_ex(
        UssObstacle* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize_w_params(
        UssObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool UssObstacle_finalize(
        UssObstacle* self);

    NDDSUSERDllExport
    RTIBool UssObstacle_finalize_w_return(
        UssObstacle* self);

    NDDSUSERDllExport
    void UssObstacle_finalize_ex(
        UssObstacle* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void UssObstacle_finalize_w_params(
        UssObstacle* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void UssObstacle_finalize_optional_members(
        UssObstacle* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool UssObstacle_copy(
        UssObstacle* dst,
        const UssObstacle* src);

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

#endif /* UssObstacle */

