

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaVehicleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScalaVehicleState_188926002_h
#define ScalaVehicleState_188926002_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *ScalaVehicleStateTYPENAME;

    struct ScalaVehicleStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ScalaVehicleStateTypeSupport;
    class ScalaVehicleStateDataWriter;
    class ScalaVehicleStateDataReader;
    #endif
    class ScalaVehicleState 
    {
      public:
        typedef struct ScalaVehicleStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ScalaVehicleStateTypeSupport TypeSupport;
        typedef ScalaVehicleStateDataWriter DataWriter;
        typedef ScalaVehicleStateDataReader DataReader;
        #endif

        DDS_Float   current_yaw_rate ;
        DDS_Float   longitudinal_velocity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ScalaVehicleState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ScalaVehicleState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaVehicleState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaVehicleState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ScalaVehicleStateSeq, ScalaVehicleState);

    NDDSUSERDllExport
    RTIBool ScalaVehicleState_initialize(
        ScalaVehicleState* self);

    NDDSUSERDllExport
    RTIBool ScalaVehicleState_initialize_ex(
        ScalaVehicleState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ScalaVehicleState_initialize_w_params(
        ScalaVehicleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ScalaVehicleState_finalize_w_return(
        ScalaVehicleState* self);

    NDDSUSERDllExport
    void ScalaVehicleState_finalize(
        ScalaVehicleState* self);

    NDDSUSERDllExport
    void ScalaVehicleState_finalize_ex(
        ScalaVehicleState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ScalaVehicleState_finalize_w_params(
        ScalaVehicleState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ScalaVehicleState_finalize_optional_members(
        ScalaVehicleState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ScalaVehicleState_copy(
        ScalaVehicleState* dst,
        const ScalaVehicleState* src);

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
        struct type_code<adas_dds::ScalaVehicleState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ScalaVehicleState */

