

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeQ4Plugin_2078364379_h
#define EyeQ4Plugin_2078364379_h

#include "EyeQ4.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "ObjectsEyeQ4Plugin.h"
#include "LanesEyeQ4Plugin.h"
#include "TrafficSignsEyeQ4Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define EyeQ4Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EyeQ4Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EyeQ4Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EyeQ4Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EyeQ4Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EyeQ4*
    EyeQ4PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EyeQ4*
    EyeQ4PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EyeQ4*
    EyeQ4PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EyeQ4PluginSupport_copy_data(
        EyeQ4 *out,
        const EyeQ4 *in);

    NDDSUSERDllExport extern void 
    EyeQ4PluginSupport_destroy_data_w_params(
        EyeQ4 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EyeQ4PluginSupport_destroy_data_ex(
        EyeQ4 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EyeQ4PluginSupport_destroy_data(
        EyeQ4 *sample);

    NDDSUSERDllExport extern void 
    EyeQ4PluginSupport_print_data(
        const EyeQ4 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    EyeQ4Plugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    EyeQ4Plugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    EyeQ4Plugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    EyeQ4Plugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    EyeQ4Plugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeQ4 *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    EyeQ4Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeQ4 *out,
        const EyeQ4 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EyeQ4Plugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EyeQ4 *sample); 

    NDDSUSERDllExport extern RTIBool
    EyeQ4Plugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EyeQ4 *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    EyeQ4Plugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        EyeQ4 **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    EyeQ4Plugin_deserialize_from_cdr_buffer(
        EyeQ4 *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EyeQ4Plugin_data_to_string(
        const EyeQ4 *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EyeQ4Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EyeQ4Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EyeQ4Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EyeQ4Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EyeQ4Plugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EyeQ4 ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *EyeQ4Plugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    EyeQ4Plugin_new(void);

    NDDSUSERDllExport extern void
    EyeQ4Plugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EyeQ4Plugin_2078364379_h */

