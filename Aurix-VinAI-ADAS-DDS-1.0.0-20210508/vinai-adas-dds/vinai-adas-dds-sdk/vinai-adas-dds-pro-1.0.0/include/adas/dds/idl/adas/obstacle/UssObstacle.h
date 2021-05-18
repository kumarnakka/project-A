

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UssObstacle_1275227791_h
#define UssObstacle_1275227791_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *UssObstacle_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(UssObstacleSeq, UssObstacle);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize(
        UssObstacle* self);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize_ex(
        UssObstacle* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool UssObstacle_initialize_w_params(
        UssObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool UssObstacle_finalize_w_return(
        UssObstacle* self);

    NDDSUSERDllExport
    void UssObstacle_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::UssObstacle> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UssObstacle */

