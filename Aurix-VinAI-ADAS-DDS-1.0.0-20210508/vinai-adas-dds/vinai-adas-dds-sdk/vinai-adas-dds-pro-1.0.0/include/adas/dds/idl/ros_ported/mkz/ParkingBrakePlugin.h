

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParkingBrake.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParkingBrakePlugin_2119277955_h
#define ParkingBrakePlugin_2119277955_h

#include "ParkingBrake.h"

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

        #define ParkingBrakePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define ParkingBrakePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ParkingBrakePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define ParkingBrakePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ParkingBrakePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern ParkingBrake*
        ParkingBrakePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern ParkingBrake*
        ParkingBrakePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ParkingBrake*
        ParkingBrakePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ParkingBrakePluginSupport_copy_data(
            ParkingBrake *out,
            const ParkingBrake *in);

        NDDSUSERDllExport extern void 
        ParkingBrakePluginSupport_destroy_data_w_params(
            ParkingBrake *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ParkingBrakePluginSupport_destroy_data_ex(
            ParkingBrake *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ParkingBrakePluginSupport_destroy_data(
            ParkingBrake *sample);

        NDDSUSERDllExport extern void 
        ParkingBrakePluginSupport_print_data(
            const ParkingBrake *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        ParkingBrakePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        ParkingBrakePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        ParkingBrakePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        ParkingBrakePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        ParkingBrakePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            ParkingBrake *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        ParkingBrakePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ParkingBrake *out,
            const ParkingBrake *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        ParkingBrakePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ParkingBrake *sample); 

        NDDSUSERDllExport extern RTIBool
        ParkingBrakePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const ParkingBrake *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        ParkingBrakePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ParkingBrake **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ParkingBrakePlugin_deserialize_from_cdr_buffer(
            ParkingBrake *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        ParkingBrakePlugin_data_to_string(
            const ParkingBrake *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        ParkingBrakePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ParkingBrakePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ParkingBrakePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ParkingBrakePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ParkingBrakePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ParkingBrake ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *ParkingBrakePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        ParkingBrakePlugin_new(void);

        NDDSUSERDllExport extern void
        ParkingBrakePlugin_delete(struct PRESTypePlugin *);

    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ParkingBrakePlugin_2119277955_h */

