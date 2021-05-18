/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstacleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ObstacleState_2049749918_h
#define ObstacleState_2049749918_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ObstacleState
    #define TSeq ObstacleStateSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ObstacleState
    #define TSeq ObstacleStateSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ObstacleState*
    ObstacleState_create();

    NDDSUSERDllExport extern void
    ObstacleState_delete(ObstacleState* sample);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize(
        ObstacleState* self);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize_ex(
        ObstacleState* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstacleState_initialize_w_params(
        ObstacleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstacleState_finalize(
        ObstacleState* self);

    NDDSUSERDllExport
    RTIBool ObstacleState_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObstacleState */

