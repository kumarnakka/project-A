

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstaclePathPredictions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstaclePathPredictionsPlugin_1993250772_h
#define ObstaclePathPredictionsPlugin_1993250772_h

#include "ObstaclePathPredictions.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "ObstaclePathPredictionPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define ObstaclePathPredictionsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ObstaclePathPredictionsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ObstaclePathPredictionsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ObstaclePathPredictionsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ObstaclePathPredictionsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ObstaclePathPredictions*
    ObstaclePathPredictionsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ObstaclePathPredictions*
    ObstaclePathPredictionsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ObstaclePathPredictions*
    ObstaclePathPredictionsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePathPredictionsPluginSupport_copy_data(
        ObstaclePathPredictions *out,
        const ObstaclePathPredictions *in);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPluginSupport_destroy_data_w_params(
        ObstaclePathPredictions *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPluginSupport_destroy_data_ex(
        ObstaclePathPredictions *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPluginSupport_destroy_data(
        ObstaclePathPredictions *sample);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPluginSupport_print_data(
        const ObstaclePathPredictions *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ObstaclePathPredictionsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ObstaclePathPredictionsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ObstaclePathPredictionsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ObstaclePathPredictionsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObstaclePathPredictions *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ObstaclePathPredictionsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ObstaclePathPredictions *out,
        const ObstaclePathPredictions *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ObstaclePathPredictionsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ObstaclePathPredictions *sample); 

    NDDSUSERDllExport extern RTIBool
    ObstaclePathPredictionsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ObstaclePathPredictions *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePathPredictionsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ObstaclePathPredictions **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ObstaclePathPredictionsPlugin_deserialize_from_cdr_buffer(
        ObstaclePathPredictions *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ObstaclePathPredictionsPlugin_data_to_string(
        const ObstaclePathPredictions *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ObstaclePathPredictionsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ObstaclePathPredictionsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ObstaclePathPredictionsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ObstaclePathPredictionsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ObstaclePathPredictionsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ObstaclePathPredictions ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ObstaclePathPredictionsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ObstaclePathPredictionsPlugin_new(void);

    NDDSUSERDllExport extern void
    ObstaclePathPredictionsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObstaclePathPredictionsPlugin_1993250772_h */

