

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearReject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GearRejectPlugin_1180477576_h
#define GearRejectPlugin_1180477576_h

#include "GearReject.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "GearPlugin.h"

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
        GearReject_ValuePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        GearReject_ValuePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        GearReject_ValuePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        GearReject_ValuePluginSupport_print_data(
            const GearReject_Value *sample, const char *desc, int indent_level);

        #define GearRejectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define GearRejectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define GearRejectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define GearRejectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define GearRejectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern GearReject*
        GearRejectPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern GearReject*
        GearRejectPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern GearReject*
        GearRejectPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        GearRejectPluginSupport_copy_data(
            GearReject *out,
            const GearReject *in);

        NDDSUSERDllExport extern void 
        GearRejectPluginSupport_destroy_data_w_params(
            GearReject *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        GearRejectPluginSupport_destroy_data_ex(
            GearReject *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        GearRejectPluginSupport_destroy_data(
            GearReject *sample);

        NDDSUSERDllExport extern void 
        GearRejectPluginSupport_print_data(
            const GearReject *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        GearRejectPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        GearRejectPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        GearRejectPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        GearRejectPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        GearRejectPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            GearReject *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        GearRejectPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            GearReject *out,
            const GearReject *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        GearRejectPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const GearReject *sample); 

        NDDSUSERDllExport extern RTIBool
        GearRejectPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const GearReject *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        GearRejectPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            GearReject **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        GearRejectPlugin_deserialize_from_cdr_buffer(
            GearReject *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        GearRejectPlugin_data_to_string(
            const GearReject *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        GearRejectPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        GearRejectPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        GearRejectPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        GearRejectPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        GearRejectPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            GearReject ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *GearRejectPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        GearRejectPlugin_new(void);

        NDDSUSERDllExport extern void
        GearRejectPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GearRejectPlugin_1180477576_h */

