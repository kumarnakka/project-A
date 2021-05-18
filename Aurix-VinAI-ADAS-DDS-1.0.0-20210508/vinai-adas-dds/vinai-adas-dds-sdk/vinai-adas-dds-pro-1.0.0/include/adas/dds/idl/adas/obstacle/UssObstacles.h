

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UssObstacles_939312938_h
#define UssObstacles_939312938_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "UssObstacle.h"
namespace adas_dds {

    extern const char *UssObstaclesTYPENAME;

    struct UssObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class UssObstaclesTypeSupport;
    class UssObstaclesDataWriter;
    class UssObstaclesDataReader;
    #endif
    class UssObstacles 
    {
      public:
        typedef struct UssObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef UssObstaclesTypeSupport TypeSupport;
        typedef UssObstaclesDataWriter DataWriter;
        typedef UssObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::UssObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* UssObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *UssObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *UssObstacles_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *UssObstacles_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(UssObstaclesSeq, UssObstacles);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize(
        UssObstacles* self);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize_ex(
        UssObstacles* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize_w_params(
        UssObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool UssObstacles_finalize_w_return(
        UssObstacles* self);

    NDDSUSERDllExport
    void UssObstacles_finalize(
        UssObstacles* self);

    NDDSUSERDllExport
    void UssObstacles_finalize_ex(
        UssObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void UssObstacles_finalize_w_params(
        UssObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void UssObstacles_finalize_optional_members(
        UssObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool UssObstacles_copy(
        UssObstacles* dst,
        const UssObstacles* src);

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
        struct type_code<adas_dds::UssObstacles> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UssObstacles */

