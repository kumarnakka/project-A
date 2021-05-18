

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistStampedPlugin_1158951440_h
#define TwistStampedPlugin_1158951440_h

#include "TwistStamped.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "TwistPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace geometry_msgs {

        #define TwistStampedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define TwistStampedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TwistStampedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define TwistStampedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TwistStampedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TwistStamped*
        TwistStampedPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TwistStamped*
        TwistStampedPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TwistStamped*
        TwistStampedPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TwistStampedPluginSupport_copy_data(
            TwistStamped *out,
            const TwistStamped *in);

        NDDSUSERDllExport extern void 
        TwistStampedPluginSupport_destroy_data_w_params(
            TwistStamped *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TwistStampedPluginSupport_destroy_data_ex(
            TwistStamped *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TwistStampedPluginSupport_destroy_data(
            TwistStamped *sample);

        NDDSUSERDllExport extern void 
        TwistStampedPluginSupport_print_data(
            const TwistStamped *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TwistStampedPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TwistStampedPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TwistStampedPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TwistStampedPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TwistStampedPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TwistStamped *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TwistStampedPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TwistStamped *out,
            const TwistStamped *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        TwistStampedPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TwistStamped *sample); 

        NDDSUSERDllExport extern RTIBool
        TwistStampedPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const TwistStamped *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        TwistStampedPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TwistStamped **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TwistStampedPlugin_deserialize_from_cdr_buffer(
            TwistStamped *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        TwistStampedPlugin_data_to_string(
            const TwistStamped *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        TwistStampedPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TwistStampedPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TwistStampedPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TwistStampedPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TwistStampedPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TwistStamped ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *TwistStampedPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TwistStampedPlugin_new(void);

        NDDSUSERDllExport extern void
        TwistStampedPlugin_delete(struct PRESTypePlugin *);

    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TwistStampedPlugin_1158951440_h */

