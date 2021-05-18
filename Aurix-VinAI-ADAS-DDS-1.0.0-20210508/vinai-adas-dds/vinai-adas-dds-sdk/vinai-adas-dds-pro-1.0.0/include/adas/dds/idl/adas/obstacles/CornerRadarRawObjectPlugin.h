

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CornerRadarRawObject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CornerRadarRawObjectPlugin_338630147_h
#define CornerRadarRawObjectPlugin_338630147_h

#include "CornerRadarRawObject.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"

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
    * By default, this type is struct CornerRadarRawObject
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct CornerRadarRawObject)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * CornerRadarRawObject must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct CornerRadarRawObject.
    */
    typedef  class CornerRadarRawObject CornerRadarRawObjectKeyHolder;

    #define CornerRadarRawObjectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CornerRadarRawObjectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CornerRadarRawObjectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CornerRadarRawObjectPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define CornerRadarRawObjectPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define CornerRadarRawObjectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CornerRadarRawObjectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObjectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObjectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObjectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPluginSupport_copy_data(
        CornerRadarRawObject *out,
        const CornerRadarRawObject *in);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_destroy_data_w_params(
        CornerRadarRawObject *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_destroy_data_ex(
        CornerRadarRawObject *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_destroy_data(
        CornerRadarRawObject *sample);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_print_data(
        const CornerRadarRawObject *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObjectPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObjectPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_destroy_key_ex(
        CornerRadarRawObjectKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPluginSupport_destroy_key(
        CornerRadarRawObjectKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CornerRadarRawObjectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CornerRadarRawObjectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CornerRadarRawObjectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObject *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObject *out,
        const CornerRadarRawObject *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CornerRadarRawObject *sample); 

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CornerRadarRawObject *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObject **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectPlugin_deserialize_from_cdr_buffer(
        CornerRadarRawObject *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CornerRadarRawObjectPlugin_data_to_string(
        const CornerRadarRawObject *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CornerRadarRawObjectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObject ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObjectKeyHolder *key, 
        const CornerRadarRawObject *instance);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObject *instance, 
        const CornerRadarRawObjectKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const CornerRadarRawObject *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CornerRadarRawObjectPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CornerRadarRawObjectPlugin_new(void);

    NDDSUSERDllExport extern void
    CornerRadarRawObjectPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CornerRadarRawObjectPlugin_338630147_h */

