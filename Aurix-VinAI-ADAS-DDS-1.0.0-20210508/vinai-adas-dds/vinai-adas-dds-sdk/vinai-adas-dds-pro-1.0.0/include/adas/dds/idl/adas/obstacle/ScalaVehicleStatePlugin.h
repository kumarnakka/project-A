

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaVehicleState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScalaVehicleStatePlugin_188926002_h
#define ScalaVehicleStatePlugin_188926002_h

#include "ScalaVehicleState.h"

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

    #define ScalaVehicleStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ScalaVehicleStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ScalaVehicleStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ScalaVehicleStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ScalaVehicleStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ScalaVehicleState*
    ScalaVehicleStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ScalaVehicleState*
    ScalaVehicleStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ScalaVehicleState*
    ScalaVehicleStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ScalaVehicleStatePluginSupport_copy_data(
        ScalaVehicleState *out,
        const ScalaVehicleState *in);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePluginSupport_destroy_data_w_params(
        ScalaVehicleState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePluginSupport_destroy_data_ex(
        ScalaVehicleState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePluginSupport_destroy_data(
        ScalaVehicleState *sample);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePluginSupport_print_data(
        const ScalaVehicleState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ScalaVehicleStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ScalaVehicleStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ScalaVehicleStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ScalaVehicleStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ScalaVehicleState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ScalaVehicleStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ScalaVehicleState *out,
        const ScalaVehicleState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ScalaVehicleStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ScalaVehicleState *sample); 

    NDDSUSERDllExport extern RTIBool
    ScalaVehicleStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ScalaVehicleState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ScalaVehicleStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ScalaVehicleState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ScalaVehicleStatePlugin_deserialize_from_cdr_buffer(
        ScalaVehicleState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ScalaVehicleStatePlugin_data_to_string(
        const ScalaVehicleState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ScalaVehicleStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ScalaVehicleStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ScalaVehicleStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ScalaVehicleStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ScalaVehicleStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ScalaVehicleState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ScalaVehicleStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ScalaVehicleStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ScalaVehicleStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ScalaVehicleStatePlugin_188926002_h */

