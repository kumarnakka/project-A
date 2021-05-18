/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlMonitor.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ControlMonitor_267580655_h
#define ControlMonitor_267580655_h

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
        DDS_String   lateral_control_param_name ;
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ControlMonitor
    #define TSeq ControlMonitorSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ControlMonitor
    #define TSeq ControlMonitorSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ControlMonitor*
    ControlMonitor_create();

    NDDSUSERDllExport extern void
    ControlMonitor_delete(ControlMonitor* sample);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize(
        ControlMonitor* self);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize_ex(
        ControlMonitor* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlMonitor_initialize_w_params(
        ControlMonitor* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlMonitor_finalize(
        ControlMonitor* self);

    NDDSUSERDllExport
    RTIBool ControlMonitor_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlMonitor */

