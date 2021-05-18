

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles2D.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Obstacles2DPlugin_1531937460_h
#define Obstacles2DPlugin_1531937460_h

#include "Obstacles2D.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "Obstacle2DPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define Obstacles2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Obstacles2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Obstacles2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Obstacles2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Obstacles2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Obstacles2D*
    Obstacles2DPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Obstacles2D*
    Obstacles2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Obstacles2D*
    Obstacles2DPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Obstacles2DPluginSupport_copy_data(
        Obstacles2D *out,
        const Obstacles2D *in);

    NDDSUSERDllExport extern void 
    Obstacles2DPluginSupport_destroy_data_w_params(
        Obstacles2D *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Obstacles2DPluginSupport_destroy_data_ex(
        Obstacles2D *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Obstacles2DPluginSupport_destroy_data(
        Obstacles2D *sample);

    NDDSUSERDllExport extern void 
    Obstacles2DPluginSupport_print_data(
        const Obstacles2D *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Obstacles2DPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Obstacles2DPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Obstacles2DPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Obstacles2DPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Obstacles2DPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles2D *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Obstacles2DPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles2D *out,
        const Obstacles2D *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Obstacles2DPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Obstacles2D *sample); 

    NDDSUSERDllExport extern RTIBool
    Obstacles2DPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Obstacles2D *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    Obstacles2DPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles2D **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    Obstacles2DPlugin_deserialize_from_cdr_buffer(
        Obstacles2D *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Obstacles2DPlugin_data_to_string(
        const Obstacles2D *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Obstacles2DPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Obstacles2DPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Obstacles2DPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Obstacles2DPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Obstacles2DPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Obstacles2D ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *Obstacles2DPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Obstacles2DPlugin_new(void);

    NDDSUSERDllExport extern void
    Obstacles2DPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Obstacles2DPlugin_1531937460_h */

