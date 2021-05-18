

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TurnSignal.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TurnSignalPlugin_1140930012_h
#define TurnSignalPlugin_1140930012_h

#include "TurnSignal.h"

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

        #define TurnSignalPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define TurnSignalPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TurnSignalPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define TurnSignalPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TurnSignalPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TurnSignal*
        TurnSignalPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TurnSignal*
        TurnSignalPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TurnSignal*
        TurnSignalPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TurnSignalPluginSupport_copy_data(
            TurnSignal *out,
            const TurnSignal *in);

        NDDSUSERDllExport extern void 
        TurnSignalPluginSupport_destroy_data_w_params(
            TurnSignal *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TurnSignalPluginSupport_destroy_data_ex(
            TurnSignal *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TurnSignalPluginSupport_destroy_data(
            TurnSignal *sample);

        NDDSUSERDllExport extern void 
        TurnSignalPluginSupport_print_data(
            const TurnSignal *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TurnSignalPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TurnSignalPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TurnSignalPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TurnSignalPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TurnSignalPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TurnSignal *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TurnSignalPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TurnSignal *out,
            const TurnSignal *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        TurnSignalPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TurnSignal *sample); 

        NDDSUSERDllExport extern RTIBool
        TurnSignalPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const TurnSignal *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        TurnSignalPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TurnSignal **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TurnSignalPlugin_deserialize_from_cdr_buffer(
            TurnSignal *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        TurnSignalPlugin_data_to_string(
            const TurnSignal *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        TurnSignalPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TurnSignalPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TurnSignalPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TurnSignalPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TurnSignalPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TurnSignal ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *TurnSignalPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TurnSignalPlugin_new(void);

        NDDSUSERDllExport extern void
        TurnSignalPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TurnSignalPlugin_1140930012_h */

