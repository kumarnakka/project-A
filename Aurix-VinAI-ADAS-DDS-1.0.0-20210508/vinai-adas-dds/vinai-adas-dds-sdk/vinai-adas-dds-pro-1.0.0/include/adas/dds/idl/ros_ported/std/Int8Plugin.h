

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int8Plugin_591466031_h
#define Int8Plugin_591466031_h

#include "Int8.h"

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

        #define Int8Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define Int8Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define Int8Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define Int8Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define Int8Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Int8*
        Int8PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Int8*
        Int8PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Int8*
        Int8PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        Int8PluginSupport_copy_data(
            Int8 *out,
            const Int8 *in);

        NDDSUSERDllExport extern void 
        Int8PluginSupport_destroy_data_w_params(
            Int8 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        Int8PluginSupport_destroy_data_ex(
            Int8 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        Int8PluginSupport_destroy_data(
            Int8 *sample);

        NDDSUSERDllExport extern void 
        Int8PluginSupport_print_data(
            const Int8 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        Int8Plugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        Int8Plugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        Int8Plugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        Int8Plugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        Int8Plugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Int8 *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        Int8Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Int8 *out,
            const Int8 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        Int8Plugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Int8 *sample); 

        NDDSUSERDllExport extern RTIBool
        Int8Plugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Int8 *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        Int8Plugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Int8 **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        Int8Plugin_deserialize_from_cdr_buffer(
            Int8 *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        Int8Plugin_data_to_string(
            const Int8 *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        Int8Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        Int8Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        Int8Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Int8Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        Int8Plugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Int8 ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *Int8Plugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        Int8Plugin_new(void);

        NDDSUSERDllExport extern void
        Int8Plugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Int8Plugin_591466031_h */

