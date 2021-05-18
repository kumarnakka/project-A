

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSignEyeQ4Plugin_563920906_h
#define TrafficSignEyeQ4Plugin_563920906_h

#include "TrafficSignEyeQ4.h"

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
    * By default, this type is struct TrafficSignEyeQ4
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TrafficSignEyeQ4)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TrafficSignEyeQ4 must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TrafficSignEyeQ4.
    */
    typedef  class TrafficSignEyeQ4 TrafficSignEyeQ4KeyHolder;

    #define TrafficSignEyeQ4Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrafficSignEyeQ4Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrafficSignEyeQ4Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrafficSignEyeQ4Plugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define TrafficSignEyeQ4Plugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define TrafficSignEyeQ4Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrafficSignEyeQ4Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4PluginSupport_copy_data(
        TrafficSignEyeQ4 *out,
        const TrafficSignEyeQ4 *in);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_destroy_data_w_params(
        TrafficSignEyeQ4 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_destroy_data_ex(
        TrafficSignEyeQ4 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_destroy_data(
        TrafficSignEyeQ4 *sample);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_print_data(
        const TrafficSignEyeQ4 *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4PluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4PluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_destroy_key_ex(
        TrafficSignEyeQ4KeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4PluginSupport_destroy_key(
        TrafficSignEyeQ4KeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrafficSignEyeQ4Plugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4Plugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrafficSignEyeQ4Plugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrafficSignEyeQ4Plugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrafficSignEyeQ4Plugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4 *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4 *out,
        const TrafficSignEyeQ4 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrafficSignEyeQ4Plugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TrafficSignEyeQ4 *sample); 

    NDDSUSERDllExport extern RTIBool
    TrafficSignEyeQ4Plugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TrafficSignEyeQ4 *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4 **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrafficSignEyeQ4Plugin_deserialize_from_cdr_buffer(
        TrafficSignEyeQ4 *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrafficSignEyeQ4Plugin_data_to_string(
        const TrafficSignEyeQ4 *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrafficSignEyeQ4Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrafficSignEyeQ4Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignEyeQ4Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignEyeQ4Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4 ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4KeyHolder *key, 
        const TrafficSignEyeQ4 *instance);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignEyeQ4 *instance, 
        const TrafficSignEyeQ4KeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const TrafficSignEyeQ4 *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignEyeQ4Plugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrafficSignEyeQ4Plugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrafficSignEyeQ4Plugin_new(void);

    NDDSUSERDllExport extern void
    TrafficSignEyeQ4Plugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSignEyeQ4Plugin_563920906_h */

