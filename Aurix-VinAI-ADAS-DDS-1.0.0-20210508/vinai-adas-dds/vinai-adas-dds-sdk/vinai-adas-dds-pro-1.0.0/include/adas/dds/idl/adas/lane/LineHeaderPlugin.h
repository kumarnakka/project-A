

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LineHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LineHeaderPlugin_624670600_h
#define LineHeaderPlugin_624670600_h

#include "LineHeader.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
    * By default, this type is struct LineHeader
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LineHeader)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LineHeader must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LineHeader.
    */
    typedef  class LineHeader LineHeaderKeyHolder;

    #define LineHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LineHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LineHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LineHeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define LineHeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define LineHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LineHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LineHeader*
    LineHeaderPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LineHeader*
    LineHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LineHeader*
    LineHeaderPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPluginSupport_copy_data(
        LineHeader *out,
        const LineHeader *in);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_destroy_data_w_params(
        LineHeader *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_destroy_data_ex(
        LineHeader *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_destroy_data(
        LineHeader *sample);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_print_data(
        const LineHeader *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern LineHeader*
    LineHeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LineHeader*
    LineHeaderPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_destroy_key_ex(
        LineHeaderKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LineHeaderPluginSupport_destroy_key(
        LineHeaderKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    LineHeaderPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    LineHeaderPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    LineHeaderPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    LineHeaderPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    LineHeaderPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        LineHeader *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LineHeader *out,
        const LineHeader *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LineHeaderPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LineHeader *sample); 

    NDDSUSERDllExport extern RTIBool
    LineHeaderPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LineHeader *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        LineHeader **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    LineHeaderPlugin_deserialize_from_cdr_buffer(
        LineHeader *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LineHeaderPlugin_data_to_string(
        const LineHeader *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LineHeaderPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LineHeaderPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LineHeaderPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LineHeaderPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LineHeader ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        LineHeaderKeyHolder *key, 
        const LineHeader *instance);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        LineHeader *instance, 
        const LineHeaderKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const LineHeader *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    LineHeaderPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *LineHeaderPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    LineHeaderPlugin_new(void);

    NDDSUSERDllExport extern void
    LineHeaderPlugin_delete(struct PRESTypePlugin *);

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LineHeaderPlugin_624670600_h */

