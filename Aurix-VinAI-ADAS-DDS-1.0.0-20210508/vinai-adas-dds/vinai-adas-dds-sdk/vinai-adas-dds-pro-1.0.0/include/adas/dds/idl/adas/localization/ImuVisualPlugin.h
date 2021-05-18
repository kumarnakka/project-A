

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImuVisual.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ImuVisualPlugin_1171114558_h
#define ImuVisualPlugin_1171114558_h

#include "ImuVisual.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../../ros_ported/geometry/PointPlugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define ImuVisualPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ImuVisualPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ImuVisualPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ImuVisualPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ImuVisualPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ImuVisual*
    ImuVisualPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ImuVisual*
    ImuVisualPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ImuVisual*
    ImuVisualPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ImuVisualPluginSupport_copy_data(
        ImuVisual *out,
        const ImuVisual *in);

    NDDSUSERDllExport extern void 
    ImuVisualPluginSupport_destroy_data_w_params(
        ImuVisual *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ImuVisualPluginSupport_destroy_data_ex(
        ImuVisual *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ImuVisualPluginSupport_destroy_data(
        ImuVisual *sample);

    NDDSUSERDllExport extern void 
    ImuVisualPluginSupport_print_data(
        const ImuVisual *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ImuVisualPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ImuVisualPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ImuVisualPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ImuVisualPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ImuVisualPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ImuVisual *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ImuVisualPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ImuVisual *out,
        const ImuVisual *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ImuVisualPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ImuVisual *sample); 

    NDDSUSERDllExport extern RTIBool
    ImuVisualPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ImuVisual *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ImuVisualPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ImuVisual **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ImuVisualPlugin_deserialize_from_cdr_buffer(
        ImuVisual *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ImuVisualPlugin_data_to_string(
        const ImuVisual *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ImuVisualPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ImuVisualPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ImuVisualPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ImuVisualPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ImuVisualPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ImuVisual ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ImuVisualPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ImuVisualPlugin_new(void);

    NDDSUSERDllExport extern void
    ImuVisualPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ImuVisualPlugin_1171114558_h */

