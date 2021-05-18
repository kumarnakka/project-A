

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Duration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DurationPlugin_1772276054_h
#define DurationPlugin_1772276054_h

#include "Duration.h"

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

        #define DurationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define DurationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DurationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DurationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DurationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Duration*
        DurationPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Duration*
        DurationPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Duration*
        DurationPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DurationPluginSupport_copy_data(
            Duration *out,
            const Duration *in);

        NDDSUSERDllExport extern void 
        DurationPluginSupport_destroy_data_w_params(
            Duration *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DurationPluginSupport_destroy_data_ex(
            Duration *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DurationPluginSupport_destroy_data(
            Duration *sample);

        NDDSUSERDllExport extern void 
        DurationPluginSupport_print_data(
            const Duration *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DurationPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DurationPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DurationPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DurationPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DurationPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Duration *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DurationPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Duration *out,
            const Duration *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DurationPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Duration *sample); 

        NDDSUSERDllExport extern RTIBool
        DurationPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Duration *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        DurationPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Duration **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DurationPlugin_deserialize_from_cdr_buffer(
            Duration *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        DurationPlugin_data_to_string(
            const Duration *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        DurationPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DurationPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DurationPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DurationPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DurationPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Duration ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *DurationPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DurationPlugin_new(void);

        NDDSUSERDllExport extern void
        DurationPlugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DurationPlugin_1772276054_h */

