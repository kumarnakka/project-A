

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VehicleStatePlugin_157436726_h
#define VehicleStatePlugin_157436726_h

#include "VehicleState.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "TwistPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define VehicleStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define VehicleStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define VehicleStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define VehicleStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define VehicleStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern VehicleState*
    VehicleStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern VehicleState*
    VehicleStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern VehicleState*
    VehicleStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    VehicleStatePluginSupport_copy_data(
        VehicleState *out,
        const VehicleState *in);

    NDDSUSERDllExport extern void 
    VehicleStatePluginSupport_destroy_data_w_params(
        VehicleState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    VehicleStatePluginSupport_destroy_data_ex(
        VehicleState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    VehicleStatePluginSupport_destroy_data(
        VehicleState *sample);

    NDDSUSERDllExport extern void 
    VehicleStatePluginSupport_print_data(
        const VehicleState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    VehicleStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    VehicleStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    VehicleStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    VehicleStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    VehicleStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        VehicleState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    VehicleStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        VehicleState *out,
        const VehicleState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    VehicleStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const VehicleState *sample); 

    NDDSUSERDllExport extern RTIBool
    VehicleStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const VehicleState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    VehicleStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        VehicleState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    VehicleStatePlugin_deserialize_from_cdr_buffer(
        VehicleState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    VehicleStatePlugin_data_to_string(
        const VehicleState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    VehicleStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    VehicleStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    VehicleStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    VehicleStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    VehicleStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        VehicleState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *VehicleStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    VehicleStatePlugin_new(void);

    NDDSUSERDllExport extern void
    VehicleStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VehicleStatePlugin_157436726_h */

