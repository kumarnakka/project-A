

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightRegion.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LightRegionPlugin_541396741_h
#define LightRegionPlugin_541396741_h

#include "LightRegion.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../common/Point3Plugin.h"
#include "../../ros_ported/geometry/PosePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define LightRegionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LightRegionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LightRegionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LightRegionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LightRegionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LightRegion*
    LightRegionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LightRegion*
    LightRegionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LightRegion*
    LightRegionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LightRegionPluginSupport_copy_data(
        LightRegion *out,
        const LightRegion *in);

    NDDSUSERDllExport extern void 
    LightRegionPluginSupport_destroy_data_w_params(
        LightRegion *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LightRegionPluginSupport_destroy_data_ex(
        LightRegion *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LightRegionPluginSupport_destroy_data(
        LightRegion *sample);

    NDDSUSERDllExport extern void 
    LightRegionPluginSupport_print_data(
        const LightRegion *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LightRegionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LightRegionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LightRegionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LightRegionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LightRegionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LightRegion *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LightRegionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LightRegion *out,
        const LightRegion *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LightRegionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LightRegion *sample); 

    NDDSUSERDllExport extern RTIBool
    LightRegionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LightRegion *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LightRegionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LightRegion **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LightRegionPlugin_deserialize_from_cdr_buffer(
        LightRegion *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LightRegionPlugin_data_to_string(
        const LightRegion *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LightRegionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LightRegionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LightRegionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LightRegionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LightRegionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LightRegion ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LightRegionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LightRegionPlugin_new(void);

    NDDSUSERDllExport extern void
    LightRegionPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LightRegionPlugin_541396741_h */

