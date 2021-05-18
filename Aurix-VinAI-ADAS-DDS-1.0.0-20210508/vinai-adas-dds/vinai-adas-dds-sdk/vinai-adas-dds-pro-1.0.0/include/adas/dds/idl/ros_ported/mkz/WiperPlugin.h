

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Wiper.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WiperPlugin_703759744_h
#define WiperPlugin_703759744_h

#include "Wiper.h"

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

        #define WiperPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define WiperPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WiperPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WiperPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WiperPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Wiper*
        WiperPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Wiper*
        WiperPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Wiper*
        WiperPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WiperPluginSupport_copy_data(
            Wiper *out,
            const Wiper *in);

        NDDSUSERDllExport extern void 
        WiperPluginSupport_destroy_data_w_params(
            Wiper *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WiperPluginSupport_destroy_data_ex(
            Wiper *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WiperPluginSupport_destroy_data(
            Wiper *sample);

        NDDSUSERDllExport extern void 
        WiperPluginSupport_print_data(
            const Wiper *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WiperPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WiperPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WiperPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WiperPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WiperPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Wiper *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WiperPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Wiper *out,
            const Wiper *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WiperPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Wiper *sample); 

        NDDSUSERDllExport extern RTIBool
        WiperPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Wiper *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        WiperPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Wiper **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WiperPlugin_deserialize_from_cdr_buffer(
            Wiper *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        WiperPlugin_data_to_string(
            const Wiper *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        WiperPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WiperPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WiperPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WiperPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WiperPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Wiper ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *WiperPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WiperPlugin_new(void);

        NDDSUSERDllExport extern void
        WiperPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WiperPlugin_703759744_h */

