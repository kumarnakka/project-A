/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrafficSign_1933388431_h
#define TrafficSign_1933388431_h

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

#include "../../ros_ported/geometry/Pose.h"

namespace adas_dds {

    extern const char *TrafficSignTYPENAME;

    struct TrafficSignSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficSignTypeSupport;
    class TrafficSignDataWriter;
    class TrafficSignDataReader;
    #endif
    class TrafficSign 
    {
      public:
        typedef struct TrafficSignSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficSignTypeSupport TypeSupport;
        typedef TrafficSignDataWriter DataWriter;
        typedef TrafficSignDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   sensor_type ;
        DDS_Boolean   sensor_type_valid ;
        DDS_Octet   sensor_loc ;
        DDS_Boolean   sensor_loc_valid ;
        DDS_Octet   id ;
        DDS_Boolean   id_valid ;
        adas_dds::geometry_msgs::Pose   m_pose ;
        DDS_UnsignedShort   traffic_sign_name ;
        DDS_Float   confidence ;
        DDS_Octet   traffic_sign_sup_name ;
        DDS_Float   confidence_sup ;
        DDS_Octet   traffic_sign_relevancy ;
        DDS_Octet   traffic_sign_filter ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficSign_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficSign_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSign_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T TrafficSign
    #define TSeq TrafficSignSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T TrafficSign
    #define TSeq TrafficSignSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern TrafficSign*
    TrafficSign_create();

    NDDSUSERDllExport extern void
    TrafficSign_delete(TrafficSign* sample);

    NDDSUSERDllExport
    RTIBool TrafficSign_initialize(
        TrafficSign* self);

    NDDSUSERDllExport
    RTIBool TrafficSign_initialize_ex(
        TrafficSign* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSign_initialize_w_params(
        TrafficSign* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSign_finalize(
        TrafficSign* self);

    NDDSUSERDllExport
    RTIBool TrafficSign_finalize_w_return(
        TrafficSign* self);

    NDDSUSERDllExport
    void TrafficSign_finalize_ex(
        TrafficSign* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficSign_finalize_w_params(
        TrafficSign* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficSign_finalize_optional_members(
        TrafficSign* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficSign_copy(
        TrafficSign* dst,
        const TrafficSign* src);

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

#endif /* TrafficSign */

