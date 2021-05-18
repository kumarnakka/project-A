

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cones.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConesPlugin_1178435110_h
#define ConesPlugin_1178435110_h

#include "Cones.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "ConePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define ConesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Cones*
    ConesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Cones*
    ConesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Cones*
    ConesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConesPluginSupport_copy_data(
        Cones *out,
        const Cones *in);

    NDDSUSERDllExport extern void 
    ConesPluginSupport_destroy_data_w_params(
        Cones *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConesPluginSupport_destroy_data_ex(
        Cones *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConesPluginSupport_destroy_data(
        Cones *sample);

    NDDSUSERDllExport extern void 
    ConesPluginSupport_print_data(
        const Cones *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ConesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ConesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ConesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ConesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ConesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Cones *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ConesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Cones *out,
        const Cones *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ConesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Cones *sample); 

    NDDSUSERDllExport extern RTIBool
    ConesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Cones *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ConesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Cones **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ConesPlugin_deserialize_from_cdr_buffer(
        Cones *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ConesPlugin_data_to_string(
        const Cones *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ConesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ConesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Cones ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ConesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ConesPlugin_new(void);

    NDDSUSERDllExport extern void
    ConesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConesPlugin_1178435110_h */

