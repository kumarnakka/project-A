

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneIdPlugin_1216626773_h
#define LaneIdPlugin_1216626773_h

#include "LaneId.h"

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

    #define LaneIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LaneIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LaneIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LaneIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LaneIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LaneId*
    LaneIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LaneId*
    LaneIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneId*
    LaneIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LaneIdPluginSupport_copy_data(
        LaneId *out,
        const LaneId *in);

    NDDSUSERDllExport extern void 
    LaneIdPluginSupport_destroy_data_w_params(
        LaneId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LaneIdPluginSupport_destroy_data_ex(
        LaneId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneIdPluginSupport_destroy_data(
        LaneId *sample);

    NDDSUSERDllExport extern void 
    LaneIdPluginSupport_print_data(
        const LaneId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LaneIdPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LaneIdPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LaneIdPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LaneIdPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LaneIdPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneId *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LaneIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneId *out,
        const LaneId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LaneIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LaneId *sample); 

    NDDSUSERDllExport extern RTIBool
    LaneIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LaneId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LaneIdPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LaneId **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LaneIdPlugin_deserialize_from_cdr_buffer(
        LaneId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LaneIdPlugin_data_to_string(
        const LaneId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LaneIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LaneIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LaneIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LaneIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LaneIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LaneIdPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LaneIdPlugin_new(void);

    NDDSUSERDllExport extern void
    LaneIdPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneIdPlugin_1216626773_h */

