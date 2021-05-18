

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float32Plugin_1112288466_h
#define Float32Plugin_1112288466_h

#include "Float32.h"

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
    namespace std_msgs {

        #define Float32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define Float32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define Float32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define Float32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define Float32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Float32*
        Float32PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Float32*
        Float32PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Float32*
        Float32PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        Float32PluginSupport_copy_data(
            Float32 *out,
            const Float32 *in);

        NDDSUSERDllExport extern void 
        Float32PluginSupport_destroy_data_w_params(
            Float32 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        Float32PluginSupport_destroy_data_ex(
            Float32 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        Float32PluginSupport_destroy_data(
            Float32 *sample);

        NDDSUSERDllExport extern void 
        Float32PluginSupport_print_data(
            const Float32 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        Float32Plugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        Float32Plugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        Float32Plugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        Float32Plugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        Float32Plugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Float32 *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        Float32Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Float32 *out,
            const Float32 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        Float32Plugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Float32 *sample); 

        NDDSUSERDllExport extern RTIBool
        Float32Plugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Float32 *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        Float32Plugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Float32 **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        Float32Plugin_deserialize_from_cdr_buffer(
            Float32 *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        Float32Plugin_data_to_string(
            const Float32 *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        Float32Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        Float32Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        Float32Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Float32Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        Float32Plugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Float32 ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *Float32Plugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        Float32Plugin_new(void);

        NDDSUSERDllExport extern void
        Float32Plugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Float32Plugin_1112288466_h */

