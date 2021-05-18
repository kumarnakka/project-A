

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstacleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstacleState_2049749918_h
#define ObstacleState_2049749918_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "ObstaclePathPrediction.h"
#include "../obstacles/Obstacle.h"
namespace adas_dds {

    extern const char *ObstacleStateTYPENAME;

    struct ObstacleStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstacleStateTypeSupport;
    class ObstacleStateDataWriter;
    class ObstacleStateDataReader;
    #endif
    class ObstacleState 
    {
      public:
        typedef struct ObstacleStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstacleStateTypeSupport TypeSupport;
        typedef ObstacleStateDataWriter DataWriter;
        typedef ObstacleStateDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Short   id ;
        DDS_Boolean   obs_curr_valid ;
        adas_dds::Obstacle   obs_curr ;
        DDS_Boolean   obs_pred_valid ;
        adas_dds::ObstaclePathPrediction   obs_pred ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObstacleState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObstacleState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstacleState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstacleState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstacleStateSeq, ObstacleState);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize(
        ObstacleState* self);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize_ex(
        ObstacleState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize_w_params(
        ObstacleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstacleState_finalize_w_return(
        ObstacleState* self);

    NDDSUSERDllExport
    void ObstacleState_finalize(
        ObstacleState* self);

    NDDSUSERDllExport
    void ObstacleState_finalize_ex(
        ObstacleState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObstacleState_finalize_w_params(
        ObstacleState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObstacleState_finalize_optional_members(
        ObstacleState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObstacleState_copy(
        ObstacleState* dst,
        const ObstacleState* src);

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
        struct type_code<adas_dds::ObstacleState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObstacleState */

