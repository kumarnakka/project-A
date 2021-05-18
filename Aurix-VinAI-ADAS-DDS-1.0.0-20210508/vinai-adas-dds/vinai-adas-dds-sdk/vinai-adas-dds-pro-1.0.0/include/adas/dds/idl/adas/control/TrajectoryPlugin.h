

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoryPlugin_1723163450_h
#define TrajectoryPlugin_1723163450_h

#include "Trajectory.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "TrajectoryPointPlugin.h"
#include "TrajectoryCoeffPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define TrajectoryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TrajectoryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TrajectoryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TrajectoryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TrajectoryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Trajectory*
    TrajectoryPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Trajectory*
    TrajectoryPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Trajectory*
    TrajectoryPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TrajectoryPluginSupport_copy_data(
        Trajectory *out,
        const Trajectory *in);

    NDDSUSERDllExport extern void 
    TrajectoryPluginSupport_destroy_data_w_params(
        Trajectory *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TrajectoryPluginSupport_destroy_data_ex(
        Trajectory *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TrajectoryPluginSupport_destroy_data(
        Trajectory *sample);

    NDDSUSERDllExport extern void 
    TrajectoryPluginSupport_print_data(
        const Trajectory *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TrajectoryPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TrajectoryPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TrajectoryPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TrajectoryPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TrajectoryPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Trajectory *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TrajectoryPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Trajectory *out,
        const Trajectory *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TrajectoryPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Trajectory *sample); 

    NDDSUSERDllExport extern RTIBool
    TrajectoryPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Trajectory *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TrajectoryPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Trajectory **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TrajectoryPlugin_deserialize_from_cdr_buffer(
        Trajectory *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TrajectoryPlugin_data_to_string(
        const Trajectory *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TrajectoryPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TrajectoryPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TrajectoryPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TrajectoryPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TrajectoryPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Trajectory ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TrajectoryPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TrajectoryPlugin_new(void);

    NDDSUSERDllExport extern void
    TrajectoryPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrajectoryPlugin_1723163450_h */

