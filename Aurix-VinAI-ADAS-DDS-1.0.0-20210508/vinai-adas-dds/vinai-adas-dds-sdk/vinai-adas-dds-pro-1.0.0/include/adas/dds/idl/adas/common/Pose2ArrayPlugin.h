

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose2Array.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pose2ArrayPlugin_200341937_h
#define Pose2ArrayPlugin_200341937_h

#include "Pose2Array.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "Pose2Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define Pose2ArrayPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Pose2ArrayPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Pose2ArrayPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Pose2ArrayPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Pose2ArrayPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Pose2Array*
    Pose2ArrayPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Pose2Array*
    Pose2ArrayPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Pose2Array*
    Pose2ArrayPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Pose2ArrayPluginSupport_copy_data(
        Pose2Array *out,
        const Pose2Array *in);

    NDDSUSERDllExport extern void 
    Pose2ArrayPluginSupport_destroy_data_w_params(
        Pose2Array *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Pose2ArrayPluginSupport_destroy_data_ex(
        Pose2Array *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Pose2ArrayPluginSupport_destroy_data(
        Pose2Array *sample);

    NDDSUSERDllExport extern void 
    Pose2ArrayPluginSupport_print_data(
        const Pose2Array *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Pose2ArrayPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Pose2ArrayPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Pose2ArrayPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Pose2ArrayPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Pose2ArrayPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pose2Array *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Pose2ArrayPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pose2Array *out,
        const Pose2Array *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Pose2ArrayPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Pose2Array *sample); 

    NDDSUSERDllExport extern RTIBool
    Pose2ArrayPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Pose2Array *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    Pose2ArrayPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Pose2Array **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    Pose2ArrayPlugin_deserialize_from_cdr_buffer(
        Pose2Array *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Pose2ArrayPlugin_data_to_string(
        const Pose2Array *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Pose2ArrayPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Pose2ArrayPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Pose2ArrayPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Pose2ArrayPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Pose2ArrayPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Pose2Array ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *Pose2ArrayPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Pose2ArrayPlugin_new(void);

    NDDSUSERDllExport extern void
    Pose2ArrayPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Pose2ArrayPlugin_200341937_h */

