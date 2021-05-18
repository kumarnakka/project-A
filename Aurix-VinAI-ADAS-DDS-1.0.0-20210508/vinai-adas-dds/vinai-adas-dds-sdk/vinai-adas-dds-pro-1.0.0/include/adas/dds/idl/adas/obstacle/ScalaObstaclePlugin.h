

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScalaObstaclePlugin_226478892_h
#define ScalaObstaclePlugin_226478892_h

#include "ScalaObstacle.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../common/Point2Plugin.h"

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
    * By default, this type is struct ScalaObstacle
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ScalaObstacle)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ScalaObstacle must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ScalaObstacle.
    */
    typedef  class ScalaObstacle ScalaObstacleKeyHolder;

    #define ScalaObstaclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ScalaObstaclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ScalaObstaclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ScalaObstaclePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ScalaObstaclePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ScalaObstaclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ScalaObstaclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstaclePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstaclePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstaclePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePluginSupport_copy_data(
        ScalaObstacle *out,
        const ScalaObstacle *in);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_destroy_data_w_params(
        ScalaObstacle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_destroy_data_ex(
        ScalaObstacle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_destroy_data(
        ScalaObstacle *sample);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_print_data(
        const ScalaObstacle *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstaclePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstaclePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_destroy_key_ex(
        ScalaObstacleKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ScalaObstaclePluginSupport_destroy_key(
        ScalaObstacleKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ScalaObstaclePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ScalaObstaclePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ScalaObstaclePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ScalaObstaclePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ScalaObstaclePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacle *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacle *out,
        const ScalaObstacle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ScalaObstaclePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ScalaObstacle *sample); 

    NDDSUSERDllExport extern RTIBool
    ScalaObstaclePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ScalaObstacle *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacle **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ScalaObstaclePlugin_deserialize_from_cdr_buffer(
        ScalaObstacle *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ScalaObstaclePlugin_data_to_string(
        const ScalaObstacle *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ScalaObstaclePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ScalaObstaclePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ScalaObstaclePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ScalaObstaclePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacle ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacleKeyHolder *key, 
        const ScalaObstacle *instance);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ScalaObstacle *instance, 
        const ScalaObstacleKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const ScalaObstacle *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    ScalaObstaclePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ScalaObstaclePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ScalaObstaclePlugin_new(void);

    NDDSUSERDllExport extern void
    ScalaObstaclePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ScalaObstaclePlugin_226478892_h */

