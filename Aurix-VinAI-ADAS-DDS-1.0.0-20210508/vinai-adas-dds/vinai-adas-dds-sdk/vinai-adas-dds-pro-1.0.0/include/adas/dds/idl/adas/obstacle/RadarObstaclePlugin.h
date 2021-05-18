

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadarObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RadarObstaclePlugin_242263088_h
#define RadarObstaclePlugin_242263088_h

#include "RadarObstacle.h"

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
    * By default, this type is struct RadarObstacle
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct RadarObstacle)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * RadarObstacle must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct RadarObstacle.
    */
    typedef  class RadarObstacle RadarObstacleKeyHolder;

    #define RadarObstaclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RadarObstaclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RadarObstaclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RadarObstaclePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define RadarObstaclePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define RadarObstaclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RadarObstaclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstaclePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstaclePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstaclePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePluginSupport_copy_data(
        RadarObstacle *out,
        const RadarObstacle *in);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_destroy_data_w_params(
        RadarObstacle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_destroy_data_ex(
        RadarObstacle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_destroy_data(
        RadarObstacle *sample);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_print_data(
        const RadarObstacle *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstaclePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RadarObstacle*
    RadarObstaclePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_destroy_key_ex(
        RadarObstacleKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RadarObstaclePluginSupport_destroy_key(
        RadarObstacleKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RadarObstaclePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RadarObstaclePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RadarObstaclePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RadarObstaclePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RadarObstaclePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacle *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacle *out,
        const RadarObstacle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RadarObstaclePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RadarObstacle *sample); 

    NDDSUSERDllExport extern RTIBool
    RadarObstaclePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RadarObstacle *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacle **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RadarObstaclePlugin_deserialize_from_cdr_buffer(
        RadarObstacle *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RadarObstaclePlugin_data_to_string(
        const RadarObstacle *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RadarObstaclePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacle ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacleKeyHolder *key, 
        const RadarObstacle *instance);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacle *instance, 
        const RadarObstacleKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const RadarObstacle *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RadarObstaclePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RadarObstaclePlugin_new(void);

    NDDSUSERDllExport extern void
    RadarObstaclePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RadarObstaclePlugin_242263088_h */

