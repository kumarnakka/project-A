

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt32Plugin_1490589481_h
#define UInt32Plugin_1490589481_h

#include "UInt32.h"

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

        #define UInt32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define UInt32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define UInt32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define UInt32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define UInt32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern UInt32*
        UInt32PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern UInt32*
        UInt32PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern UInt32*
        UInt32PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        UInt32PluginSupport_copy_data(
            UInt32 *out,
            const UInt32 *in);

        NDDSUSERDllExport extern void 
        UInt32PluginSupport_destroy_data_w_params(
            UInt32 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        UInt32PluginSupport_destroy_data_ex(
            UInt32 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        UInt32PluginSupport_destroy_data(
            UInt32 *sample);

        NDDSUSERDllExport extern void 
        UInt32PluginSupport_print_data(
            const UInt32 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        UInt32Plugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        UInt32Plugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        UInt32Plugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        UInt32Plugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        UInt32Plugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            UInt32 *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        UInt32Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            UInt32 *out,
            const UInt32 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        UInt32Plugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const UInt32 *sample); 

        NDDSUSERDllExport extern RTIBool
        UInt32Plugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const UInt32 *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        UInt32Plugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            UInt32 **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        UInt32Plugin_deserialize_from_cdr_buffer(
            UInt32 *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        UInt32Plugin_data_to_string(
            const UInt32 *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        UInt32Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        UInt32Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        UInt32Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        UInt32Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        UInt32Plugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            UInt32 ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *UInt32Plugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        UInt32Plugin_new(void);

        NDDSUSERDllExport extern void
        UInt32Plugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UInt32Plugin_1490589481_h */

