

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VehicleState_157436726_h
#define VehicleState_157436726_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "Twist.h"
namespace adas_dds {

    extern const char *VehicleStateTYPENAME;

    struct VehicleStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class VehicleStateTypeSupport;
    class VehicleStateDataWriter;
    class VehicleStateDataReader;
    #endif
    class VehicleState 
    {
      public:
        typedef struct VehicleStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef VehicleStateTypeSupport TypeSupport;
        typedef VehicleStateDataWriter DataWriter;
        typedef VehicleStateDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   g_pos ;
        adas_dds::Twist   g_vel ;
        adas_dds::Twist   g_acc ;
        adas_dds::Twist   b_vel ;
        adas_dds::Twist   b_acc ;
        DDS_Float   front_wheel_angle ;
        DDS_Float   rear_wheel_angle ;
        DDS_Float   front_slip_angle ;
        DDS_Float   rear_slip_angle ;
        DDS_Float   front_wheel_spin_speed ;
        DDS_Float   rear_wheel_spin_speed ;
        DDS_Float   front_wheel_spin_angle ;
        DDS_Float   rear_wheel_spin_angle ;
        DDS_Boolean   left_turn_signal_status ;
        DDS_Boolean   right_turn_signal_status ;
        DDS_Boolean   warning_blinker_status ;
        DDS_Short   gear_status ;
        DDS_Short   had_status ;
        DDS_Short   wiper_status ;
        DDS_Short   ambient_light_status ;
        DDS_Short   lane_change_status ;
        DDS_Boolean   high_beam_head_lights ;
        DDS_Boolean   door_driver ;
        DDS_Boolean   door_passenger ;
        DDS_Boolean   door_rear_left ;
        DDS_Boolean   door_rear_right ;
        DDS_Boolean   door_hood ;
        DDS_Boolean   buckle_driver ;
        DDS_Boolean   buckle_passenger ;
        DDS_Float   hane_wheel_torque ;
        DDS_Float   fuel_level ;
        DDS_Long   disengagement_times ;
        DDS_Float   total_mileage ;
        DDS_Float   auto_mileage ;
        DDS_Double   latitude ;
        DDS_Double   longitude ;
        DDS_Double   height ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* VehicleState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *VehicleState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VehicleState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VehicleState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(VehicleStateSeq, VehicleState);

    NDDSUSERDllExport
    RTIBool VehicleState_initialize(
        VehicleState* self);

    NDDSUSERDllExport
    RTIBool VehicleState_initialize_ex(
        VehicleState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VehicleState_initialize_w_params(
        VehicleState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VehicleState_finalize_w_return(
        VehicleState* self);

    NDDSUSERDllExport
    void VehicleState_finalize(
        VehicleState* self);

    NDDSUSERDllExport
    void VehicleState_finalize_ex(
        VehicleState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void VehicleState_finalize_w_params(
        VehicleState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void VehicleState_finalize_optional_members(
        VehicleState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool VehicleState_copy(
        VehicleState* dst,
        const VehicleState* src);

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
        struct type_code<adas_dds::VehicleState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VehicleState */

