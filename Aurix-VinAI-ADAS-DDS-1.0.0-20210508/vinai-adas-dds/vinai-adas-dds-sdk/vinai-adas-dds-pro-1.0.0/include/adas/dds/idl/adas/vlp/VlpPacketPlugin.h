

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpPacket.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpPacketPlugin_50810159_h
#define VlpPacketPlugin_50810159_h

#include "VlpPacket.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "VlpBlockPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define VlpPacketPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define VlpPacketPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define VlpPacketPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define VlpPacketPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define VlpPacketPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern VlpPacket*
    VlpPacketPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern VlpPacket*
    VlpPacketPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern VlpPacket*
    VlpPacketPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    VlpPacketPluginSupport_copy_data(
        VlpPacket *out,
        const VlpPacket *in);

    NDDSUSERDllExport extern void 
    VlpPacketPluginSupport_destroy_data_w_params(
        VlpPacket *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    VlpPacketPluginSupport_destroy_data_ex(
        VlpPacket *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    VlpPacketPluginSupport_destroy_data(
        VlpPacket *sample);

    NDDSUSERDllExport extern void 
    VlpPacketPluginSupport_print_data(
        const VlpPacket *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    VlpPacketPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    VlpPacketPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    VlpPacketPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    VlpPacketPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    VlpPacketPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpPacket *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    VlpPacketPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        VlpPacket *out,
        const VlpPacket *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    VlpPacketPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const VlpPacket *sample); 

    NDDSUSERDllExport extern RTIBool
    VlpPacketPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const VlpPacket *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    VlpPacketPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        VlpPacket **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    VlpPacketPlugin_deserialize_from_cdr_buffer(
        VlpPacket *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    VlpPacketPlugin_data_to_string(
        const VlpPacket *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    VlpPacketPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    VlpPacketPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    VlpPacketPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    VlpPacketPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    VlpPacketPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        VlpPacket ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *VlpPacketPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    VlpPacketPlugin_new(void);

    NDDSUSERDllExport extern void
    VlpPacketPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VlpPacketPlugin_50810159_h */

