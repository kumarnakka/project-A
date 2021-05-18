

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShmemInfo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ShmemInfoPlugin_1787268623_h
#define ShmemInfoPlugin_1787268623_h

#include "ShmemInfo.h"

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
    * By default, this type is struct ShmemInfo
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ShmemInfo)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ShmemInfo must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ShmemInfo.
    */
    typedef  class ShmemInfo ShmemInfoKeyHolder;

    #define ShmemInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ShmemInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ShmemInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ShmemInfoPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ShmemInfoPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ShmemInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ShmemInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPluginSupport_copy_data(
        ShmemInfo *out,
        const ShmemInfo *in);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_destroy_data_w_params(
        ShmemInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_destroy_data_ex(
        ShmemInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_destroy_data(
        ShmemInfo *sample);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_print_data(
        const ShmemInfo *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfoPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfoPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_destroy_key_ex(
        ShmemInfoKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShmemInfoPluginSupport_destroy_key(
        ShmemInfoKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ShmemInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ShmemInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ShmemInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ShmemInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ShmemInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfo *out,
        const ShmemInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ShmemInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ShmemInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ShmemInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ShmemInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ShmemInfoPlugin_deserialize_from_cdr_buffer(
        ShmemInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ShmemInfoPlugin_data_to_string(
        const ShmemInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ShmemInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ShmemInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ShmemInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ShmemInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfoKeyHolder *key, 
        const ShmemInfo *instance);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ShmemInfo *instance, 
        const ShmemInfoKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const ShmemInfo *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    ShmemInfoPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ShmemInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ShmemInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    ShmemInfoPlugin_delete(struct PRESTypePlugin *);

    #define ShmemImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ShmemImagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ShmemImagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ShmemImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ShmemImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ShmemImage*
    ShmemImagePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ShmemImage*
    ShmemImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShmemImage*
    ShmemImagePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ShmemImagePluginSupport_copy_data(
        ShmemImage *out,
        const ShmemImage *in);

    NDDSUSERDllExport extern void 
    ShmemImagePluginSupport_destroy_data_w_params(
        ShmemImage *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ShmemImagePluginSupport_destroy_data_ex(
        ShmemImage *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShmemImagePluginSupport_destroy_data(
        ShmemImage *sample);

    NDDSUSERDllExport extern void 
    ShmemImagePluginSupport_print_data(
        const ShmemImage *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ShmemImagePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ShmemImagePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ShmemImagePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ShmemImagePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ShmemImagePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShmemImage *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ShmemImagePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShmemImage *out,
        const ShmemImage *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ShmemImagePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ShmemImage *sample); 

    NDDSUSERDllExport extern RTIBool
    ShmemImagePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ShmemImage *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ShmemImagePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ShmemImage **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ShmemImagePlugin_deserialize_from_cdr_buffer(
        ShmemImage *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ShmemImagePlugin_data_to_string(
        const ShmemImage *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ShmemImagePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ShmemImagePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ShmemImagePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ShmemImagePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ShmemImagePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ShmemImage ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ShmemImagePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ShmemImagePlugin_new(void);

    NDDSUSERDllExport extern void
    ShmemImagePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ShmemInfoPlugin_1787268623_h */

