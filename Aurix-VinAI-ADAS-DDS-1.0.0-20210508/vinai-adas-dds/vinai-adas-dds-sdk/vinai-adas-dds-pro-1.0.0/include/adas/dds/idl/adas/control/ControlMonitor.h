

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlMonitor.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ControlMonitor_267580655_h
#define ControlMonitor_267580655_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *ControlMonitorTYPENAME;

    struct ControlMonitorSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ControlMonitorTypeSupport;
    class ControlMonitorDataWriter;
    class ControlMonitorDataReader;
    #endif
    class ControlMonitor 
    {
      public:
        typedef struct ControlMonitorSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ControlMonitorTypeSupport TypeSupport;
        typedef ControlMonitorDataWriter DataWriter;
        typedef ControlMonitorDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   lateral_error ;
        DDS_Float   average_lateral_error_when_engaged ;
        DDS_Float   steer_wheel_command ;
        DDS_Float   steer_wheel_actual ;
        DDS_Float   steer_wheel_error ;
        DDS_Float   speed_command ;
        DDS_Float   speed_actual ;
        DDS_Float   speed_error ;
        DDS_Float   vehicle_acceleration ;
        DDS_Char *   lateral_control_param_name ;
        DDS_Boolean   enabled ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ControlMonitor_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlMonitor_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlMonitor_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlMonitor_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlMonitorSeq, ControlMonitor);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize(
        ControlMonitor* self);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize_ex(
        ControlMonitor* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize_w_params(
        ControlMonitor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlMonitor_finalize_w_return(
        ControlMonitor* self);

    NDDSUSERDllExport
    void ControlMonitor_finalize(
        ControlMonitor* self);

    NDDSUSERDllExport
    void ControlMonitor_finalize_ex(
        ControlMonitor* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlMonitor_finalize_w_params(
        ControlMonitor* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlMonitor_finalize_optional_members(
        ControlMonitor* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlMonitor_copy(
        ControlMonitor* dst,
        const ControlMonitor* src);

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
        struct type_code<adas_dds::ControlMonitor> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlMonitor */

