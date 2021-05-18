

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RoutingWayPoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RoutingWayPointPlugin_1643201544_h
#define RoutingWayPointPlugin_1643201544_h

#include "RoutingWayPoint.h"

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
    * By default, this type is struct RoutingWayPoint
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct RoutingWayPoint)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * RoutingWayPoint must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct RoutingWayPoint.
    */
    typedef  class RoutingWayPoint RoutingWayPointKeyHolder;

    #define RoutingWayPointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RoutingWayPointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RoutingWayPointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RoutingWayPointPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define RoutingWayPointPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define RoutingWayPointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RoutingWayPointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPointPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPointPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPointPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPluginSupport_copy_data(
        RoutingWayPoint *out,
        const RoutingWayPoint *in);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_destroy_data_w_params(
        RoutingWayPoint *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_destroy_data_ex(
        RoutingWayPoint *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_destroy_data(
        RoutingWayPoint *sample);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_print_data(
        const RoutingWayPoint *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPointPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPointPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_destroy_key_ex(
        RoutingWayPointKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RoutingWayPointPluginSupport_destroy_key(
        RoutingWayPointKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RoutingWayPointPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RoutingWayPointPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RoutingWayPointPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RoutingWayPointPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RoutingWayPointPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPoint *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPoint *out,
        const RoutingWayPoint *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RoutingWayPointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RoutingWayPoint *sample); 

    NDDSUSERDllExport extern RTIBool
    RoutingWayPointPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RoutingWayPoint *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPoint **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RoutingWayPointPlugin_deserialize_from_cdr_buffer(
        RoutingWayPoint *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RoutingWayPointPlugin_data_to_string(
        const RoutingWayPoint *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RoutingWayPointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RoutingWayPointPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RoutingWayPointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RoutingWayPointPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPoint ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPointKeyHolder *key, 
        const RoutingWayPoint *instance);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        RoutingWayPoint *instance, 
        const RoutingWayPointKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const RoutingWayPoint *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    RoutingWayPointPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RoutingWayPointPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RoutingWayPointPlugin_new(void);

    NDDSUSERDllExport extern void
    RoutingWayPointPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RoutingWayPointPlugin_1643201544_h */

