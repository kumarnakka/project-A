

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MapLinePlugin_2127517238_h
#define MapLinePlugin_2127517238_h

#include "MapLine.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../common/Point3Plugin.h"
#include "../lane/LineHeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define MapLinePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MapLinePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MapLinePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MapLinePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MapLinePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MapLine*
    MapLinePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MapLine*
    MapLinePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MapLine*
    MapLinePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MapLinePluginSupport_copy_data(
        MapLine *out,
        const MapLine *in);

    NDDSUSERDllExport extern void 
    MapLinePluginSupport_destroy_data_w_params(
        MapLine *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MapLinePluginSupport_destroy_data_ex(
        MapLine *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MapLinePluginSupport_destroy_data(
        MapLine *sample);

    NDDSUSERDllExport extern void 
    MapLinePluginSupport_print_data(
        const MapLine *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    MapLinePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    MapLinePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    MapLinePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    MapLinePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    MapLinePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        MapLine *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    MapLinePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MapLine *out,
        const MapLine *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MapLinePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MapLine *sample); 

    NDDSUSERDllExport extern RTIBool
    MapLinePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MapLine *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    MapLinePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        MapLine **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    MapLinePlugin_deserialize_from_cdr_buffer(
        MapLine *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MapLinePlugin_data_to_string(
        const MapLine *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    MapLinePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MapLinePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MapLinePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MapLinePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MapLinePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MapLine ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *MapLinePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    MapLinePlugin_new(void);

    NDDSUSERDllExport extern void
    MapLinePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MapLinePlugin_2127517238_h */

