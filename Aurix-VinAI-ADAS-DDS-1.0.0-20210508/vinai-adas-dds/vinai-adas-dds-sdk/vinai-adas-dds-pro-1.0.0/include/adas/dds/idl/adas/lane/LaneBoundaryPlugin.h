

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundary.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneBoundaryPlugin_2027416843_h
#define LaneBoundaryPlugin_2027416843_h

#include "LaneBoundary.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "LineHeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define LaneBoundaryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LaneBoundaryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LaneBoundaryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LaneBoundaryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LaneBoundaryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LaneBoundary*
    LaneBoundaryPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LaneBoundary*
    LaneBoundaryPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneBoundary*
    LaneBoundaryPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPluginSupport_copy_data(
        LaneBoundary *out,
        const LaneBoundary *in);

    NDDSUSERDllExport extern void 
    LaneBoundaryPluginSupport_destroy_data_w_params(
        LaneBoundary *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LaneBoundaryPluginSupport_destroy_data_ex(
        LaneBoundary *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneBoundaryPluginSupport_destroy_data(
        LaneBoundary *sample);

    NDDSUSERDllExport extern void 
    LaneBoundaryPluginSupport_print_data(
        const LaneBoundary *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LaneBoundaryPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LaneBoundaryPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LaneBoundaryPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LaneBoundaryPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LaneBoundaryPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundary *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundary *out,
        const LaneBoundary *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LaneBoundary *sample); 

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LaneBoundary *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundary **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPlugin_deserialize_from_cdr_buffer(
        LaneBoundary *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LaneBoundaryPlugin_data_to_string(
        const LaneBoundary *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LaneBoundaryPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundary ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LaneBoundaryPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LaneBoundaryPlugin_new(void);

    NDDSUSERDllExport extern void
    LaneBoundaryPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneBoundaryPlugin_2027416843_h */

