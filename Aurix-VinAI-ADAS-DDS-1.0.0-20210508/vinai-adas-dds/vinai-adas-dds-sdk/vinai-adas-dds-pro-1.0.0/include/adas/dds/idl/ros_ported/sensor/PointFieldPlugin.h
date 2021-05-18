

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointField.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointFieldPlugin_1773016523_h
#define PointFieldPlugin_1773016523_h

#include "PointField.h"

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
    namespace sensor_msgs {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PointField_DataTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PointField_DataTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PointField_DataTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        PointField_DataTypePluginSupport_print_data(
            const PointField_DataType *sample, const char *desc, int indent_level);

        #define PointFieldPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PointFieldPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PointFieldPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PointFieldPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PointFieldPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PointField*
        PointFieldPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PointField*
        PointFieldPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PointField*
        PointFieldPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PointFieldPluginSupport_copy_data(
            PointField *out,
            const PointField *in);

        NDDSUSERDllExport extern void 
        PointFieldPluginSupport_destroy_data_w_params(
            PointField *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PointFieldPluginSupport_destroy_data_ex(
            PointField *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PointFieldPluginSupport_destroy_data(
            PointField *sample);

        NDDSUSERDllExport extern void 
        PointFieldPluginSupport_print_data(
            const PointField *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PointFieldPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PointFieldPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PointFieldPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PointFieldPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PointFieldPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PointField *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PointFieldPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PointField *out,
            const PointField *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PointFieldPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PointField *sample); 

        NDDSUSERDllExport extern RTIBool
        PointFieldPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PointField *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PointFieldPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PointField **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PointFieldPlugin_deserialize_from_cdr_buffer(
            PointField *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PointFieldPlugin_data_to_string(
            const PointField *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PointFieldPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PointFieldPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PointFieldPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PointFieldPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PointFieldPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PointField ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PointFieldPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PointFieldPlugin_new(void);

        NDDSUSERDllExport extern void
        PointFieldPlugin_delete(struct PRESTypePlugin *);

    } /* namespace sensor_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PointFieldPlugin_1773016523_h */

