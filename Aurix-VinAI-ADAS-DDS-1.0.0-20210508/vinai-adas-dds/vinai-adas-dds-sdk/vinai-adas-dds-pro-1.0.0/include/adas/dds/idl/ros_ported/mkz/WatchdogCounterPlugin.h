

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WatchdogCounter.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WatchdogCounterPlugin_1549973033_h
#define WatchdogCounterPlugin_1549973033_h

#include "WatchdogCounter.h"

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

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounter_SourcePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounter_SourcePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounter_SourcePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WatchdogCounter_SourcePluginSupport_print_data(
            const WatchdogCounter_Source *sample, const char *desc, int indent_level);

        #define WatchdogCounterPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define WatchdogCounterPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WatchdogCounterPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WatchdogCounterPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WatchdogCounterPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WatchdogCounter*
        WatchdogCounterPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WatchdogCounter*
        WatchdogCounterPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WatchdogCounter*
        WatchdogCounterPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WatchdogCounterPluginSupport_copy_data(
            WatchdogCounter *out,
            const WatchdogCounter *in);

        NDDSUSERDllExport extern void 
        WatchdogCounterPluginSupport_destroy_data_w_params(
            WatchdogCounter *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WatchdogCounterPluginSupport_destroy_data_ex(
            WatchdogCounter *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WatchdogCounterPluginSupport_destroy_data(
            WatchdogCounter *sample);

        NDDSUSERDllExport extern void 
        WatchdogCounterPluginSupport_print_data(
            const WatchdogCounter *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WatchdogCounterPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WatchdogCounterPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WatchdogCounterPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WatchdogCounterPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WatchdogCounterPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WatchdogCounter *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WatchdogCounterPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WatchdogCounter *out,
            const WatchdogCounter *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WatchdogCounterPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WatchdogCounter *sample); 

        NDDSUSERDllExport extern RTIBool
        WatchdogCounterPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const WatchdogCounter *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        WatchdogCounterPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WatchdogCounter **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WatchdogCounterPlugin_deserialize_from_cdr_buffer(
            WatchdogCounter *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        WatchdogCounterPlugin_data_to_string(
            const WatchdogCounter *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounterPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WatchdogCounterPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounterPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WatchdogCounterPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WatchdogCounterPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WatchdogCounter ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *WatchdogCounterPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WatchdogCounterPlugin_new(void);

        NDDSUSERDllExport extern void
        WatchdogCounterPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WatchdogCounterPlugin_1549973033_h */

