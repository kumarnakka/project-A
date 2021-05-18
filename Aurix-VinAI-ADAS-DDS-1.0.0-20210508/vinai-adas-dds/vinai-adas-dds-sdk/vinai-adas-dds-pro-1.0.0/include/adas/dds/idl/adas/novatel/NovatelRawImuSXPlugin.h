

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelRawImuSX.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelRawImuSXPlugin_1328572590_h
#define NovatelRawImuSXPlugin_1328572590_h

#include "NovatelRawImuSX.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "NovatelShortHeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define NovatelRawImuSXPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NovatelRawImuSXPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NovatelRawImuSXPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NovatelRawImuSXPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NovatelRawImuSXPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NovatelRawImuSX*
    NovatelRawImuSXPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NovatelRawImuSX*
    NovatelRawImuSXPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelRawImuSX*
    NovatelRawImuSXPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NovatelRawImuSXPluginSupport_copy_data(
        NovatelRawImuSX *out,
        const NovatelRawImuSX *in);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPluginSupport_destroy_data_w_params(
        NovatelRawImuSX *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPluginSupport_destroy_data_ex(
        NovatelRawImuSX *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPluginSupport_destroy_data(
        NovatelRawImuSX *sample);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPluginSupport_print_data(
        const NovatelRawImuSX *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    NovatelRawImuSXPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    NovatelRawImuSXPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    NovatelRawImuSXPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    NovatelRawImuSXPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelRawImuSX *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    NovatelRawImuSXPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelRawImuSX *out,
        const NovatelRawImuSX *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    NovatelRawImuSXPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const NovatelRawImuSX *sample); 

    NDDSUSERDllExport extern RTIBool
    NovatelRawImuSXPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const NovatelRawImuSX *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    NovatelRawImuSXPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        NovatelRawImuSX **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    NovatelRawImuSXPlugin_deserialize_from_cdr_buffer(
        NovatelRawImuSX *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    NovatelRawImuSXPlugin_data_to_string(
        const NovatelRawImuSX *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    NovatelRawImuSXPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NovatelRawImuSXPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NovatelRawImuSXPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NovatelRawImuSXPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    NovatelRawImuSXPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelRawImuSX ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *NovatelRawImuSXPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    NovatelRawImuSXPlugin_new(void);

    NDDSUSERDllExport extern void
    NovatelRawImuSXPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelRawImuSXPlugin_1328572590_h */

