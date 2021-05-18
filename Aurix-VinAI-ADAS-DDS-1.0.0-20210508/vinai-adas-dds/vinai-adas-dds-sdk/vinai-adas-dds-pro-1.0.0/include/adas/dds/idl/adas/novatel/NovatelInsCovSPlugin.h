

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelInsCovS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelInsCovSPlugin_1981401078_h
#define NovatelInsCovSPlugin_1981401078_h

#include "NovatelInsCovS.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "NovatelShortHeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define NovatelInsCovSPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NovatelInsCovSPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NovatelInsCovSPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NovatelInsCovSPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NovatelInsCovSPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NovatelInsCovS*
    NovatelInsCovSPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NovatelInsCovS*
    NovatelInsCovSPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NovatelInsCovS*
    NovatelInsCovSPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NovatelInsCovSPluginSupport_copy_data(
        NovatelInsCovS *out,
        const NovatelInsCovS *in);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPluginSupport_destroy_data_w_params(
        NovatelInsCovS *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPluginSupport_destroy_data_ex(
        NovatelInsCovS *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPluginSupport_destroy_data(
        NovatelInsCovS *sample);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPluginSupport_print_data(
        const NovatelInsCovS *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    NovatelInsCovSPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    NovatelInsCovSPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    NovatelInsCovSPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    NovatelInsCovSPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelInsCovS *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    NovatelInsCovSPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NovatelInsCovS *out,
        const NovatelInsCovS *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    NovatelInsCovSPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const NovatelInsCovS *sample); 

    NDDSUSERDllExport extern RTIBool
    NovatelInsCovSPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const NovatelInsCovS *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    NovatelInsCovSPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        NovatelInsCovS **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    NovatelInsCovSPlugin_deserialize_from_cdr_buffer(
        NovatelInsCovS *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    NovatelInsCovSPlugin_data_to_string(
        const NovatelInsCovS *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    NovatelInsCovSPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NovatelInsCovSPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NovatelInsCovSPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NovatelInsCovSPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    NovatelInsCovSPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        NovatelInsCovS ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *NovatelInsCovSPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    NovatelInsCovSPlugin_new(void);

    NDDSUSERDllExport extern void
    NovatelInsCovSPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelInsCovSPlugin_1981401078_h */

