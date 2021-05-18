

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeaturePoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FeaturePointPlugin_780179060_h
#define FeaturePointPlugin_780179060_h

#include "FeaturePoint.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"

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
    * By default, this type is struct FeaturePoint
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct FeaturePoint)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * FeaturePoint must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct FeaturePoint.
    */
    typedef  class FeaturePoint FeaturePointKeyHolder;

    #define FeaturePointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define FeaturePointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define FeaturePointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define FeaturePointPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define FeaturePointPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define FeaturePointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define FeaturePointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePointPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePointPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePointPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPluginSupport_copy_data(
        FeaturePoint *out,
        const FeaturePoint *in);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_destroy_data_w_params(
        FeaturePoint *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_destroy_data_ex(
        FeaturePoint *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_destroy_data(
        FeaturePoint *sample);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_print_data(
        const FeaturePoint *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePointPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePointPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_destroy_key_ex(
        FeaturePointKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FeaturePointPluginSupport_destroy_key(
        FeaturePointKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    FeaturePointPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    FeaturePointPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    FeaturePointPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    FeaturePointPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    FeaturePointPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePoint *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePoint *out,
        const FeaturePoint *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    FeaturePointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const FeaturePoint *sample); 

    NDDSUSERDllExport extern RTIBool
    FeaturePointPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const FeaturePoint *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePoint **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    FeaturePointPlugin_deserialize_from_cdr_buffer(
        FeaturePoint *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    FeaturePointPlugin_data_to_string(
        const FeaturePoint *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    FeaturePointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    FeaturePointPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    FeaturePointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FeaturePointPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePoint ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePointKeyHolder *key, 
        const FeaturePoint *instance);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        FeaturePoint *instance, 
        const FeaturePointKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const FeaturePoint *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    FeaturePointPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *FeaturePointPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    FeaturePointPlugin_new(void);

    NDDSUSERDllExport extern void
    FeaturePointPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FeaturePointPlugin_780179060_h */

