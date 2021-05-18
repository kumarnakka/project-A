

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FuelLevelReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FuelLevelReportPlugin_1924466749_h
#define FuelLevelReportPlugin_1924466749_h

#include "FuelLevelReport.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../std/HeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        #define FuelLevelReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define FuelLevelReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define FuelLevelReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define FuelLevelReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define FuelLevelReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern FuelLevelReport*
        FuelLevelReportPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern FuelLevelReport*
        FuelLevelReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern FuelLevelReport*
        FuelLevelReportPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        FuelLevelReportPluginSupport_copy_data(
            FuelLevelReport *out,
            const FuelLevelReport *in);

        NDDSUSERDllExport extern void 
        FuelLevelReportPluginSupport_destroy_data_w_params(
            FuelLevelReport *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        FuelLevelReportPluginSupport_destroy_data_ex(
            FuelLevelReport *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        FuelLevelReportPluginSupport_destroy_data(
            FuelLevelReport *sample);

        NDDSUSERDllExport extern void 
        FuelLevelReportPluginSupport_print_data(
            const FuelLevelReport *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        FuelLevelReportPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        FuelLevelReportPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        FuelLevelReportPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        FuelLevelReportPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        FuelLevelReportPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            FuelLevelReport *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        FuelLevelReportPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            FuelLevelReport *out,
            const FuelLevelReport *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        FuelLevelReportPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const FuelLevelReport *sample); 

        NDDSUSERDllExport extern RTIBool
        FuelLevelReportPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const FuelLevelReport *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        FuelLevelReportPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            FuelLevelReport **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        FuelLevelReportPlugin_deserialize_from_cdr_buffer(
            FuelLevelReport *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        FuelLevelReportPlugin_data_to_string(
            const FuelLevelReport *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        FuelLevelReportPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        FuelLevelReportPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        FuelLevelReportPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        FuelLevelReportPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        FuelLevelReportPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            FuelLevelReport ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *FuelLevelReportPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        FuelLevelReportPlugin_new(void);

        NDDSUSERDllExport extern void
        FuelLevelReportPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FuelLevelReportPlugin_1924466749_h */

