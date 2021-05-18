

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelBestPos.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelBestPosPlugin_1360645303_h
#define NovatelBestPosPlugin_1360645303_h

#include "NovatelBestPos.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "NovatelCommonHeaderPlugin.h"

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
    * By default, this type is struct NovatelBestPos
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct NovatelBestPos)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * NovatelBestPos must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct NovatelBestPos.
    */
    typedef  class NovatelBestPos NovatelBestPosKeyHolder;

    #define NovatelBestPosPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NovatelBestPosPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NovatelBestPosPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NovatelBestPosPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define NovatelBestPosPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define NovatelBestPosPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NovatelBestPosPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPosPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPosPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPosPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPluginSupport_copy_data(
        NovatelBestPos *out,
        const NovatelBestPos *in);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_destroy_data_w_params(
        NovatelBestPos *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_destroy_data_ex(
        NovatelBestPos *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_destroy_data(
        NovatelBestPos *sample);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_print_data(
        const NovatelBestPos *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPosPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPosPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_destroy_key_ex(
        NovatelBestPosKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelBestPosPluginSupport_destroy_key(
        NovatelBestPosKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    NovatelBestPosPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    NovatelBestPosPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    NovatelBestPosPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    NovatelBestPosPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    NovatelBestPosPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPos *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPos *out,
        const NovatelBestPos *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    NovatelBestPosPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const NovatelBestPos *sample); 

    NDDSUSERDllExport extern RTIBool
    NovatelBestPosPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const NovatelBestPos *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPos **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    NovatelBestPosPlugin_deserialize_from_cdr_buffer(
        NovatelBestPos *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    NovatelBestPosPlugin_data_to_string(
        const NovatelBestPos *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    NovatelBestPosPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NovatelBestPosPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NovatelBestPosPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NovatelBestPosPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPos ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPosKeyHolder *key, 
        const NovatelBestPos *instance);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        NovatelBestPos *instance, 
        const NovatelBestPosKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const NovatelBestPos *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    NovatelBestPosPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *NovatelBestPosPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    NovatelBestPosPlugin_new(void);

    NDDSUSERDllExport extern void
    NovatelBestPosPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelBestPosPlugin_1360645303_h */

