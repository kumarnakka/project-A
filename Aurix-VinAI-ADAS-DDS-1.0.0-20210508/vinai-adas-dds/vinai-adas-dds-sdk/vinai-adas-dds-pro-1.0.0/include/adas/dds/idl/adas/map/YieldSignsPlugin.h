

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YieldSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef YieldSignsPlugin_1483209489_h
#define YieldSignsPlugin_1483209489_h

#include "YieldSigns.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "YieldSignPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define YieldSignsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define YieldSignsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define YieldSignsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define YieldSignsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define YieldSignsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern YieldSigns*
    YieldSignsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern YieldSigns*
    YieldSignsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern YieldSigns*
    YieldSignsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    YieldSignsPluginSupport_copy_data(
        YieldSigns *out,
        const YieldSigns *in);

    NDDSUSERDllExport extern void 
    YieldSignsPluginSupport_destroy_data_w_params(
        YieldSigns *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    YieldSignsPluginSupport_destroy_data_ex(
        YieldSigns *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    YieldSignsPluginSupport_destroy_data(
        YieldSigns *sample);

    NDDSUSERDllExport extern void 
    YieldSignsPluginSupport_print_data(
        const YieldSigns *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    YieldSignsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    YieldSignsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    YieldSignsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    YieldSignsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    YieldSignsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        YieldSigns *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    YieldSignsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        YieldSigns *out,
        const YieldSigns *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    YieldSignsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const YieldSigns *sample); 

    NDDSUSERDllExport extern RTIBool
    YieldSignsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const YieldSigns *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    YieldSignsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        YieldSigns **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    YieldSignsPlugin_deserialize_from_cdr_buffer(
        YieldSigns *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    YieldSignsPlugin_data_to_string(
        const YieldSigns *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    YieldSignsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    YieldSignsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    YieldSignsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    YieldSignsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    YieldSignsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        YieldSigns ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *YieldSignsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    YieldSignsPlugin_new(void);

    NDDSUSERDllExport extern void
    YieldSignsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* YieldSignsPlugin_1483209489_h */

