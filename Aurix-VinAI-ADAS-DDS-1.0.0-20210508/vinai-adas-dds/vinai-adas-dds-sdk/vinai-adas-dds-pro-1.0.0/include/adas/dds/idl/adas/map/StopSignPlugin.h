

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StopSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StopSignPlugin_698756267_h
#define StopSignPlugin_698756267_h

#include "StopSign.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"
#include "../common/Point3Plugin.h"
#include "../common/Vector3fPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define StopSignPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StopSignPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StopSignPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StopSignPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StopSignPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StopSign*
    StopSignPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StopSign*
    StopSignPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StopSign*
    StopSignPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StopSignPluginSupport_copy_data(
        StopSign *out,
        const StopSign *in);

    NDDSUSERDllExport extern void 
    StopSignPluginSupport_destroy_data_w_params(
        StopSign *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StopSignPluginSupport_destroy_data_ex(
        StopSign *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StopSignPluginSupport_destroy_data(
        StopSign *sample);

    NDDSUSERDllExport extern void 
    StopSignPluginSupport_print_data(
        const StopSign *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    StopSignPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    StopSignPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    StopSignPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    StopSignPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    StopSignPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        StopSign *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    StopSignPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StopSign *out,
        const StopSign *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StopSignPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StopSign *sample); 

    NDDSUSERDllExport extern RTIBool
    StopSignPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StopSign *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    StopSignPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        StopSign **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    StopSignPlugin_deserialize_from_cdr_buffer(
        StopSign *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StopSignPlugin_data_to_string(
        const StopSign *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StopSignPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StopSignPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StopSignPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StopSignPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StopSignPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StopSign ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *StopSignPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    StopSignPlugin_new(void);

    NDDSUSERDllExport extern void
    StopSignPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StopSignPlugin_698756267_h */

