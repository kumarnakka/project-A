

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PosePlugin_806669554_h
#define PosePlugin_806669554_h

#include "Pose.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "PointPlugin.h"
#include "QuaternionPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace geometry_msgs {

        #define PosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Pose*
        PosePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Pose*
        PosePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Pose*
        PosePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PosePluginSupport_copy_data(
            Pose *out,
            const Pose *in);

        NDDSUSERDllExport extern void 
        PosePluginSupport_destroy_data_w_params(
            Pose *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PosePluginSupport_destroy_data_ex(
            Pose *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PosePluginSupport_destroy_data(
            Pose *sample);

        NDDSUSERDllExport extern void 
        PosePluginSupport_print_data(
            const Pose *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PosePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PosePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PosePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PosePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PosePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Pose *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PosePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Pose *out,
            const Pose *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PosePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Pose *sample); 

        NDDSUSERDllExport extern RTIBool
        PosePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Pose *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PosePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Pose **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PosePlugin_deserialize_from_cdr_buffer(
            Pose *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PosePlugin_data_to_string(
            const Pose *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PosePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PosePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PosePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PosePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PosePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Pose ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PosePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PosePlugin_new(void);

        NDDSUSERDllExport extern void
        PosePlugin_delete(struct PRESTypePlugin *);

    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PosePlugin_806669554_h */

