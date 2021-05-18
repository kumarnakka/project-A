

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseStampedPlugin_1754545695_h
#define PoseStampedPlugin_1754545695_h

#include "PoseStamped.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "PosePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace geometry_msgs {

        #define PoseStampedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PoseStampedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PoseStampedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PoseStampedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PoseStampedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PoseStamped*
        PoseStampedPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PoseStamped*
        PoseStampedPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PoseStamped*
        PoseStampedPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PoseStampedPluginSupport_copy_data(
            PoseStamped *out,
            const PoseStamped *in);

        NDDSUSERDllExport extern void 
        PoseStampedPluginSupport_destroy_data_w_params(
            PoseStamped *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PoseStampedPluginSupport_destroy_data_ex(
            PoseStamped *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PoseStampedPluginSupport_destroy_data(
            PoseStamped *sample);

        NDDSUSERDllExport extern void 
        PoseStampedPluginSupport_print_data(
            const PoseStamped *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PoseStampedPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PoseStampedPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PoseStampedPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PoseStampedPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PoseStampedPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            PoseStamped *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PoseStampedPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PoseStamped *out,
            const PoseStamped *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PoseStampedPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PoseStamped *sample); 

        NDDSUSERDllExport extern RTIBool
        PoseStampedPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PoseStamped *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PoseStampedPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            PoseStamped **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PoseStampedPlugin_deserialize_from_cdr_buffer(
            PoseStamped *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PoseStampedPlugin_data_to_string(
            const PoseStamped *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PoseStampedPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PoseStampedPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PoseStampedPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PoseStampedPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PoseStampedPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PoseStamped ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PoseStampedPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PoseStampedPlugin_new(void);

        NDDSUSERDllExport extern void
        PoseStampedPlugin_delete(struct PRESTypePlugin *);

    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PoseStampedPlugin_1754545695_h */

