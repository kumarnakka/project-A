

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BBox.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BBoxPlugin_797198919_h
#define BBoxPlugin_797198919_h

#include "BBox.h"

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
    * By default, this type is struct Box
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Box)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Box must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Box.
    */
    typedef  class Box BoxKeyHolder;

    #define BoxPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define BoxPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BoxPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BoxPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define BoxPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define BoxPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BoxPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Box*
    BoxPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Box*
    BoxPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Box*
    BoxPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BoxPluginSupport_copy_data(
        Box *out,
        const Box *in);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_destroy_data_w_params(
        Box *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_destroy_data_ex(
        Box *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_destroy_data(
        Box *sample);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_print_data(
        const Box *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Box*
    BoxPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Box*
    BoxPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_destroy_key_ex(
        BoxKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BoxPluginSupport_destroy_key(
        BoxKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    BoxPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    BoxPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    BoxPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    BoxPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    BoxPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Box *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Box *out,
        const Box *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    BoxPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Box *sample); 

    NDDSUSERDllExport extern RTIBool
    BoxPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Box *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Box **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BoxPlugin_deserialize_from_cdr_buffer(
        Box *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    BoxPlugin_data_to_string(
        const Box *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    BoxPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BoxPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BoxPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BoxPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Box ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        BoxKeyHolder *key, 
        const Box *instance);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Box *instance, 
        const BoxKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Box *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    BoxPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *BoxPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    BoxPlugin_new(void);

    NDDSUSERDllExport extern void
    BoxPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BBoxPlugin_797198919_h */

