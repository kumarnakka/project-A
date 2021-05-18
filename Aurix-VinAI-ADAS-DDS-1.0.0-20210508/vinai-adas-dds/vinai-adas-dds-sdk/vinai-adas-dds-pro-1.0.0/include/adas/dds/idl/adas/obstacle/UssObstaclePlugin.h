

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UssObstaclePlugin_1275227791_h
#define UssObstaclePlugin_1275227791_h

#include "UssObstacle.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../../ros_ported/geometry/PointPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define UssObstaclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UssObstaclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UssObstaclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UssObstaclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UssObstaclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UssObstacle*
    UssObstaclePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UssObstacle*
    UssObstaclePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UssObstacle*
    UssObstaclePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclePluginSupport_copy_data(
        UssObstacle *out,
        const UssObstacle *in);

    NDDSUSERDllExport extern void 
    UssObstaclePluginSupport_destroy_data_w_params(
        UssObstacle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UssObstaclePluginSupport_destroy_data_ex(
        UssObstacle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UssObstaclePluginSupport_destroy_data(
        UssObstacle *sample);

    NDDSUSERDllExport extern void 
    UssObstaclePluginSupport_print_data(
        const UssObstacle *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UssObstaclePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UssObstaclePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UssObstaclePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UssObstaclePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UssObstaclePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacle *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UssObstaclePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacle *out,
        const UssObstacle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UssObstaclePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UssObstacle *sample); 

    NDDSUSERDllExport extern RTIBool
    UssObstaclePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UssObstacle *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacle **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    UssObstaclePlugin_deserialize_from_cdr_buffer(
        UssObstacle *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UssObstaclePlugin_data_to_string(
        const UssObstacle *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UssObstaclePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UssObstaclePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UssObstaclePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UssObstaclePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacle ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *UssObstaclePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UssObstaclePlugin_new(void);

    NDDSUSERDllExport extern void
    UssObstaclePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UssObstaclePlugin_1275227791_h */

