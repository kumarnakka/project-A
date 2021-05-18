

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from object.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef objectPlugin_1065708793_h
#define objectPlugin_1065708793_h

#include "object.h"

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
    namespace dw {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct object
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct object)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * object must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct object.
        */
        typedef  class object objectKeyHolder;

        #define objectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define objectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define objectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define objectPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define objectPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define objectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define objectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern object*
        objectPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern object*
        objectPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern object*
        objectPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        objectPluginSupport_copy_data(
            object *out,
            const object *in);

        NDDSUSERDllExport extern void 
        objectPluginSupport_destroy_data_w_params(
            object *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        objectPluginSupport_destroy_data_ex(
            object *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        objectPluginSupport_destroy_data(
            object *sample);

        NDDSUSERDllExport extern void 
        objectPluginSupport_print_data(
            const object *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern object*
        objectPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern object*
        objectPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        objectPluginSupport_destroy_key_ex(
            objectKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        objectPluginSupport_destroy_key(
            objectKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        objectPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        objectPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        objectPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        objectPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        objectPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            object *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            object *out,
            const object *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        objectPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const object *sample); 

        NDDSUSERDllExport extern RTIBool
        objectPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const object *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            object **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        objectPlugin_deserialize_from_cdr_buffer(
            object *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        objectPlugin_data_to_string(
            const object *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        objectPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        objectPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        objectPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        objectPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            object ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            objectKeyHolder *key, 
            const object *instance);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            object *instance, 
            const objectKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const object *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        objectPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *objectPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        objectPlugin_new(void);

        NDDSUSERDllExport extern void
        objectPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dw  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* objectPlugin_1065708793_h */

