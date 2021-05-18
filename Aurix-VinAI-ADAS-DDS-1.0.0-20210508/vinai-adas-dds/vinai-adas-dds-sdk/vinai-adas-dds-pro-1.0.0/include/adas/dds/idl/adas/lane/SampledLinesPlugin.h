

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SampledLinesPlugin_711636351_h
#define SampledLinesPlugin_711636351_h

#include "SampledLines.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "SampledLinePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define SampledLinesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SampledLinesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SampledLinesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SampledLinesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SampledLinesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SampledLines*
    SampledLinesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SampledLines*
    SampledLinesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SampledLines*
    SampledLinesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SampledLinesPluginSupport_copy_data(
        SampledLines *out,
        const SampledLines *in);

    NDDSUSERDllExport extern void 
    SampledLinesPluginSupport_destroy_data_w_params(
        SampledLines *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SampledLinesPluginSupport_destroy_data_ex(
        SampledLines *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SampledLinesPluginSupport_destroy_data(
        SampledLines *sample);

    NDDSUSERDllExport extern void 
    SampledLinesPluginSupport_print_data(
        const SampledLines *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SampledLinesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SampledLinesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SampledLinesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SampledLinesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SampledLinesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SampledLines *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SampledLinesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SampledLines *out,
        const SampledLines *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SampledLinesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SampledLines *sample); 

    NDDSUSERDllExport extern RTIBool
    SampledLinesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const SampledLines *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    SampledLinesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SampledLines **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SampledLinesPlugin_deserialize_from_cdr_buffer(
        SampledLines *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    SampledLinesPlugin_data_to_string(
        const SampledLines *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    SampledLinesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SampledLinesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SampledLinesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SampledLinesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SampledLinesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SampledLines ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *SampledLinesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SampledLinesPlugin_new(void);

    NDDSUSERDllExport extern void
    SampledLinesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SampledLinesPlugin_711636351_h */

