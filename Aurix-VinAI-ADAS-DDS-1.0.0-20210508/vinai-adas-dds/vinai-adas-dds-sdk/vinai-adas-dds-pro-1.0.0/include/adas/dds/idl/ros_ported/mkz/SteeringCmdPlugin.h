

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SteeringCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SteeringCmdPlugin_909888447_h
#define SteeringCmdPlugin_909888447_h

#include "SteeringCmd.h"

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
    namespace dbw_mkz_msgs {

        #define SteeringCmdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define SteeringCmdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define SteeringCmdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define SteeringCmdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define SteeringCmdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern SteeringCmd*
        SteeringCmdPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern SteeringCmd*
        SteeringCmdPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern SteeringCmd*
        SteeringCmdPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        SteeringCmdPluginSupport_copy_data(
            SteeringCmd *out,
            const SteeringCmd *in);

        NDDSUSERDllExport extern void 
        SteeringCmdPluginSupport_destroy_data_w_params(
            SteeringCmd *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        SteeringCmdPluginSupport_destroy_data_ex(
            SteeringCmd *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        SteeringCmdPluginSupport_destroy_data(
            SteeringCmd *sample);

        NDDSUSERDllExport extern void 
        SteeringCmdPluginSupport_print_data(
            const SteeringCmd *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        SteeringCmdPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        SteeringCmdPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        SteeringCmdPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        SteeringCmdPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        SteeringCmdPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            SteeringCmd *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        SteeringCmdPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            SteeringCmd *out,
            const SteeringCmd *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        SteeringCmdPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const SteeringCmd *sample); 

        NDDSUSERDllExport extern RTIBool
        SteeringCmdPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const SteeringCmd *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        SteeringCmdPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            SteeringCmd **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        SteeringCmdPlugin_deserialize_from_cdr_buffer(
            SteeringCmd *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        SteeringCmdPlugin_data_to_string(
            const SteeringCmd *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        SteeringCmdPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        SteeringCmdPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        SteeringCmdPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        SteeringCmdPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        SteeringCmdPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            SteeringCmd ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *SteeringCmdPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        SteeringCmdPlugin_new(void);

        NDDSUSERDllExport extern void
        SteeringCmdPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SteeringCmdPlugin_909888447_h */

