

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pedestrian.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PedestrianPlugin_83966814_h
#define PedestrianPlugin_83966814_h

#include "Pedestrian.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../control/TwistPlugin.h"
#include "../../ros_ported/std/HeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define PedestrianPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PedestrianPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PedestrianPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PedestrianPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PedestrianPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Pedestrian*
    PedestrianPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Pedestrian*
    PedestrianPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Pedestrian*
    PedestrianPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PedestrianPluginSupport_copy_data(
        Pedestrian *out,
        const Pedestrian *in);

    NDDSUSERDllExport extern void 
    PedestrianPluginSupport_destroy_data_w_params(
        Pedestrian *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PedestrianPluginSupport_destroy_data_ex(
        Pedestrian *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PedestrianPluginSupport_destroy_data(
        Pedestrian *sample);

    NDDSUSERDllExport extern void 
    PedestrianPluginSupport_print_data(
        const Pedestrian *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PedestrianPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PedestrianPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PedestrianPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PedestrianPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PedestrianPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pedestrian *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PedestrianPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pedestrian *out,
        const Pedestrian *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PedestrianPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Pedestrian *sample); 

    NDDSUSERDllExport extern RTIBool
    PedestrianPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Pedestrian *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    PedestrianPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Pedestrian **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PedestrianPlugin_deserialize_from_cdr_buffer(
        Pedestrian *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PedestrianPlugin_data_to_string(
        const Pedestrian *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PedestrianPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PedestrianPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PedestrianPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PedestrianPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PedestrianPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Pedestrian ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *PedestrianPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PedestrianPlugin_new(void);

    NDDSUSERDllExport extern void
    PedestrianPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PedestrianPlugin_83966814_h */

