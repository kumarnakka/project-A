

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Gear.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GearPlugin_1512824474_h
#define GearPlugin_1512824474_h

#include "Gear.h"

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

        #define GearPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define GearPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define GearPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define GearPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define GearPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Gear*
        GearPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Gear*
        GearPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Gear*
        GearPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        GearPluginSupport_copy_data(
            Gear *out,
            const Gear *in);

        NDDSUSERDllExport extern void 
        GearPluginSupport_destroy_data_w_params(
            Gear *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        GearPluginSupport_destroy_data_ex(
            Gear *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        GearPluginSupport_destroy_data(
            Gear *sample);

        NDDSUSERDllExport extern void 
        GearPluginSupport_print_data(
            const Gear *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        GearPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        GearPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        GearPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        GearPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        GearPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Gear *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        GearPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Gear *out,
            const Gear *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        GearPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Gear *sample); 

        NDDSUSERDllExport extern RTIBool
        GearPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Gear *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        GearPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Gear **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        GearPlugin_deserialize_from_cdr_buffer(
            Gear *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        GearPlugin_data_to_string(
            const Gear *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        GearPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        GearPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        GearPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        GearPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        GearPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Gear ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *GearPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        GearPlugin_new(void);

        NDDSUSERDllExport extern void
        GearPlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GearPlugin_1512824474_h */

