

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstaclesPlugin_2119945930_h
#define ObstaclesPlugin_2119945930_h

#include "Obstacles.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "ObstaclePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define ObstaclesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ObstaclesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ObstaclesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ObstaclesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ObstaclesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Obstacles*
    ObstaclesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Obstacles*
    ObstaclesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Obstacles*
    ObstaclesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ObstaclesPluginSupport_copy_data(
        Obstacles *out,
        const Obstacles *in);

    NDDSUSERDllExport extern void 
    ObstaclesPluginSupport_destroy_data_w_params(
        Obstacles *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ObstaclesPluginSupport_destroy_data_ex(
        Obstacles *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstaclesPluginSupport_destroy_data(
        Obstacles *sample);

    NDDSUSERDllExport extern void 
    ObstaclesPluginSupport_print_data(
        const Obstacles *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ObstaclesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ObstaclesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ObstaclesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ObstaclesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ObstaclesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ObstaclesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles *out,
        const Obstacles *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ObstaclesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Obstacles *sample); 

    NDDSUSERDllExport extern RTIBool
    ObstaclesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Obstacles *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ObstaclesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ObstaclesPlugin_deserialize_from_cdr_buffer(
        Obstacles *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ObstaclesPlugin_data_to_string(
        const Obstacles *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ObstaclesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ObstaclesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ObstaclesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ObstaclesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ObstaclesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ObstaclesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ObstaclesPlugin_new(void);

    NDDSUSERDllExport extern void
    ObstaclesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObstaclesPlugin_2119945930_h */

