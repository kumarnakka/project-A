

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpBlock.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpBlockPlugin_240399916_h
#define VlpBlockPlugin_240399916_h

#include "VlpBlock.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define VlpBlockPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define VlpBlockPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define VlpBlockPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define VlpBlockPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define VlpBlockPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern VlpBlock*
    VlpBlockPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern VlpBlock*
    VlpBlockPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern VlpBlock*
    VlpBlockPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    VlpBlockPluginSupport_copy_data(
        VlpBlock *out,
        const VlpBlock *in);

    NDDSUSERDllExport extern void 
    VlpBlockPluginSupport_destroy_data_w_params(
        VlpBlock *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    VlpBlockPluginSupport_destroy_data_ex(
        VlpBlock *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    VlpBlockPluginSupport_destroy_data(
        VlpBlock *sample);

    NDDSUSERDllExport extern void 
    VlpBlockPluginSupport_print_data(
        const VlpBlock *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    VlpBlockPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    VlpBlockPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    VlpBlockPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    VlpBlockPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    VlpBlockPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpBlock *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    VlpBlockPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpBlock *out,
        const VlpBlock *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    VlpBlockPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const VlpBlock *sample); 

    NDDSUSERDllExport extern RTIBool
    VlpBlockPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const VlpBlock *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    VlpBlockPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        VlpBlock **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    VlpBlockPlugin_deserialize_from_cdr_buffer(
        VlpBlock *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    VlpBlockPlugin_data_to_string(
        const VlpBlock *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    VlpBlockPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    VlpBlockPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    VlpBlockPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    VlpBlockPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    VlpBlockPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        VlpBlock ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *VlpBlockPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    VlpBlockPlugin_new(void);

    NDDSUSERDllExport extern void
    VlpBlockPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VlpBlockPlugin_240399916_h */

