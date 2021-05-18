

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SampledLinePlugin_159504655_h
#define SampledLinePlugin_159504655_h

#include "SampledLine.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "LineHeaderPlugin.h"
#include "../../ros_ported/geometry/PathPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define SampledLinePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SampledLinePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SampledLinePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SampledLinePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SampledLinePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SampledLine*
    SampledLinePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SampledLine*
    SampledLinePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SampledLine*
    SampledLinePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SampledLinePluginSupport_copy_data(
        SampledLine *out,
        const SampledLine *in);

    NDDSUSERDllExport extern void 
    SampledLinePluginSupport_destroy_data_w_params(
        SampledLine *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SampledLinePluginSupport_destroy_data_ex(
        SampledLine *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SampledLinePluginSupport_destroy_data(
        SampledLine *sample);

    NDDSUSERDllExport extern void 
    SampledLinePluginSupport_print_data(
        const SampledLine *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SampledLinePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SampledLinePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SampledLinePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SampledLinePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SampledLinePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SampledLine *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SampledLinePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SampledLine *out,
        const SampledLine *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SampledLinePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SampledLine *sample); 

    NDDSUSERDllExport extern RTIBool
    SampledLinePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const SampledLine *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    SampledLinePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SampledLine **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SampledLinePlugin_deserialize_from_cdr_buffer(
        SampledLine *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    SampledLinePlugin_data_to_string(
        const SampledLine *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    SampledLinePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SampledLinePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SampledLinePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SampledLinePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SampledLinePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SampledLine ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *SampledLinePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SampledLinePlugin_new(void);

    NDDSUSERDllExport extern void
    SampledLinePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SampledLinePlugin_159504655_h */

