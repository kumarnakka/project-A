

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneInformation.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneInformationPlugin_1133435031_h
#define LaneInformationPlugin_1133435031_h

#include "LaneInformation.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
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
    * By default, this type is struct LaneInformation
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LaneInformation)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LaneInformation must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LaneInformation.
    */
    typedef  class LaneInformation LaneInformationKeyHolder;

    #define LaneInformationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LaneInformationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LaneInformationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LaneInformationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define LaneInformationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define LaneInformationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LaneInformationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LaneInformation*
    LaneInformationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LaneInformation*
    LaneInformationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneInformation*
    LaneInformationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPluginSupport_copy_data(
        LaneInformation *out,
        const LaneInformation *in);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_destroy_data_w_params(
        LaneInformation *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_destroy_data_ex(
        LaneInformation *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_destroy_data(
        LaneInformation *sample);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_print_data(
        const LaneInformation *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern LaneInformation*
    LaneInformationPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneInformation*
    LaneInformationPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_destroy_key_ex(
        LaneInformationKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneInformationPluginSupport_destroy_key(
        LaneInformationKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LaneInformationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LaneInformationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LaneInformationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LaneInformationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LaneInformationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformation *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformation *out,
        const LaneInformation *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LaneInformationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LaneInformation *sample); 

    NDDSUSERDllExport extern RTIBool
    LaneInformationPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LaneInformation *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformation **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LaneInformationPlugin_deserialize_from_cdr_buffer(
        LaneInformation *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LaneInformationPlugin_data_to_string(
        const LaneInformation *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LaneInformationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LaneInformationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LaneInformationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LaneInformationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformation ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformationKeyHolder *key, 
        const LaneInformation *instance);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        LaneInformation *instance, 
        const LaneInformationKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const LaneInformation *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    LaneInformationPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LaneInformationPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LaneInformationPlugin_new(void);

    NDDSUSERDllExport extern void
    LaneInformationPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneInformationPlugin_1133435031_h */

