

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bike.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BikePlugin_918040616_h
#define BikePlugin_918040616_h

#include "Bike.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "../control/TwistPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define BikePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define BikePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BikePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BikePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BikePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Bike*
    BikePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Bike*
    BikePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Bike*
    BikePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BikePluginSupport_copy_data(
        Bike *out,
        const Bike *in);

    NDDSUSERDllExport extern void 
    BikePluginSupport_destroy_data_w_params(
        Bike *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BikePluginSupport_destroy_data_ex(
        Bike *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BikePluginSupport_destroy_data(
        Bike *sample);

    NDDSUSERDllExport extern void 
    BikePluginSupport_print_data(
        const Bike *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    BikePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    BikePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    BikePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    BikePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    BikePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Bike *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    BikePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Bike *out,
        const Bike *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    BikePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Bike *sample); 

    NDDSUSERDllExport extern RTIBool
    BikePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Bike *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    BikePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Bike **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BikePlugin_deserialize_from_cdr_buffer(
        Bike *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    BikePlugin_data_to_string(
        const Bike *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    BikePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BikePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BikePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BikePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BikePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Bike ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *BikePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    BikePlugin_new(void);

    NDDSUSERDllExport extern void
    BikePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BikePlugin_918040616_h */

