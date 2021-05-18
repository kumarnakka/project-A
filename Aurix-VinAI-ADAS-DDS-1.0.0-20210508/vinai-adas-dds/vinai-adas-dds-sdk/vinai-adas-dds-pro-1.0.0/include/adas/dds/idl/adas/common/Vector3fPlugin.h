

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3f.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vector3fPlugin_248186045_h
#define Vector3fPlugin_248186045_h

#include "Vector3f.h"

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

    #define Vector3fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Vector3fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Vector3fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Vector3fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Vector3fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Vector3f*
    Vector3fPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Vector3f*
    Vector3fPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Vector3f*
    Vector3fPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Vector3fPluginSupport_copy_data(
        Vector3f *out,
        const Vector3f *in);

    NDDSUSERDllExport extern void 
    Vector3fPluginSupport_destroy_data_w_params(
        Vector3f *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Vector3fPluginSupport_destroy_data_ex(
        Vector3f *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Vector3fPluginSupport_destroy_data(
        Vector3f *sample);

    NDDSUSERDllExport extern void 
    Vector3fPluginSupport_print_data(
        const Vector3f *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Vector3fPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Vector3fPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Vector3fPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Vector3fPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Vector3fPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Vector3f *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Vector3fPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Vector3f *out,
        const Vector3f *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Vector3fPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Vector3f *sample); 

    NDDSUSERDllExport extern RTIBool
    Vector3fPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Vector3f *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    Vector3fPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Vector3f **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    Vector3fPlugin_deserialize_from_cdr_buffer(
        Vector3f *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Vector3fPlugin_data_to_string(
        const Vector3f *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Vector3fPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Vector3fPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Vector3fPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Vector3fPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Vector3fPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Vector3f ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *Vector3fPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Vector3fPlugin_new(void);

    NDDSUSERDllExport extern void
    Vector3fPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Vector3fPlugin_248186045_h */

