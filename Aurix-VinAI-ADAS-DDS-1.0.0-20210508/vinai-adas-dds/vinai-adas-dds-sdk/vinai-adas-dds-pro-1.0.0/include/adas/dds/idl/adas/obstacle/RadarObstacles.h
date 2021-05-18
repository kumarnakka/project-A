

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadarObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RadarObstacles_1017835705_h
#define RadarObstacles_1017835705_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "RadarObstacle.h"
namespace adas_dds {

    extern const char *RadarObstaclesTYPENAME;

    struct RadarObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RadarObstaclesTypeSupport;
    class RadarObstaclesDataWriter;
    class RadarObstaclesDataReader;
    #endif
    class RadarObstacles 
    {
      public:
        typedef struct RadarObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RadarObstaclesTypeSupport TypeSupport;
        typedef RadarObstaclesDataWriter DataWriter;
        typedef RadarObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::RadarObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* RadarObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *RadarObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RadarObstacles_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RadarObstacles_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(RadarObstaclesSeq, RadarObstacles);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize(
        RadarObstacles* self);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize_ex(
        RadarObstacles* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize_w_params(
        RadarObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RadarObstacles_finalize_w_return(
        RadarObstacles* self);

    NDDSUSERDllExport
    void RadarObstacles_finalize(
        RadarObstacles* self);

    NDDSUSERDllExport
    void RadarObstacles_finalize_ex(
        RadarObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void RadarObstacles_finalize_w_params(
        RadarObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void RadarObstacles_finalize_optional_members(
        RadarObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool RadarObstacles_copy(
        RadarObstacles* dst,
        const RadarObstacles* src);

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
        struct type_code<adas_dds::RadarObstacles> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RadarObstacles */

