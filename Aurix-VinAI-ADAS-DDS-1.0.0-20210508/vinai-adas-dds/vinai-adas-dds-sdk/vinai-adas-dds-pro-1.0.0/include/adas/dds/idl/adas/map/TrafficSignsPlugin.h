

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSignsPlugin_132551522_h
#define TrafficSignsPlugin_132551522_h

#include "TrafficSigns.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "TrafficSignPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define TrafficSignsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrafficSignsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrafficSignsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrafficSignsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrafficSignsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TrafficSigns*
    TrafficSignsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TrafficSigns*
    TrafficSignsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TrafficSigns*
    TrafficSignsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignsPluginSupport_copy_data(
        TrafficSigns *out,
        const TrafficSigns *in);

    NDDSUSERDllExport extern void 
    TrafficSignsPluginSupport_destroy_data_w_params(
        TrafficSigns *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrafficSignsPluginSupport_destroy_data_ex(
        TrafficSigns *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrafficSignsPluginSupport_destroy_data(
        TrafficSigns *sample);

    NDDSUSERDllExport extern void 
    TrafficSignsPluginSupport_print_data(
        const TrafficSigns *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrafficSignsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrafficSignsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrafficSignsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrafficSignsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrafficSignsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSigns *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrafficSignsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSigns *out,
        const TrafficSigns *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrafficSignsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TrafficSigns *sample); 

    NDDSUSERDllExport extern RTIBool
    TrafficSignsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TrafficSigns *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSigns **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrafficSignsPlugin_deserialize_from_cdr_buffer(
        TrafficSigns *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrafficSignsPlugin_data_to_string(
        const TrafficSigns *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrafficSignsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrafficSignsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrafficSignsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrafficSignsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TrafficSigns ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrafficSignsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrafficSignsPlugin_new(void);

    NDDSUSERDllExport extern void
    TrafficSignsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSignsPlugin_132551522_h */

