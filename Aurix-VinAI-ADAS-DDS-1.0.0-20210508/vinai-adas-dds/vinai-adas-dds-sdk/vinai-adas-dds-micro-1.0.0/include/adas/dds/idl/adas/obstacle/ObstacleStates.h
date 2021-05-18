/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstacleStates.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ObstacleStates_820305967_h
#define ObstacleStates_820305967_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "ObstacleState.h"

namespace adas_dds {

    extern const char *ObstacleStatesTYPENAME;

    struct ObstacleStatesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstacleStatesTypeSupport;
    class ObstacleStatesDataWriter;
    class ObstacleStatesDataReader;
    #endif
    class ObstacleStates 
    {
      public:
        typedef struct ObstacleStatesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstacleStatesTypeSupport TypeSupport;
        typedef ObstacleStatesDataWriter DataWriter;
        typedef ObstacleStatesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ObstacleStateSeq  obstacle_state_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObstacleStates_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObstacleStates_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstacleStates_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ObstacleStates
    #define TSeq ObstacleStatesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ObstacleStates
    #define TSeq ObstacleStatesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ObstacleStates*
    ObstacleStates_create();

    NDDSUSERDllExport extern void
    ObstacleStates_delete(ObstacleStates* sample);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize(
        ObstacleStates* self);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize_ex(
        ObstacleStates* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize_w_params(
        ObstacleStates* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstacleStates_finalize(
        ObstacleStates* self);

    NDDSUSERDllExport
    RTIBool ObstacleStates_finalize_w_return(
        ObstacleStates* self);

    NDDSUSERDllExport
    void ObstacleStates_finalize_ex(
        ObstacleStates* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObstacleStates_finalize_w_params(
        ObstacleStates* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObstacleStates_finalize_optional_members(
        ObstacleStates* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObstacleStates_copy(
        ObstacleStates* dst,
        const ObstacleStates* src);

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

#endif /* ObstacleStates */

