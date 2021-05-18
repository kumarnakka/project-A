

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneSection.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneSectionPlugin_1294706502_h
#define LaneSectionPlugin_1294706502_h

#include "LaneSection.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "LanePlugin.h"

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
    * By default, this type is struct LaneSection
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LaneSection)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LaneSection must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LaneSection.
    */
    typedef  class LaneSection LaneSectionKeyHolder;

    #define LaneSectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LaneSectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LaneSectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LaneSectionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define LaneSectionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define LaneSectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LaneSectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LaneSection*
    LaneSectionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LaneSection*
    LaneSectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneSection*
    LaneSectionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPluginSupport_copy_data(
        LaneSection *out,
        const LaneSection *in);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_destroy_data_w_params(
        LaneSection *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_destroy_data_ex(
        LaneSection *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_destroy_data(
        LaneSection *sample);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_print_data(
        const LaneSection *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern LaneSection*
    LaneSectionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LaneSection*
    LaneSectionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_destroy_key_ex(
        LaneSectionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LaneSectionPluginSupport_destroy_key(
        LaneSectionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LaneSectionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LaneSectionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LaneSectionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LaneSectionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LaneSectionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneSection *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LaneSection *out,
        const LaneSection *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LaneSectionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LaneSection *sample); 

    NDDSUSERDllExport extern RTIBool
    LaneSectionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LaneSection *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LaneSection **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LaneSectionPlugin_deserialize_from_cdr_buffer(
        LaneSection *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LaneSectionPlugin_data_to_string(
        const LaneSection *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LaneSectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LaneSectionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LaneSectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LaneSectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneSection ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        LaneSectionKeyHolder *key, 
        const LaneSection *instance);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        LaneSection *instance, 
        const LaneSectionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const LaneSection *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    LaneSectionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LaneSectionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LaneSectionPlugin_new(void);

    NDDSUSERDllExport extern void
    LaneSectionPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LaneSectionPlugin_1294706502_h */

