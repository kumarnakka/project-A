

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UssObstaclesPlugin_939312938_h
#define UssObstaclesPlugin_939312938_h

#include "UssObstacles.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "UssObstaclePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define UssObstaclesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UssObstaclesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UssObstaclesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UssObstaclesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UssObstaclesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UssObstacles*
    UssObstaclesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UssObstacles*
    UssObstaclesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UssObstacles*
    UssObstaclesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclesPluginSupport_copy_data(
        UssObstacles *out,
        const UssObstacles *in);

    NDDSUSERDllExport extern void 
    UssObstaclesPluginSupport_destroy_data_w_params(
        UssObstacles *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UssObstaclesPluginSupport_destroy_data_ex(
        UssObstacles *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UssObstaclesPluginSupport_destroy_data(
        UssObstacles *sample);

    NDDSUSERDllExport extern void 
    UssObstaclesPluginSupport_print_data(
        const UssObstacles *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UssObstaclesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UssObstaclesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UssObstaclesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UssObstaclesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UssObstaclesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacles *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UssObstaclesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacles *out,
        const UssObstacles *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UssObstaclesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UssObstacles *sample); 

    NDDSUSERDllExport extern RTIBool
    UssObstaclesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UssObstacles *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacles **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    UssObstaclesPlugin_deserialize_from_cdr_buffer(
        UssObstacles *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UssObstaclesPlugin_data_to_string(
        const UssObstacles *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UssObstaclesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UssObstaclesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UssObstaclesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UssObstaclesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UssObstaclesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UssObstacles ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *UssObstaclesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UssObstaclesPlugin_new(void);

    NDDSUSERDllExport extern void
    UssObstaclesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UssObstaclesPlugin_939312938_h */

