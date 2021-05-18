

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Truck.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TruckPlugin_992111718_h
#define TruckPlugin_992111718_h

#include "Truck.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../control/TwistPlugin.h"
#include "../../ros_ported/std/HeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    #define TruckPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TruckPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TruckPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TruckPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TruckPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Truck*
    TruckPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Truck*
    TruckPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Truck*
    TruckPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TruckPluginSupport_copy_data(
        Truck *out,
        const Truck *in);

    NDDSUSERDllExport extern void 
    TruckPluginSupport_destroy_data_w_params(
        Truck *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TruckPluginSupport_destroy_data_ex(
        Truck *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TruckPluginSupport_destroy_data(
        Truck *sample);

    NDDSUSERDllExport extern void 
    TruckPluginSupport_print_data(
        const Truck *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TruckPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TruckPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TruckPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TruckPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TruckPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Truck *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TruckPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Truck *out,
        const Truck *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TruckPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Truck *sample); 

    NDDSUSERDllExport extern RTIBool
    TruckPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Truck *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    TruckPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Truck **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TruckPlugin_deserialize_from_cdr_buffer(
        Truck *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TruckPlugin_data_to_string(
        const Truck *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TruckPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TruckPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TruckPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TruckPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TruckPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Truck ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *TruckPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TruckPlugin_new(void);

    NDDSUSERDllExport extern void
    TruckPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TruckPlugin_992111718_h */

