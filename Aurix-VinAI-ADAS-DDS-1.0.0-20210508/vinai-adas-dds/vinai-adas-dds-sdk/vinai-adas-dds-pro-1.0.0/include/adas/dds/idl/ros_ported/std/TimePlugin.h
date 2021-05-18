

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Time.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TimePlugin_2013853848_h
#define TimePlugin_2013853848_h

#include "Time.h"

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

        #define TimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define TimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define TimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Time*
        TimePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Time*
        TimePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Time*
        TimePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TimePluginSupport_copy_data(
            Time *out,
            const Time *in);

        NDDSUSERDllExport extern void 
        TimePluginSupport_destroy_data_w_params(
            Time *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TimePluginSupport_destroy_data_ex(
            Time *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TimePluginSupport_destroy_data(
            Time *sample);

        NDDSUSERDllExport extern void 
        TimePluginSupport_print_data(
            const Time *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TimePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TimePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TimePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TimePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TimePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Time *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TimePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Time *out,
            const Time *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        TimePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Time *sample); 

        NDDSUSERDllExport extern RTIBool
        TimePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Time *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        TimePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Time **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TimePlugin_deserialize_from_cdr_buffer(
            Time *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        TimePlugin_data_to_string(
            const Time *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        TimePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TimePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TimePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TimePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TimePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Time ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *TimePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TimePlugin_new(void);

        NDDSUSERDllExport extern void
        TimePlugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TimePlugin_2013853848_h */

