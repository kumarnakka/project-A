

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScalaObstacles_1631077158_h
#define ScalaObstacles_1631077158_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "ScalaObstacle.h"
namespace adas_dds {

    extern const char *ScalaObstaclesTYPENAME;

    struct ScalaObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ScalaObstaclesTypeSupport;
    class ScalaObstaclesDataWriter;
    class ScalaObstaclesDataReader;
    #endif
    class ScalaObstacles 
    {
      public:
        typedef struct ScalaObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ScalaObstaclesTypeSupport TypeSupport;
        typedef ScalaObstaclesDataWriter DataWriter;
        typedef ScalaObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ScalaObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ScalaObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ScalaObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaObstacles_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaObstacles_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ScalaObstaclesSeq, ScalaObstacles);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize(
        ScalaObstacles* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize_ex(
        ScalaObstacles* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize_w_params(
        ScalaObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ScalaObstacles_finalize_w_return(
        ScalaObstacles* self);

    NDDSUSERDllExport
    void ScalaObstacles_finalize(
        ScalaObstacles* self);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_ex(
        ScalaObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_w_params(
        ScalaObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_optional_members(
        ScalaObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ScalaObstacles_copy(
        ScalaObstacles* dst,
        const ScalaObstacles* src);

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
        struct type_code<adas_dds::ScalaObstacles> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ScalaObstacles */

