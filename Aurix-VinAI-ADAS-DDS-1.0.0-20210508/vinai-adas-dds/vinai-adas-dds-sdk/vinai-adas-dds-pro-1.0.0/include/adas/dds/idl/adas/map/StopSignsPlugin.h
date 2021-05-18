

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StopSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StopSignsPlugin_124622791_h
#define StopSignsPlugin_124622791_h

#include "StopSigns.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "StopSignPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define StopSignsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StopSignsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StopSignsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StopSignsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StopSignsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StopSigns*
    StopSignsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StopSigns*
    StopSignsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StopSigns*
    StopSignsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StopSignsPluginSupport_copy_data(
        StopSigns *out,
        const StopSigns *in);

    NDDSUSERDllExport extern void 
    StopSignsPluginSupport_destroy_data_w_params(
        StopSigns *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StopSignsPluginSupport_destroy_data_ex(
        StopSigns *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StopSignsPluginSupport_destroy_data(
        StopSigns *sample);

    NDDSUSERDllExport extern void 
    StopSignsPluginSupport_print_data(
        const StopSigns *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    StopSignsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    StopSignsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    StopSignsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    StopSignsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    StopSignsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        StopSigns *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    StopSignsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StopSigns *out,
        const StopSigns *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StopSignsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StopSigns *sample); 

    NDDSUSERDllExport extern RTIBool
    StopSignsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StopSigns *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    StopSignsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        StopSigns **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    StopSignsPlugin_deserialize_from_cdr_buffer(
        StopSigns *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StopSignsPlugin_data_to_string(
        const StopSigns *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StopSignsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StopSignsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StopSignsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StopSignsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StopSignsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StopSigns ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *StopSignsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    StopSignsPlugin_new(void);

    NDDSUSERDllExport extern void
    StopSignsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StopSignsPlugin_124622791_h */

