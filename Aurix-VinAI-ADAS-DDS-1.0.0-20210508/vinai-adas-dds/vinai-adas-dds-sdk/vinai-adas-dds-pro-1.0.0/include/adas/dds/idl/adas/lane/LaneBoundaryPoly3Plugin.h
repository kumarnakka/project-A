

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundaryPoly3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneBoundaryPoly3Plugin_2085621932_h
#define LaneBoundaryPoly3Plugin_2085621932_h

#include "LaneBoundaryPoly3.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "LaneBoundaryPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define LaneBoundaryPoly3Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LaneBoundaryPoly3Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LaneBoundaryPoly3Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LaneBoundaryPoly3Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LaneBoundaryPoly3Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LaneBoundaryPoly3*
    LaneBoundaryPoly3PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LaneBoundaryPoly3*
    LaneBoundaryPoly3PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneBoundaryPoly3*
    LaneBoundaryPoly3PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPoly3PluginSupport_copy_data(
        LaneBoundaryPoly3 *out,
        const LaneBoundaryPoly3 *in);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3PluginSupport_destroy_data_w_params(
        LaneBoundaryPoly3 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3PluginSupport_destroy_data_ex(
        LaneBoundaryPoly3 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3PluginSupport_destroy_data(
        LaneBoundaryPoly3 *sample);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3PluginSupport_print_data(
        const LaneBoundaryPoly3 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LaneBoundaryPoly3Plugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3Plugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LaneBoundaryPoly3Plugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LaneBoundaryPoly3Plugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LaneBoundaryPoly3Plugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundaryPoly3 *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPoly3Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundaryPoly3 *out,
        const LaneBoundaryPoly3 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPoly3Plugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LaneBoundaryPoly3 *sample); 

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPoly3Plugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LaneBoundaryPoly3 *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPoly3Plugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundaryPoly3 **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LaneBoundaryPoly3Plugin_deserialize_from_cdr_buffer(
        LaneBoundaryPoly3 *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LaneBoundaryPoly3Plugin_data_to_string(
        const LaneBoundaryPoly3 *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPoly3Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LaneBoundaryPoly3Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPoly3Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LaneBoundaryPoly3Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LaneBoundaryPoly3Plugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneBoundaryPoly3 ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LaneBoundaryPoly3Plugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LaneBoundaryPoly3Plugin_new(void);

    NDDSUSERDllExport extern void
    LaneBoundaryPoly3Plugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneBoundaryPoly3Plugin_2085621932_h */

