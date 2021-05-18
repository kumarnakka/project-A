

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectsEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObjectsEyeQ4Plugin_1270630486_h
#define ObjectsEyeQ4Plugin_1270630486_h

#include "ObjectsEyeQ4.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "ObjectEyeQ4Plugin.h"

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
    * By default, this type is struct ObjectsEyeQ4
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ObjectsEyeQ4)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ObjectsEyeQ4 must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ObjectsEyeQ4.
    */
    typedef  class ObjectsEyeQ4 ObjectsEyeQ4KeyHolder;

    #define ObjectsEyeQ4Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ObjectsEyeQ4Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ObjectsEyeQ4Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ObjectsEyeQ4Plugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ObjectsEyeQ4Plugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ObjectsEyeQ4Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ObjectsEyeQ4Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4PluginSupport_copy_data(
        ObjectsEyeQ4 *out,
        const ObjectsEyeQ4 *in);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_destroy_data_w_params(
        ObjectsEyeQ4 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_destroy_data_ex(
        ObjectsEyeQ4 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_destroy_data(
        ObjectsEyeQ4 *sample);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_print_data(
        const ObjectsEyeQ4 *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4PluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4PluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_destroy_key_ex(
        ObjectsEyeQ4KeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4PluginSupport_destroy_key(
        ObjectsEyeQ4KeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ObjectsEyeQ4Plugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4Plugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ObjectsEyeQ4Plugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ObjectsEyeQ4Plugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ObjectsEyeQ4Plugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4 *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4 *out,
        const ObjectsEyeQ4 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ObjectsEyeQ4Plugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ObjectsEyeQ4 *sample); 

    NDDSUSERDllExport extern RTIBool
    ObjectsEyeQ4Plugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ObjectsEyeQ4 *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4 **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ObjectsEyeQ4Plugin_deserialize_from_cdr_buffer(
        ObjectsEyeQ4 *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ObjectsEyeQ4Plugin_data_to_string(
        const ObjectsEyeQ4 *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ObjectsEyeQ4Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ObjectsEyeQ4Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ObjectsEyeQ4Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ObjectsEyeQ4Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4 ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4KeyHolder *key, 
        const ObjectsEyeQ4 *instance);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ObjectsEyeQ4 *instance, 
        const ObjectsEyeQ4KeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const ObjectsEyeQ4 *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    ObjectsEyeQ4Plugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ObjectsEyeQ4Plugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ObjectsEyeQ4Plugin_new(void);

    NDDSUSERDllExport extern void
    ObjectsEyeQ4Plugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectsEyeQ4Plugin_1270630486_h */

