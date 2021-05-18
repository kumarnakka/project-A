

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovariancePlugin_1047502647_h
#define TwistWithCovariancePlugin_1047502647_h

#include "TwistWithCovariance.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "TwistPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace geometry_msgs {

        #define TwistWithCovariancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define TwistWithCovariancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define TwistWithCovariancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define TwistWithCovariancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define TwistWithCovariancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern TwistWithCovariance*
        TwistWithCovariancePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern TwistWithCovariance*
        TwistWithCovariancePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern TwistWithCovariance*
        TwistWithCovariancePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        TwistWithCovariancePluginSupport_copy_data(
            TwistWithCovariance *out,
            const TwistWithCovariance *in);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePluginSupport_destroy_data_w_params(
            TwistWithCovariance *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePluginSupport_destroy_data_ex(
            TwistWithCovariance *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePluginSupport_destroy_data(
            TwistWithCovariance *sample);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePluginSupport_print_data(
            const TwistWithCovariance *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        TwistWithCovariancePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        TwistWithCovariancePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        TwistWithCovariancePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        TwistWithCovariancePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            TwistWithCovariance *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        TwistWithCovariancePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            TwistWithCovariance *out,
            const TwistWithCovariance *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        TwistWithCovariancePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const TwistWithCovariance *sample); 

        NDDSUSERDllExport extern RTIBool
        TwistWithCovariancePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const TwistWithCovariance *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        TwistWithCovariancePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            TwistWithCovariance **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        TwistWithCovariancePlugin_deserialize_from_cdr_buffer(
            TwistWithCovariance *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        TwistWithCovariancePlugin_data_to_string(
            const TwistWithCovariance *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        TwistWithCovariancePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        TwistWithCovariancePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        TwistWithCovariancePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        TwistWithCovariancePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        TwistWithCovariancePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            TwistWithCovariance ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *TwistWithCovariancePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        TwistWithCovariancePlugin_new(void);

        NDDSUSERDllExport extern void
        TwistWithCovariancePlugin_delete(struct PRESTypePlugin *);

    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TwistWithCovariancePlugin_1047502647_h */

