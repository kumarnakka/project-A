

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReferencePlannerState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ReferencePlannerState_469456883_h
#define ReferencePlannerState_469456883_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../obstacles/Obstacle.h"
namespace adas_dds {

    extern const char *ReferencePlannerStateTYPENAME;

    struct ReferencePlannerStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ReferencePlannerStateTypeSupport;
    class ReferencePlannerStateDataWriter;
    class ReferencePlannerStateDataReader;
    #endif
    class ReferencePlannerState 
    {
      public:
        typedef struct ReferencePlannerStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ReferencePlannerStateTypeSupport TypeSupport;
        typedef ReferencePlannerStateDataWriter DataWriter;
        typedef ReferencePlannerStateDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   car_speed ;
        DDS_Float   road_speed ;
        DDS_Float   planning_speed ;
        DDS_Float   target_speed ;
        DDS_Float   look_forward_dist ;
        DDS_Float   look_backward_dist ;
        DDS_Float   look_side_dist ;
        DDS_Float   lateral_err ;
        DDS_Float   lane_change_offset ;
        DDS_Float   remaining_offset ;
        DDS_Boolean   is_safe_for_lane_change ;
        DDS_Boolean   is_cross_lane ;
        DDS_Boolean   left_center_line_exist ;
        DDS_Boolean   right_center_line_exist ;
        DDS_Boolean   center_line_exist ;
        adas_dds::Obstacle   cipv ;
        adas_dds::Obstacle   traffic_light ;
        DDS_Octet   lane_change_status ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ReferencePlannerState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ReferencePlannerState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReferencePlannerState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReferencePlannerState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ReferencePlannerStateSeq, ReferencePlannerState);

    NDDSUSERDllExport
    RTIBool ReferencePlannerState_initialize(
        ReferencePlannerState* self);

    NDDSUSERDllExport
    RTIBool ReferencePlannerState_initialize_ex(
        ReferencePlannerState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ReferencePlannerState_initialize_w_params(
        ReferencePlannerState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ReferencePlannerState_finalize_w_return(
        ReferencePlannerState* self);

    NDDSUSERDllExport
    void ReferencePlannerState_finalize(
        ReferencePlannerState* self);

    NDDSUSERDllExport
    void ReferencePlannerState_finalize_ex(
        ReferencePlannerState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ReferencePlannerState_finalize_w_params(
        ReferencePlannerState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ReferencePlannerState_finalize_optional_members(
        ReferencePlannerState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ReferencePlannerState_copy(
        ReferencePlannerState* dst,
        const ReferencePlannerState* src);

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
        struct type_code<adas_dds::ReferencePlannerState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ReferencePlannerState */

