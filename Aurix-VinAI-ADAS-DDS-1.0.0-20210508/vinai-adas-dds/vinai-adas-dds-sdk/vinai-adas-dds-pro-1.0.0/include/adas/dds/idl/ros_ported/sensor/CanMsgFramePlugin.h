

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CanMsgFrame.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CanMsgFramePlugin_1436985757_h
#define CanMsgFramePlugin_1436985757_h

#include "CanMsgFrame.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace can_msgs {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct Frame
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct Frame)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * Frame must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct Frame.
        */
        typedef  class Frame FrameKeyHolder;

        #define FramePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define FramePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define FramePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define FramePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define FramePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define FramePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define FramePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Frame*
        FramePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Frame*
        FramePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Frame*
        FramePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        FramePluginSupport_copy_data(
            Frame *out,
            const Frame *in);

        NDDSUSERDllExport extern void 
        FramePluginSupport_destroy_data_w_params(
            Frame *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        FramePluginSupport_destroy_data_ex(
            Frame *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        FramePluginSupport_destroy_data(
            Frame *sample);

        NDDSUSERDllExport extern void 
        FramePluginSupport_print_data(
            const Frame *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern Frame*
        FramePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Frame*
        FramePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        FramePluginSupport_destroy_key_ex(
            FrameKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        FramePluginSupport_destroy_key(
            FrameKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        FramePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        FramePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        FramePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        FramePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        FramePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Frame *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Frame *out,
            const Frame *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        FramePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Frame *sample); 

        NDDSUSERDllExport extern RTIBool
        FramePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Frame *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Frame **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        FramePlugin_deserialize_from_cdr_buffer(
            Frame *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        FramePlugin_data_to_string(
            const Frame *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        FramePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        FramePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        FramePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        FramePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Frame ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            FrameKeyHolder *key, 
            const Frame *instance);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            Frame *instance, 
            const FrameKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const Frame *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        FramePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *FramePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        FramePlugin_new(void);

        NDDSUSERDllExport extern void
        FramePlugin_delete(struct PRESTypePlugin *);

    } /* namespace can_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CanMsgFramePlugin_1436985757_h */

