/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeqVehicleLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef EyeqVehicleLine_2103144184_h
#define EyeqVehicleLine_2103144184_h

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

    extern const char *EyeqVehicleLineTYPENAME;

    struct EyeqVehicleLineSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeqVehicleLineTypeSupport;
    class EyeqVehicleLineDataWriter;
    class EyeqVehicleLineDataReader;
    #endif
    class EyeqVehicleLine 
    {
      public:
        typedef struct EyeqVehicleLineSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeqVehicleLineTypeSupport TypeSupport;
        typedef EyeqVehicleLineDataWriter DataWriter;
        typedef EyeqVehicleLineDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   position ;
        DDS_Float   heading_angle ;
        DDS_Float   curvature ;
        DDS_Float   curvature_dev ;
        DDS_Float   range_start ;
        DDS_Float   range_end ;
        DDS_Char   line_type ;
        DDS_Char   quality ;
        DDS_Float   width ;
        DDS_Octet   line_crossing ;
        DDS_Char   mark_color ;
        DDS_Char   line_status ;
        DDS_Boolean   is_pred ;
        DDS_Boolean   is_pred_otherside ;
        DDS_Boolean   is_pred_overide ;
        DDS_Boolean   is_pred_occluder ;
        DDS_Boolean   is_pred_headway ;
        DDS_Boolean   source_diverging_lanes ;
        DDS_Boolean   source_guardrail_shadow ;
        DDS_Boolean   source_HWE_SPAIN ;
        DDS_Boolean   source_merge ;
        DDS_Float   TLC ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeqVehicleLine_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeqVehicleLine_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqVehicleLine_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T EyeqVehicleLine
    #define TSeq EyeqVehicleLineSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T EyeqVehicleLine
    #define TSeq EyeqVehicleLineSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern EyeqVehicleLine*
    EyeqVehicleLine_create();

    NDDSUSERDllExport extern void
    EyeqVehicleLine_delete(EyeqVehicleLine* sample);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_initialize(
        EyeqVehicleLine* self);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_initialize_ex(
        EyeqVehicleLine* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_initialize_w_params(
        EyeqVehicleLine* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_finalize(
        EyeqVehicleLine* self);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_finalize_w_return(
        EyeqVehicleLine* self);

    NDDSUSERDllExport
    void EyeqVehicleLine_finalize_ex(
        EyeqVehicleLine* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeqVehicleLine_finalize_w_params(
        EyeqVehicleLine* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeqVehicleLine_finalize_optional_members(
        EyeqVehicleLine* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeqVehicleLine_copy(
        EyeqVehicleLine* dst,
        const EyeqVehicleLine* src);

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

#endif /* EyeqVehicleLine */

