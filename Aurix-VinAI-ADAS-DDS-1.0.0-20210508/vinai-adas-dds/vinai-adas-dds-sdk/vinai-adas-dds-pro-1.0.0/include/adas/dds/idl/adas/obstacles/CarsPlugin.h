

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cars.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CarsPlugin_69122126_h
#define CarsPlugin_69122126_h

#include "Cars.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "CarPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define CarsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CarsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CarsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CarsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CarsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Cars*
    CarsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Cars*
    CarsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Cars*
    CarsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CarsPluginSupport_copy_data(
        Cars *out,
        const Cars *in);

    NDDSUSERDllExport extern void 
    CarsPluginSupport_destroy_data_w_params(
        Cars *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CarsPluginSupport_destroy_data_ex(
        Cars *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CarsPluginSupport_destroy_data(
        Cars *sample);

    NDDSUSERDllExport extern void 
    CarsPluginSupport_print_data(
        const Cars *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CarsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CarsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CarsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CarsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CarsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Cars *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CarsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Cars *out,
        const Cars *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    CarsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Cars *sample); 

    NDDSUSERDllExport extern RTIBool
    CarsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Cars *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CarsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Cars **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CarsPlugin_deserialize_from_cdr_buffer(
        Cars *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CarsPlugin_data_to_string(
        const Cars *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    CarsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CarsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CarsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CarsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CarsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Cars ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CarsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CarsPlugin_new(void);

    NDDSUSERDllExport extern void
    CarsPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CarsPlugin_69122126_h */

