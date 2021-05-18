

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointXYZRTHI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointXYZRTHIPlugin_1834259240_h
#define PointXYZRTHIPlugin_1834259240_h

#include "PointXYZRTHI.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define PointXYZRTHIPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PointXYZRTHIPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PointXYZRTHIPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PointXYZRTHIPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PointXYZRTHIPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PointXYZRTHI*
    PointXYZRTHIPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PointXYZRTHI*
    PointXYZRTHIPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PointXYZRTHI*
    PointXYZRTHIPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PointXYZRTHIPluginSupport_copy_data(
        PointXYZRTHI *out,
        const PointXYZRTHI *in);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPluginSupport_destroy_data_w_params(
        PointXYZRTHI *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPluginSupport_destroy_data_ex(
        PointXYZRTHI *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPluginSupport_destroy_data(
        PointXYZRTHI *sample);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPluginSupport_print_data(
        const PointXYZRTHI *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PointXYZRTHIPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PointXYZRTHIPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PointXYZRTHIPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PointXYZRTHIPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PointXYZRTHI *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PointXYZRTHIPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PointXYZRTHI *out,
        const PointXYZRTHI *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PointXYZRTHIPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PointXYZRTHI *sample); 

    NDDSUSERDllExport extern RTIBool
    PointXYZRTHIPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PointXYZRTHI *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    PointXYZRTHIPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        PointXYZRTHI **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PointXYZRTHIPlugin_deserialize_from_cdr_buffer(
        PointXYZRTHI *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PointXYZRTHIPlugin_data_to_string(
        const PointXYZRTHI *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PointXYZRTHIPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PointXYZRTHIPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PointXYZRTHIPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PointXYZRTHIPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PointXYZRTHIPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PointXYZRTHI ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *PointXYZRTHIPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PointXYZRTHIPlugin_new(void);

    NDDSUSERDllExport extern void
    PointXYZRTHIPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PointXYZRTHIPlugin_1834259240_h */

