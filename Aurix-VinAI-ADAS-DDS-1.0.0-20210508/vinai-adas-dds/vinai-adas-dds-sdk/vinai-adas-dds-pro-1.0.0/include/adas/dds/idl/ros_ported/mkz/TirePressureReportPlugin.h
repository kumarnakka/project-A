

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TirePressureReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TirePressureReportPlugin_604411076_h
#define TirePressureReportPlugin_604411076_h

#include "TirePressureReport.h"

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

        #define TirePressureReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define TirePressureReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TirePressureReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define TirePressureReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TirePressureReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TirePressureReport*
        TirePressureReportPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TirePressureReport*
        TirePressureReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TirePressureReport*
        TirePressureReportPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TirePressureReportPluginSupport_copy_data(
            TirePressureReport *out,
            const TirePressureReport *in);

        NDDSUSERDllExport extern void 
        TirePressureReportPluginSupport_destroy_data_w_params(
            TirePressureReport *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TirePressureReportPluginSupport_destroy_data_ex(
            TirePressureReport *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TirePressureReportPluginSupport_destroy_data(
            TirePressureReport *sample);

        NDDSUSERDllExport extern void 
        TirePressureReportPluginSupport_print_data(
            const TirePressureReport *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TirePressureReportPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TirePressureReportPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TirePressureReportPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TirePressureReportPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TirePressureReportPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TirePressureReport *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TirePressureReportPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TirePressureReport *out,
            const TirePressureReport *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        TirePressureReportPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TirePressureReport *sample); 

        NDDSUSERDllExport extern RTIBool
        TirePressureReportPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const TirePressureReport *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        TirePressureReportPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TirePressureReport **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TirePressureReportPlugin_deserialize_from_cdr_buffer(
            TirePressureReport *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        TirePressureReportPlugin_data_to_string(
            const TirePressureReport *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        TirePressureReportPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TirePressureReportPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TirePressureReportPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TirePressureReportPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TirePressureReportPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TirePressureReport ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *TirePressureReportPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TirePressureReportPlugin_new(void);

        NDDSUSERDllExport extern void
        TirePressureReportPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TirePressureReportPlugin_604411076_h */

