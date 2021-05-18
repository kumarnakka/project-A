

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bool.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoolPlugin_2069076595_h
#define BoolPlugin_2069076595_h

#include "Bool.h"

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

        #define BoolPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define BoolPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define BoolPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define BoolPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define BoolPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Bool*
        BoolPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Bool*
        BoolPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Bool*
        BoolPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        BoolPluginSupport_copy_data(
            Bool *out,
            const Bool *in);

        NDDSUSERDllExport extern void 
        BoolPluginSupport_destroy_data_w_params(
            Bool *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        BoolPluginSupport_destroy_data_ex(
            Bool *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        BoolPluginSupport_destroy_data(
            Bool *sample);

        NDDSUSERDllExport extern void 
        BoolPluginSupport_print_data(
            const Bool *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        BoolPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        BoolPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        BoolPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        BoolPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        BoolPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Bool *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        BoolPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Bool *out,
            const Bool *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        BoolPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Bool *sample); 

        NDDSUSERDllExport extern RTIBool
        BoolPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Bool *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        BoolPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Bool **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        BoolPlugin_deserialize_from_cdr_buffer(
            Bool *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        BoolPlugin_data_to_string(
            const Bool *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        BoolPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        BoolPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        BoolPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        BoolPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        BoolPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Bool ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *BoolPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        BoolPlugin_new(void);

        NDDSUSERDllExport extern void
        BoolPlugin_delete(struct PRESTypePlugin *);

    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BoolPlugin_2069076595_h */

