

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CornerRadarRawObjects.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CornerRadarRawObjectsPlugin_1845616555_h
#define CornerRadarRawObjectsPlugin_1845616555_h

#include "CornerRadarRawObjects.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "CornerRadarRawObjectPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define CornerRadarRawObjectsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CornerRadarRawObjectsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CornerRadarRawObjectsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CornerRadarRawObjectsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CornerRadarRawObjectsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CornerRadarRawObjects*
    CornerRadarRawObjectsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CornerRadarRawObjects*
    CornerRadarRawObjectsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CornerRadarRawObjects*
    CornerRadarRawObjectsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectsPluginSupport_copy_data(
        CornerRadarRawObjects *out,
        const CornerRadarRawObjects *in);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPluginSupport_destroy_data_w_params(
        CornerRadarRawObjects *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPluginSupport_destroy_data_ex(
        CornerRadarRawObjects *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPluginSupport_destroy_data(
        CornerRadarRawObjects *sample);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPluginSupport_print_data(
        const CornerRadarRawObjects *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CornerRadarRawObjectsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CornerRadarRawObjectsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CornerRadarRawObjectsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CornerRadarRawObjectsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObjects *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObjects *out,
        const CornerRadarRawObjects *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CornerRadarRawObjects *sample); 

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CornerRadarRawObjects *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObjects **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CornerRadarRawObjectsPlugin_deserialize_from_cdr_buffer(
        CornerRadarRawObjects *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CornerRadarRawObjectsPlugin_data_to_string(
        const CornerRadarRawObjects *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CornerRadarRawObjectsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CornerRadarRawObjectsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CornerRadarRawObjectsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CornerRadarRawObjects ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CornerRadarRawObjectsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CornerRadarRawObjectsPlugin_new(void);

    NDDSUSERDllExport extern void
    CornerRadarRawObjectsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CornerRadarRawObjectsPlugin_1845616555_h */

