

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YieldSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef YieldSignPlugin_508343277_h
#define YieldSignPlugin_508343277_h

#include "YieldSign.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../common/Point3Plugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define YieldSignPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define YieldSignPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define YieldSignPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define YieldSignPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define YieldSignPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern YieldSign*
    YieldSignPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern YieldSign*
    YieldSignPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern YieldSign*
    YieldSignPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    YieldSignPluginSupport_copy_data(
        YieldSign *out,
        const YieldSign *in);

    NDDSUSERDllExport extern void 
    YieldSignPluginSupport_destroy_data_w_params(
        YieldSign *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    YieldSignPluginSupport_destroy_data_ex(
        YieldSign *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    YieldSignPluginSupport_destroy_data(
        YieldSign *sample);

    NDDSUSERDllExport extern void 
    YieldSignPluginSupport_print_data(
        const YieldSign *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    YieldSignPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    YieldSignPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    YieldSignPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    YieldSignPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    YieldSignPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        YieldSign *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    YieldSignPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        YieldSign *out,
        const YieldSign *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    YieldSignPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const YieldSign *sample); 

    NDDSUSERDllExport extern RTIBool
    YieldSignPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const YieldSign *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    YieldSignPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        YieldSign **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    YieldSignPlugin_deserialize_from_cdr_buffer(
        YieldSign *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    YieldSignPlugin_data_to_string(
        const YieldSign *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    YieldSignPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    YieldSignPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    YieldSignPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    YieldSignPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    YieldSignPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        YieldSign ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *YieldSignPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    YieldSignPlugin_new(void);

    NDDSUSERDllExport extern void
    YieldSignPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* YieldSignPlugin_508343277_h */

