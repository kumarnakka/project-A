

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpGpsPacket.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpGpsPacketPlugin_1734880081_h
#define VlpGpsPacketPlugin_1734880081_h

#include "VlpGpsPacket.h"

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

    #define VlpGpsPacketPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define VlpGpsPacketPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define VlpGpsPacketPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define VlpGpsPacketPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define VlpGpsPacketPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern VlpGpsPacket*
    VlpGpsPacketPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern VlpGpsPacket*
    VlpGpsPacketPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern VlpGpsPacket*
    VlpGpsPacketPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    VlpGpsPacketPluginSupport_copy_data(
        VlpGpsPacket *out,
        const VlpGpsPacket *in);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPluginSupport_destroy_data_w_params(
        VlpGpsPacket *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPluginSupport_destroy_data_ex(
        VlpGpsPacket *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPluginSupport_destroy_data(
        VlpGpsPacket *sample);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPluginSupport_print_data(
        const VlpGpsPacket *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    VlpGpsPacketPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    VlpGpsPacketPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    VlpGpsPacketPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    VlpGpsPacketPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpGpsPacket *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    VlpGpsPacketPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpGpsPacket *out,
        const VlpGpsPacket *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    VlpGpsPacketPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const VlpGpsPacket *sample); 

    NDDSUSERDllExport extern RTIBool
    VlpGpsPacketPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const VlpGpsPacket *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    VlpGpsPacketPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        VlpGpsPacket **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    VlpGpsPacketPlugin_deserialize_from_cdr_buffer(
        VlpGpsPacket *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    VlpGpsPacketPlugin_data_to_string(
        const VlpGpsPacket *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    VlpGpsPacketPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    VlpGpsPacketPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    VlpGpsPacketPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    VlpGpsPacketPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    VlpGpsPacketPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        VlpGpsPacket ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *VlpGpsPacketPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    VlpGpsPacketPlugin_new(void);

    NDDSUSERDllExport extern void
    VlpGpsPacketPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VlpGpsPacketPlugin_1734880081_h */

