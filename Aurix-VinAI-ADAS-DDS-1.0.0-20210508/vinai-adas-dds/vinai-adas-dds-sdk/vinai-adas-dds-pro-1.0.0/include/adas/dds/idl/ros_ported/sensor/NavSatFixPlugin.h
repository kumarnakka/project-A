

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatFixPlugin_599873210_h
#define NavSatFixPlugin_599873210_h

#include "NavSatFix.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../std/HeaderPlugin.h"
#include "NavSatStatusPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace sensor_msgs {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        NavSatFix_CovarianceTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        NavSatFix_CovarianceTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        NavSatFix_CovarianceTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        NavSatFix_CovarianceTypePluginSupport_print_data(
            const NavSatFix_CovarianceType *sample, const char *desc, int indent_level);

        #define NavSatFixPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define NavSatFixPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define NavSatFixPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define NavSatFixPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define NavSatFixPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern NavSatFix*
        NavSatFixPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern NavSatFix*
        NavSatFixPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern NavSatFix*
        NavSatFixPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        NavSatFixPluginSupport_copy_data(
            NavSatFix *out,
            const NavSatFix *in);

        NDDSUSERDllExport extern void 
        NavSatFixPluginSupport_destroy_data_w_params(
            NavSatFix *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        NavSatFixPluginSupport_destroy_data_ex(
            NavSatFix *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        NavSatFixPluginSupport_destroy_data(
            NavSatFix *sample);

        NDDSUSERDllExport extern void 
        NavSatFixPluginSupport_print_data(
            const NavSatFix *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        NavSatFixPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        NavSatFixPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        NavSatFixPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        NavSatFixPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        NavSatFixPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            NavSatFix *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        NavSatFixPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            NavSatFix *out,
            const NavSatFix *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        NavSatFixPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const NavSatFix *sample); 

        NDDSUSERDllExport extern RTIBool
        NavSatFixPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const NavSatFix *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        NavSatFixPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            NavSatFix **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        NavSatFixPlugin_deserialize_from_cdr_buffer(
            NavSatFix *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        NavSatFixPlugin_data_to_string(
            const NavSatFix *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        NavSatFixPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        NavSatFixPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        NavSatFixPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        NavSatFixPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        NavSatFixPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            NavSatFix ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *NavSatFixPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        NavSatFixPlugin_new(void);

        NDDSUSERDllExport extern void
        NavSatFixPlugin_delete(struct PRESTypePlugin *);

    } /* namespace sensor_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NavSatFixPlugin_599873210_h */

