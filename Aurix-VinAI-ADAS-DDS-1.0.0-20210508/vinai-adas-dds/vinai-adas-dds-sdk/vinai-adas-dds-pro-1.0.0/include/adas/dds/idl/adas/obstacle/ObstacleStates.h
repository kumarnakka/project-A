

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstacleStates.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstacleStates_820305967_h
#define ObstacleStates_820305967_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstacleStates_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstacleStatesSeq, ObstacleStates);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize(
        ObstacleStates* self);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize_ex(
        ObstacleStates* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstacleStates_initialize_w_params(
        ObstacleStates* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstacleStates_finalize_w_return(
        ObstacleStates* self);

    NDDSUSERDllExport
    void ObstacleStates_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::ObstacleStates> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObstacleStates */

