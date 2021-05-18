

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeObstaclePlugin_296475552_h
#define EyeObstaclePlugin_296475552_h

#include "EyeObstacle.h"

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
    * By default, this type is struct EyeqObstacle
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct EyeqObstacle)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * EyeqObstacle must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct EyeqObstacle.
    */
    typedef  class EyeqObstacle EyeqObstacleKeyHolder;

    #define EyeqObstaclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EyeqObstaclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EyeqObstaclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EyeqObstaclePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define EyeqObstaclePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define EyeqObstaclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EyeqObstaclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EyeqObstacle*
    EyeqObstaclePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EyeqObstacle*
    EyeqObstaclePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EyeqObstacle*
    EyeqObstaclePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePluginSupport_copy_data(
        EyeqObstacle *out,
        const EyeqObstacle *in);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_destroy_data_w_params(
        EyeqObstacle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_destroy_data_ex(
        EyeqObstacle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_destroy_data(
        EyeqObstacle *sample);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_print_data(
        const EyeqObstacle *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern EyeqObstacle*
    EyeqObstaclePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EyeqObstacle*
    EyeqObstaclePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_destroy_key_ex(
        EyeqObstacleKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EyeqObstaclePluginSupport_destroy_key(
        EyeqObstacleKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    EyeqObstaclePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    EyeqObstaclePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    EyeqObstaclePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    EyeqObstaclePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    EyeqObstaclePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacle *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacle *out,
        const EyeqObstacle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EyeqObstacle *sample); 

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EyeqObstacle *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacle **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclePlugin_deserialize_from_cdr_buffer(
        EyeqObstacle *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EyeqObstaclePlugin_data_to_string(
        const EyeqObstacle *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EyeqObstaclePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacle ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacleKeyHolder *key, 
        const EyeqObstacle *instance);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacle *instance, 
        const EyeqObstacleKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const EyeqObstacle *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *EyeqObstaclePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    EyeqObstaclePlugin_new(void);

    NDDSUSERDllExport extern void
    EyeqObstaclePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EyeObstaclePlugin_296475552_h */

