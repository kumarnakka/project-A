

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstaclePlugin_626351791_h
#define ObstaclePlugin_626351791_h

#include "Obstacle.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../control/TwistPlugin.h"
#include "../../ros_ported/geometry/PointPlugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"
#include "../control/TrajectoryPlugin.h"

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
    * By default, this type is struct Obstacle
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Obstacle)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Obstacle must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Obstacle.
    */
    typedef  class Obstacle ObstacleKeyHolder;

    #define ObstaclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ObstaclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ObstaclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ObstaclePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ObstaclePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ObstaclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ObstaclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Obstacle*
    ObstaclePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Obstacle*
    ObstaclePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Obstacle*
    ObstaclePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePluginSupport_copy_data(
        Obstacle *out,
        const Obstacle *in);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_destroy_data_w_params(
        Obstacle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_destroy_data_ex(
        Obstacle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_destroy_data(
        Obstacle *sample);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_print_data(
        const Obstacle *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Obstacle*
    ObstaclePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Obstacle*
    ObstaclePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_destroy_key_ex(
        ObstacleKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstaclePluginSupport_destroy_key(
        ObstacleKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ObstaclePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ObstaclePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ObstaclePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ObstaclePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ObstaclePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacle *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacle *out,
        const Obstacle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ObstaclePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Obstacle *sample); 

    NDDSUSERDllExport extern RTIBool
    ObstaclePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Obstacle *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Obstacle **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ObstaclePlugin_deserialize_from_cdr_buffer(
        Obstacle *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ObstaclePlugin_data_to_string(
        const Obstacle *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ObstaclePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ObstaclePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ObstaclePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ObstaclePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Obstacle ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ObstacleKeyHolder *key, 
        const Obstacle *instance);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Obstacle *instance, 
        const ObstacleKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Obstacle *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ObstaclePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ObstaclePlugin_new(void);

    NDDSUSERDllExport extern void
    ObstaclePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObstaclePlugin_626351791_h */

