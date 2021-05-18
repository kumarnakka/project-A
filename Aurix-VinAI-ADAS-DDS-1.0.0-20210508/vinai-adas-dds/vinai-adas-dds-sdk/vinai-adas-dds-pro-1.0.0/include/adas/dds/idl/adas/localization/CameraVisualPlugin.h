

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraVisual.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraVisualPlugin_1780458187_h
#define CameraVisualPlugin_1780458187_h

#include "CameraVisual.h"

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

    #define CameraVisualPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CameraVisualPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CameraVisualPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CameraVisualPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraVisualPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraVisual*
    CameraVisualPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraVisual*
    CameraVisualPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraVisual*
    CameraVisualPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraVisualPluginSupport_copy_data(
        CameraVisual *out,
        const CameraVisual *in);

    NDDSUSERDllExport extern void 
    CameraVisualPluginSupport_destroy_data_w_params(
        CameraVisual *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraVisualPluginSupport_destroy_data_ex(
        CameraVisual *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraVisualPluginSupport_destroy_data(
        CameraVisual *sample);

    NDDSUSERDllExport extern void 
    CameraVisualPluginSupport_print_data(
        const CameraVisual *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraVisualPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraVisualPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraVisualPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraVisualPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraVisualPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraVisual *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraVisualPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraVisual *out,
        const CameraVisual *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    CameraVisualPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraVisual *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraVisualPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraVisual *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraVisualPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraVisual **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraVisualPlugin_deserialize_from_cdr_buffer(
        CameraVisual *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraVisualPlugin_data_to_string(
        const CameraVisual *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    CameraVisualPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraVisualPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraVisualPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraVisualPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraVisualPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraVisual ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraVisualPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraVisualPlugin_new(void);

    NDDSUSERDllExport extern void
    CameraVisualPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraVisualPlugin_1780458187_h */

