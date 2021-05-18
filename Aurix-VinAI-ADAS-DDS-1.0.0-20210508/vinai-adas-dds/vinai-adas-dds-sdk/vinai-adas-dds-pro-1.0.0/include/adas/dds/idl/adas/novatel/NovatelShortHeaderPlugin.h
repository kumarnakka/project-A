

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelShortHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelShortHeaderPlugin_1414189619_h
#define NovatelShortHeaderPlugin_1414189619_h

#include "NovatelShortHeader.h"

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

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct NovatelShortHeader
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct NovatelShortHeader)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * NovatelShortHeader must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct NovatelShortHeader.
    */
    typedef  class NovatelShortHeader NovatelShortHeaderKeyHolder;

    #define NovatelShortHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NovatelShortHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NovatelShortHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NovatelShortHeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define NovatelShortHeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define NovatelShortHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NovatelShortHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NovatelShortHeader*
    NovatelShortHeaderPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NovatelShortHeader*
    NovatelShortHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelShortHeader*
    NovatelShortHeaderPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPluginSupport_copy_data(
        NovatelShortHeader *out,
        const NovatelShortHeader *in);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_destroy_data_w_params(
        NovatelShortHeader *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_destroy_data_ex(
        NovatelShortHeader *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_destroy_data(
        NovatelShortHeader *sample);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_print_data(
        const NovatelShortHeader *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern NovatelShortHeader*
    NovatelShortHeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelShortHeader*
    NovatelShortHeaderPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_destroy_key_ex(
        NovatelShortHeaderKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPluginSupport_destroy_key(
        NovatelShortHeaderKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    NovatelShortHeaderPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    NovatelShortHeaderPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    NovatelShortHeaderPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    NovatelShortHeaderPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeader *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeader *out,
        const NovatelShortHeader *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    NovatelShortHeaderPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const NovatelShortHeader *sample); 

    NDDSUSERDllExport extern RTIBool
    NovatelShortHeaderPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const NovatelShortHeader *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeader **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    NovatelShortHeaderPlugin_deserialize_from_cdr_buffer(
        NovatelShortHeader *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    NovatelShortHeaderPlugin_data_to_string(
        const NovatelShortHeader *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    NovatelShortHeaderPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NovatelShortHeaderPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NovatelShortHeaderPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NovatelShortHeaderPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeader ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeaderKeyHolder *key, 
        const NovatelShortHeader *instance);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        NovatelShortHeader *instance, 
        const NovatelShortHeaderKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const NovatelShortHeader *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    NovatelShortHeaderPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *NovatelShortHeaderPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    NovatelShortHeaderPlugin_new(void);

    NDDSUSERDllExport extern void
    NovatelShortHeaderPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelShortHeaderPlugin_1414189619_h */

