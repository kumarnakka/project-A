

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstacleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstacleStatePlugin_2049749918_h
#define ObstacleStatePlugin_2049749918_h

#include "ObstacleState.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "ObstaclePathPredictionPlugin.h"
#include "../obstacles/ObstaclePlugin.h"

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
    * By default, this type is struct ObstacleState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ObstacleState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ObstacleState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ObstacleState.
    */
    typedef  class ObstacleState ObstacleStateKeyHolder;

    #define ObstacleStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ObstacleStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ObstacleStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ObstacleStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ObstacleStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ObstacleStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ObstacleStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ObstacleState*
    ObstacleStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ObstacleState*
    ObstacleStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ObstacleState*
    ObstacleStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePluginSupport_copy_data(
        ObstacleState *out,
        const ObstacleState *in);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_destroy_data_w_params(
        ObstacleState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_destroy_data_ex(
        ObstacleState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_destroy_data(
        ObstacleState *sample);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_print_data(
        const ObstacleState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ObstacleState*
    ObstacleStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ObstacleState*
    ObstacleStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_destroy_key_ex(
        ObstacleStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstacleStatePluginSupport_destroy_key(
        ObstacleStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ObstacleStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ObstacleStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ObstacleStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ObstacleStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ObstacleStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleState *out,
        const ObstacleState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ObstacleStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ObstacleState *sample); 

    NDDSUSERDllExport extern RTIBool
    ObstacleStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ObstacleState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ObstacleStatePlugin_deserialize_from_cdr_buffer(
        ObstacleState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ObstacleStatePlugin_data_to_string(
        const ObstacleState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ObstacleStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ObstacleStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ObstacleStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ObstacleStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleStateKeyHolder *key, 
        const ObstacleState *instance);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleState *instance, 
        const ObstacleStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const ObstacleState *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    ObstacleStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ObstacleStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ObstacleStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ObstacleStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObstacleStatePlugin_2049749918_h */

