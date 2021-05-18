

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficLight.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficLightPlugin_536123709_h
#define TrafficLightPlugin_536123709_h

#include "TrafficLight.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "StopSignPlugin.h"
#include "../common/Point2Plugin.h"
#include "../common/Point3Plugin.h"
#include "LightRegionPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define TrafficLightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrafficLightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrafficLightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrafficLightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrafficLightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TrafficLight*
    TrafficLightPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TrafficLight*
    TrafficLightPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficLight*
    TrafficLightPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrafficLightPluginSupport_copy_data(
        TrafficLight *out,
        const TrafficLight *in);

    NDDSUSERDllExport extern void 
    TrafficLightPluginSupport_destroy_data_w_params(
        TrafficLight *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrafficLightPluginSupport_destroy_data_ex(
        TrafficLight *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficLightPluginSupport_destroy_data(
        TrafficLight *sample);

    NDDSUSERDllExport extern void 
    TrafficLightPluginSupport_print_data(
        const TrafficLight *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrafficLightPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrafficLightPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrafficLightPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrafficLightPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrafficLightPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficLight *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrafficLightPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficLight *out,
        const TrafficLight *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrafficLightPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TrafficLight *sample); 

    NDDSUSERDllExport extern RTIBool
    TrafficLightPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TrafficLight *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrafficLightPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TrafficLight **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrafficLightPlugin_deserialize_from_cdr_buffer(
        TrafficLight *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrafficLightPlugin_data_to_string(
        const TrafficLight *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrafficLightPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrafficLightPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrafficLightPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrafficLightPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrafficLightPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficLight ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrafficLightPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrafficLightPlugin_new(void);

    NDDSUSERDllExport extern void
    TrafficLightPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficLightPlugin_536123709_h */

