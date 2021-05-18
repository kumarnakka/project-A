

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSignPlugin_1933388431_h
#define TrafficSignPlugin_1933388431_h

#include "TrafficSign.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"

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
    * By default, this type is struct TrafficSign
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TrafficSign)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TrafficSign must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TrafficSign.
    */
    typedef  class TrafficSign TrafficSignKeyHolder;

    #define TrafficSignPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrafficSignPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrafficSignPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrafficSignPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define TrafficSignPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define TrafficSignPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrafficSignPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TrafficSign*
    TrafficSignPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TrafficSign*
    TrafficSignPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficSign*
    TrafficSignPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPluginSupport_copy_data(
        TrafficSign *out,
        const TrafficSign *in);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_destroy_data_w_params(
        TrafficSign *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_destroy_data_ex(
        TrafficSign *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_destroy_data(
        TrafficSign *sample);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_print_data(
        const TrafficSign *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern TrafficSign*
    TrafficSignPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficSign*
    TrafficSignPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_destroy_key_ex(
        TrafficSignKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficSignPluginSupport_destroy_key(
        TrafficSignKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrafficSignPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrafficSignPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrafficSignPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrafficSignPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrafficSignPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSign *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSign *out,
        const TrafficSign *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrafficSignPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TrafficSign *sample); 

    NDDSUSERDllExport extern RTIBool
    TrafficSignPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TrafficSign *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSign **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrafficSignPlugin_deserialize_from_cdr_buffer(
        TrafficSign *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrafficSignPlugin_data_to_string(
        const TrafficSign *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrafficSignPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrafficSignPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSign ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSignKeyHolder *key, 
        const TrafficSign *instance);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSign *instance, 
        const TrafficSignKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const TrafficSign *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrafficSignPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrafficSignPlugin_new(void);

    NDDSUSERDllExport extern void
    TrafficSignPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSignPlugin_1933388431_h */

