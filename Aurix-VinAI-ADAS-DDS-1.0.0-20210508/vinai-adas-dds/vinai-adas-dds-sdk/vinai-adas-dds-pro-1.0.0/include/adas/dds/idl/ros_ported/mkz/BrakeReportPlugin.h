

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BrakeReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BrakeReportPlugin_28033801_h
#define BrakeReportPlugin_28033801_h

#include "BrakeReport.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../std/HeaderPlugin.h"
#include "WatchdogCounterPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        #define BrakeReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define BrakeReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define BrakeReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define BrakeReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define BrakeReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern BrakeReport*
        BrakeReportPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern BrakeReport*
        BrakeReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern BrakeReport*
        BrakeReportPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        BrakeReportPluginSupport_copy_data(
            BrakeReport *out,
            const BrakeReport *in);

        NDDSUSERDllExport extern void 
        BrakeReportPluginSupport_destroy_data_w_params(
            BrakeReport *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        BrakeReportPluginSupport_destroy_data_ex(
            BrakeReport *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        BrakeReportPluginSupport_destroy_data(
            BrakeReport *sample);

        NDDSUSERDllExport extern void 
        BrakeReportPluginSupport_print_data(
            const BrakeReport *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        BrakeReportPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        BrakeReportPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        BrakeReportPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        BrakeReportPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        BrakeReportPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            BrakeReport *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        BrakeReportPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            BrakeReport *out,
            const BrakeReport *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        BrakeReportPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const BrakeReport *sample); 

        NDDSUSERDllExport extern RTIBool
        BrakeReportPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const BrakeReport *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        BrakeReportPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            BrakeReport **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        BrakeReportPlugin_deserialize_from_cdr_buffer(
            BrakeReport *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        BrakeReportPlugin_data_to_string(
            const BrakeReport *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        BrakeReportPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        BrakeReportPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        BrakeReportPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        BrakeReportPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        BrakeReportPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            BrakeReport ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *BrakeReportPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        BrakeReportPlugin_new(void);

        NDDSUSERDllExport extern void
        BrakeReportPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BrakeReportPlugin_28033801_h */

