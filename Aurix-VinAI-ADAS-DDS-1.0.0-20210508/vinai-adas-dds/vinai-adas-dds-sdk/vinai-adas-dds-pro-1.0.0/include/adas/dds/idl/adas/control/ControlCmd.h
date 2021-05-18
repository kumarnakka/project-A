

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ControlCmd_888505160_h
#define ControlCmd_888505160_h

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

    extern const char *ControlCmdTYPENAME;

    struct ControlCmdSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ControlCmdTypeSupport;
    class ControlCmdDataWriter;
    class ControlCmdDataReader;
    #endif
    class ControlCmd 
    {
      public:
        typedef struct ControlCmdSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ControlCmdTypeSupport TypeSupport;
        typedef ControlCmdDataWriter DataWriter;
        typedef ControlCmdDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   throttle_cmd ;
        DDS_Float   brake_cmd ;
        DDS_Float   hand_wheel_cmd ;
        DDS_Float   speed_cmd ;
        DDS_Float   acceleration_cmd ;
        DDS_Float   front_wheel_cmd ;
        DDS_Float   rear_wheel_cmd ;
        DDS_Float   front_wheel_dot_cmd ;
        DDS_Float   rear_wheel_dot_cmd ;
        DDS_Float   front_wheel_torque_cmd ;
        DDS_Float   rear_wheel_torque_cmd ;
        DDS_Boolean   left_turn_signal_cmd ;
        DDS_Boolean   right_turn_signal_cmd ;
        DDS_Boolean   warning_blinker_cmd ;
        DDS_Short   gear_cmd ;
        DDS_Octet   emergency_stop_cmd ;
        DDS_Float   hand_wheel_rate_avg_cmd ;
        DDS_Float   hand_wheel_rate_maximum_cmd ;
        DDS_Float   hand_wheel_rate_cmd ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ControlCmd_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlCmd_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlCmd_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlCmd_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlCmdSeq, ControlCmd);

    NDDSUSERDllExport
    RTIBool ControlCmd_initialize(
        ControlCmd* self);

    NDDSUSERDllExport
    RTIBool ControlCmd_initialize_ex(
        ControlCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlCmd_initialize_w_params(
        ControlCmd* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlCmd_finalize_w_return(
        ControlCmd* self);

    NDDSUSERDllExport
    void ControlCmd_finalize(
        ControlCmd* self);

    NDDSUSERDllExport
    void ControlCmd_finalize_ex(
        ControlCmd* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlCmd_finalize_w_params(
        ControlCmd* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlCmd_finalize_optional_members(
        ControlCmd* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlCmd_copy(
        ControlCmd* dst,
        const ControlCmd* src);

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
        struct type_code<adas_dds::ControlCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlCmd */

