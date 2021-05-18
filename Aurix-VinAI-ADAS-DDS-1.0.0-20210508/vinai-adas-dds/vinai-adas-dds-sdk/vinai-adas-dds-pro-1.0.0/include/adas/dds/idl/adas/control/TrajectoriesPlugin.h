

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectories.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoriesPlugin_1630550884_h
#define TrajectoriesPlugin_1630550884_h

#include "Trajectories.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "TrajectoryPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define TrajectoriesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrajectoriesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrajectoriesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrajectoriesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrajectoriesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Trajectories*
    TrajectoriesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Trajectories*
    TrajectoriesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Trajectories*
    TrajectoriesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrajectoriesPluginSupport_copy_data(
        Trajectories *out,
        const Trajectories *in);

    NDDSUSERDllExport extern void 
    TrajectoriesPluginSupport_destroy_data_w_params(
        Trajectories *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrajectoriesPluginSupport_destroy_data_ex(
        Trajectories *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrajectoriesPluginSupport_destroy_data(
        Trajectories *sample);

    NDDSUSERDllExport extern void 
    TrajectoriesPluginSupport_print_data(
        const Trajectories *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrajectoriesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrajectoriesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrajectoriesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrajectoriesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrajectoriesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Trajectories *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrajectoriesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Trajectories *out,
        const Trajectories *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrajectoriesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Trajectories *sample); 

    NDDSUSERDllExport extern RTIBool
    TrajectoriesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Trajectories *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrajectoriesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Trajectories **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrajectoriesPlugin_deserialize_from_cdr_buffer(
        Trajectories *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrajectoriesPlugin_data_to_string(
        const Trajectories *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrajectoriesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrajectoriesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrajectoriesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrajectoriesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrajectoriesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Trajectories ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrajectoriesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrajectoriesPlugin_new(void);

    NDDSUSERDllExport extern void
    TrajectoriesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrajectoriesPlugin_1630550884_h */

