

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeObstacles_538812926_h
#define EyeObstacles_538812926_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "EyeObstacle.h"
namespace adas_dds {

    extern const char *EyeqObstaclesTYPENAME;

    struct EyeqObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeqObstaclesTypeSupport;
    class EyeqObstaclesDataWriter;
    class EyeqObstaclesDataReader;
    #endif
    class EyeqObstacles 
    {
      public:
        typedef struct EyeqObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeqObstaclesTypeSupport TypeSupport;
        typedef EyeqObstaclesDataWriter DataWriter;
        typedef EyeqObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::EyeqObstacleSeq  obstacle_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeqObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeqObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqObstacles_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqObstacles_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EyeqObstaclesSeq, EyeqObstacles);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize(
        EyeqObstacles* self);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize_ex(
        EyeqObstacles* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize_w_params(
        EyeqObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqObstacles_finalize_w_return(
        EyeqObstacles* self);

    NDDSUSERDllExport
    void EyeqObstacles_finalize(
        EyeqObstacles* self);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_ex(
        EyeqObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_w_params(
        EyeqObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_optional_members(
        EyeqObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeqObstacles_copy(
        EyeqObstacles* dst,
        const EyeqObstacles* src);

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
        struct type_code<adas_dds::EyeqObstacles> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EyeObstacles */

