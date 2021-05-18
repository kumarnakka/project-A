

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObjectEyeQ4_1098016286_h
#define ObjectEyeQ4_1098016286_h

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

    extern const char *ObjectEyeQ4TYPENAME;

    struct ObjectEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObjectEyeQ4TypeSupport;
    class ObjectEyeQ4DataWriter;
    class ObjectEyeQ4DataReader;
    #endif
    class ObjectEyeQ4 
    {
      public:
        typedef struct ObjectEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObjectEyeQ4TypeSupport TypeSupport;
        typedef ObjectEyeQ4DataWriter DataWriter;
        typedef ObjectEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   obj_id ;
        DDS_Float   obj_existence_probability ;
        DDS_Octet   obj_motion_category ;
        DDS_UnsignedShort   obj_age ;
        DDS_Octet   obj_measuring_status ;
        DDS_Octet   obj_class ;
        DDS_Octet   obj_motion_status ;
        DDS_Octet   obj_brake_light ;
        DDS_Octet   obj_turn_indicator_right ;
        DDS_Octet   obj_turn_indicator_left ;
        DDS_Octet   obj_lane_assignment ;
        DDS_Float   obj_width ;
        DDS_Float   obj_length ;
        DDS_Float   obj_abs_long_velocity ;
        DDS_Float   obj_abs_lat_velocity ;
        DDS_Float   obj_abs_long_acc ;
        DDS_Float   obj_long_distance ;
        DDS_Float   obj_lat_distance ;
        DDS_Float   obj_angle_rate ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObjectEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObjectEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectEyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObjectEyeQ4Seq, ObjectEyeQ4);

    NDDSUSERDllExport
    RTIBool ObjectEyeQ4_initialize(
        ObjectEyeQ4* self);

    NDDSUSERDllExport
    RTIBool ObjectEyeQ4_initialize_ex(
        ObjectEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObjectEyeQ4_initialize_w_params(
        ObjectEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObjectEyeQ4_finalize_w_return(
        ObjectEyeQ4* self);

    NDDSUSERDllExport
    void ObjectEyeQ4_finalize(
        ObjectEyeQ4* self);

    NDDSUSERDllExport
    void ObjectEyeQ4_finalize_ex(
        ObjectEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObjectEyeQ4_finalize_w_params(
        ObjectEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObjectEyeQ4_finalize_optional_members(
        ObjectEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObjectEyeQ4_copy(
        ObjectEyeQ4* dst,
        const ObjectEyeQ4* src);

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
        struct type_code<adas_dds::ObjectEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectEyeQ4 */

