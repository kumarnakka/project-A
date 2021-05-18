

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Lane.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LanePlugin_1552900476_h
#define LanePlugin_1552900476_h

#include "Lane.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../common/Pose2Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Lane
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Lane)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Lane must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Lane.
    */
    typedef  class Lane LaneKeyHolder;

    #define LanePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LanePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LanePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LanePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define LanePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define LanePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LanePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Lane*
    LanePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Lane*
    LanePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Lane*
    LanePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LanePluginSupport_copy_data(
        Lane *out,
        const Lane *in);

    NDDSUSERDllExport extern void 
    LanePluginSupport_destroy_data_w_params(
        Lane *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LanePluginSupport_destroy_data_ex(
        Lane *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LanePluginSupport_destroy_data(
        Lane *sample);

    NDDSUSERDllExport extern void 
    LanePluginSupport_print_data(
        const Lane *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Lane*
    LanePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Lane*
    LanePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    LanePluginSupport_destroy_key_ex(
        LaneKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LanePluginSupport_destroy_key(
        LaneKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LanePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LanePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LanePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LanePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LanePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Lane *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Lane *out,
        const Lane *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LanePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Lane *sample); 

    NDDSUSERDllExport extern RTIBool
    LanePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Lane *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Lane **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LanePlugin_deserialize_from_cdr_buffer(
        Lane *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LanePlugin_data_to_string(
        const Lane *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LanePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LanePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LanePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LanePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Lane ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneKeyHolder *key, 
        const Lane *instance);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Lane *instance, 
        const LaneKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const Lane *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    LanePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LanePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LanePlugin_new(void);

    NDDSUSERDllExport extern void
    LanePlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LanePlugin_1552900476_h */

