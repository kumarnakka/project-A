

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelCommonHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelCommonHeaderPlugin_1036755087_h
#define NovatelCommonHeaderPlugin_1036755087_h

#include "NovatelCommonHeader.h"

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
    * By default, this type is struct NovatelCommonHeader
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct NovatelCommonHeader)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * NovatelCommonHeader must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct NovatelCommonHeader.
    */
    typedef  class NovatelCommonHeader NovatelCommonHeaderKeyHolder;

    #define NovatelCommonHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NovatelCommonHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NovatelCommonHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NovatelCommonHeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define NovatelCommonHeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define NovatelCommonHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NovatelCommonHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeaderPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeaderPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPluginSupport_copy_data(
        NovatelCommonHeader *out,
        const NovatelCommonHeader *in);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_destroy_data_w_params(
        NovatelCommonHeader *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_destroy_data_ex(
        NovatelCommonHeader *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_destroy_data(
        NovatelCommonHeader *sample);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_print_data(
        const NovatelCommonHeader *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeaderPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_destroy_key_ex(
        NovatelCommonHeaderKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPluginSupport_destroy_key(
        NovatelCommonHeaderKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    NovatelCommonHeaderPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    NovatelCommonHeaderPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    NovatelCommonHeaderPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    NovatelCommonHeaderPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeader *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeader *out,
        const NovatelCommonHeader *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    NovatelCommonHeaderPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const NovatelCommonHeader *sample); 

    NDDSUSERDllExport extern RTIBool
    NovatelCommonHeaderPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const NovatelCommonHeader *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeader **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    NovatelCommonHeaderPlugin_deserialize_from_cdr_buffer(
        NovatelCommonHeader *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    NovatelCommonHeaderPlugin_data_to_string(
        const NovatelCommonHeader *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    NovatelCommonHeaderPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NovatelCommonHeaderPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NovatelCommonHeaderPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NovatelCommonHeaderPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeader ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeaderKeyHolder *key, 
        const NovatelCommonHeader *instance);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        NovatelCommonHeader *instance, 
        const NovatelCommonHeaderKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const NovatelCommonHeader *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    NovatelCommonHeaderPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *NovatelCommonHeaderPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    NovatelCommonHeaderPlugin_new(void);

    NDDSUSERDllExport extern void
    NovatelCommonHeaderPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelCommonHeaderPlugin_1036755087_h */

