

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeObstaclesPlugin_538812926_h
#define EyeObstaclesPlugin_538812926_h

#include "EyeObstacles.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "EyeObstaclePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define EyeqObstaclesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EyeqObstaclesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EyeqObstaclesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EyeqObstaclesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EyeqObstaclesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EyeqObstacles*
    EyeqObstaclesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EyeqObstacles*
    EyeqObstaclesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EyeqObstacles*
    EyeqObstaclesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclesPluginSupport_copy_data(
        EyeqObstacles *out,
        const EyeqObstacles *in);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPluginSupport_destroy_data_w_params(
        EyeqObstacles *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPluginSupport_destroy_data_ex(
        EyeqObstacles *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPluginSupport_destroy_data(
        EyeqObstacles *sample);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPluginSupport_print_data(
        const EyeqObstacles *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    EyeqObstaclesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    EyeqObstaclesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    EyeqObstaclesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    EyeqObstaclesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacles *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacles *out,
        const EyeqObstacles *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EyeqObstacles *sample); 

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EyeqObstacles *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacles **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    EyeqObstaclesPlugin_deserialize_from_cdr_buffer(
        EyeqObstacles *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EyeqObstaclesPlugin_data_to_string(
        const EyeqObstacles *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EyeqObstaclesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EyeqObstaclesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EyeqObstaclesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EyeqObstacles ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *EyeqObstaclesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    EyeqObstaclesPlugin_new(void);

    NDDSUSERDllExport extern void
    EyeqObstaclesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EyeObstaclesPlugin_538812926_h */

