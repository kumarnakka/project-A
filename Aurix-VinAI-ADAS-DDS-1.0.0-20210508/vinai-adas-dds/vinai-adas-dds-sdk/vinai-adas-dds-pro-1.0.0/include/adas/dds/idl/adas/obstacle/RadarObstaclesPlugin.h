

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadarObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RadarObstaclesPlugin_1017835705_h
#define RadarObstaclesPlugin_1017835705_h

#include "RadarObstacles.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "RadarObstaclePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define RadarObstaclesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RadarObstaclesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RadarObstaclesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RadarObstaclesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RadarObstaclesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RadarObstacles*
    RadarObstaclesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RadarObstacles*
    RadarObstaclesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RadarObstacles*
    RadarObstaclesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclesPluginSupport_copy_data(
        RadarObstacles *out,
        const RadarObstacles *in);

    NDDSUSERDllExport extern void 
    RadarObstaclesPluginSupport_destroy_data_w_params(
        RadarObstacles *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RadarObstaclesPluginSupport_destroy_data_ex(
        RadarObstacles *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RadarObstaclesPluginSupport_destroy_data(
        RadarObstacles *sample);

    NDDSUSERDllExport extern void 
    RadarObstaclesPluginSupport_print_data(
        const RadarObstacles *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RadarObstaclesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RadarObstaclesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RadarObstaclesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RadarObstaclesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RadarObstaclesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacles *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacles *out,
        const RadarObstacles *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RadarObstaclesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RadarObstacles *sample); 

    NDDSUSERDllExport extern RTIBool
    RadarObstaclesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RadarObstacles *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacles **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RadarObstaclesPlugin_deserialize_from_cdr_buffer(
        RadarObstacles *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RadarObstaclesPlugin_data_to_string(
        const RadarObstacles *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RadarObstaclesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RadarObstaclesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RadarObstaclesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RadarObstacles ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RadarObstaclesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RadarObstaclesPlugin_new(void);

    NDDSUSERDllExport extern void
    RadarObstaclesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RadarObstaclesPlugin_1017835705_h */

