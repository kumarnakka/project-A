

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlMonitor.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ControlMonitorPlugin_267580655_h
#define ControlMonitorPlugin_267580655_h

#include "ControlMonitor.h"

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

    #define ControlMonitorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlMonitorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlMonitorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlMonitorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlMonitorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlMonitor*
    ControlMonitorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlMonitor*
    ControlMonitorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlMonitor*
    ControlMonitorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlMonitorPluginSupport_copy_data(
        ControlMonitor *out,
        const ControlMonitor *in);

    NDDSUSERDllExport extern void 
    ControlMonitorPluginSupport_destroy_data_w_params(
        ControlMonitor *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlMonitorPluginSupport_destroy_data_ex(
        ControlMonitor *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlMonitorPluginSupport_destroy_data(
        ControlMonitor *sample);

    NDDSUSERDllExport extern void 
    ControlMonitorPluginSupport_print_data(
        const ControlMonitor *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ControlMonitorPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ControlMonitorPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ControlMonitorPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ControlMonitorPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ControlMonitorPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlMonitor *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ControlMonitorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlMonitor *out,
        const ControlMonitor *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlMonitorPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlMonitor *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlMonitorPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlMonitor *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ControlMonitorPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ControlMonitor **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ControlMonitorPlugin_deserialize_from_cdr_buffer(
        ControlMonitor *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlMonitorPlugin_data_to_string(
        const ControlMonitor *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlMonitorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlMonitorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlMonitorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlMonitorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlMonitorPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlMonitor ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ControlMonitorPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ControlMonitorPlugin_new(void);

    NDDSUSERDllExport extern void
    ControlMonitorPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlMonitorPlugin_267580655_h */

