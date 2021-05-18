

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bikes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BikesPlugin_1543549353_h
#define BikesPlugin_1543549353_h

#include "Bikes.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "BikePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define BikesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define BikesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BikesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BikesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BikesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Bikes*
    BikesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Bikes*
    BikesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Bikes*
    BikesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BikesPluginSupport_copy_data(
        Bikes *out,
        const Bikes *in);

    NDDSUSERDllExport extern void 
    BikesPluginSupport_destroy_data_w_params(
        Bikes *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BikesPluginSupport_destroy_data_ex(
        Bikes *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BikesPluginSupport_destroy_data(
        Bikes *sample);

    NDDSUSERDllExport extern void 
    BikesPluginSupport_print_data(
        const Bikes *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    BikesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    BikesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    BikesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    BikesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    BikesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Bikes *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    BikesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Bikes *out,
        const Bikes *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    BikesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Bikes *sample); 

    NDDSUSERDllExport extern RTIBool
    BikesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Bikes *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    BikesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Bikes **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    BikesPlugin_deserialize_from_cdr_buffer(
        Bikes *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    BikesPlugin_data_to_string(
        const Bikes *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    BikesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BikesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BikesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BikesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BikesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Bikes ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *BikesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    BikesPlugin_new(void);

    NDDSUSERDllExport extern void
    BikesPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BikesPlugin_1543549353_h */

