

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Misc1Report.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Misc1ReportPlugin_858438373_h
#define Misc1ReportPlugin_858438373_h

#include "Misc1Report.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../std/HeaderPlugin.h"
#include "WiperPlugin.h"
#include "TurnSignalPlugin.h"
#include "AmbientLightPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        #define Misc1ReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define Misc1ReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define Misc1ReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define Misc1ReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define Misc1ReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Misc1Report*
        Misc1ReportPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Misc1Report*
        Misc1ReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Misc1Report*
        Misc1ReportPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        Misc1ReportPluginSupport_copy_data(
            Misc1Report *out,
            const Misc1Report *in);

        NDDSUSERDllExport extern void 
        Misc1ReportPluginSupport_destroy_data_w_params(
            Misc1Report *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        Misc1ReportPluginSupport_destroy_data_ex(
            Misc1Report *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        Misc1ReportPluginSupport_destroy_data(
            Misc1Report *sample);

        NDDSUSERDllExport extern void 
        Misc1ReportPluginSupport_print_data(
            const Misc1Report *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        Misc1ReportPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        Misc1ReportPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        Misc1ReportPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        Misc1ReportPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        Misc1ReportPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Misc1Report *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        Misc1ReportPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Misc1Report *out,
            const Misc1Report *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        Misc1ReportPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Misc1Report *sample); 

        NDDSUSERDllExport extern RTIBool
        Misc1ReportPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Misc1Report *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        Misc1ReportPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Misc1Report **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        Misc1ReportPlugin_deserialize_from_cdr_buffer(
            Misc1Report *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        Misc1ReportPlugin_data_to_string(
            const Misc1Report *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        Misc1ReportPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        Misc1ReportPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        Misc1ReportPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Misc1ReportPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        Misc1ReportPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Misc1Report ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *Misc1ReportPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        Misc1ReportPlugin_new(void);

        NDDSUSERDllExport extern void
        Misc1ReportPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Misc1ReportPlugin_858438373_h */

