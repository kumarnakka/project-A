

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraImage.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraImagePlugin_787822959_h
#define CameraImagePlugin_787822959_h

#include "CameraImage.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#ifndef metp_type_plugin_h
#include "metp/metp_type_plugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace common {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    FormatPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    FormatPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FormatPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    FormatPluginSupport_print_data(
        const Format *sample, const char *desc, int indent_level);

} /* namespace common  */
namespace common_flat {

    #define ResolutionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    RTIBool ResolutionPlugin_get_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const void *user_data,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    void ResolutionPlugin_return_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    #define ResolutionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ResolutionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    #define  ResolutionPlugin_get_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_getWriterLoanedSample
    #define  ResolutionPlugin_return_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_returnWriterLoanedSample
    #define  ResolutionPlugin_return_writer_loaned_sample_from_cookie \
    PRESTypePluginDefaultEndpointData_returnWriterLoanedSampleFromCookie
    #define  ResolutionPlugin_validate_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_validateWriterLoanedSample
    #define  ResolutionPlugin_set_writer_loaned_sample_serialized_state \
    PRESTypePluginDefaultEndpointData_setWriterLoanedSampleSerializedState
    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPluginSupport_copy_data(
        Resolution *out,
        const Resolution *in);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_w_params(
        Resolution *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_ex(
        Resolution *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data(
        Resolution *sample);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_print_data(
        const Resolution *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ResolutionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ResolutionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ResolutionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *out,
        const Resolution *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const Resolution *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Resolution *sample); 

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Resolution *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Resolution **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_deserialize_from_cdr_buffer(
        Resolution *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ResolutionPlugin_data_to_string(
        const Resolution *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    ResolutionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const Resolution * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ResolutionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const Resolution *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Resolution ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ResolutionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ResolutionPlugin_new(void);

    NDDSUSERDllExport extern void
    ResolutionPlugin_delete(struct PRESTypePlugin *);

    #define ResolutionPlainHelperPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ResolutionPlainHelperPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ResolutionPlainHelperPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ResolutionPlainHelperPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ResolutionPlainHelperPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ResolutionPlainHelper*
    ResolutionPlainHelperPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ResolutionPlainHelper*
    ResolutionPlainHelperPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ResolutionPlainHelper*
    ResolutionPlainHelperPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPluginSupport_copy_data(
        ResolutionPlainHelper *out,
        const ResolutionPlainHelper *in);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPluginSupport_destroy_data_w_params(
        ResolutionPlainHelper *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPluginSupport_destroy_data_ex(
        ResolutionPlainHelper *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPluginSupport_destroy_data(
        ResolutionPlainHelper *sample);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPluginSupport_print_data(
        const ResolutionPlainHelper *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ResolutionPlainHelperPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ResolutionPlainHelperPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ResolutionPlainHelperPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ResolutionPlainHelperPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper *out,
        const ResolutionPlainHelper *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const ResolutionPlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlainHelperPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ResolutionPlainHelper *sample); 

    NDDSUSERDllExport extern RTIBool
    ResolutionPlainHelperPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ResolutionPlainHelper *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlainHelperPlugin_deserialize_from_cdr_buffer(
        ResolutionPlainHelper *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ResolutionPlainHelperPlugin_data_to_string(
        const ResolutionPlainHelper *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    ResolutionPlainHelperPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    ResolutionPlainHelperPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const ResolutionPlainHelper * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ResolutionPlainHelperPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlainHelperPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const ResolutionPlainHelper *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlainHelperPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlainHelperPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ResolutionPlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ResolutionPlainHelperPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ResolutionPlainHelperPlugin_new(void);

    NDDSUSERDllExport extern void
    ResolutionPlainHelperPlugin_delete(struct PRESTypePlugin *);

} /* namespace common_flat  */
namespace flat_types {

    #define CameraImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    RTIBool CameraImagePlugin_get_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const void *user_data,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    void CameraImagePlugin_return_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    #define CameraImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    #define  CameraImagePlugin_get_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_getWriterLoanedSample
    #define  CameraImagePlugin_return_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_returnWriterLoanedSample
    #define  CameraImagePlugin_return_writer_loaned_sample_from_cookie \
    PRESTypePluginDefaultEndpointData_returnWriterLoanedSampleFromCookie
    #define  CameraImagePlugin_validate_writer_loaned_sample \
    PRESTypePluginDefaultEndpointData_validateWriterLoanedSample
    #define  CameraImagePlugin_set_writer_loaned_sample_serialized_state \
    PRESTypePluginDefaultEndpointData_setWriterLoanedSampleSerializedState
    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePluginSupport_copy_data(
        CameraImage *out,
        const CameraImage *in);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_w_params(
        CameraImage *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_ex(
        CameraImage *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data(
        CameraImage *sample);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_print_data(
        const CameraImage *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *out,
        const CameraImage *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImage *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImage *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_deserialize_from_cdr_buffer(
        CameraImage *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlugin_data_to_string(
        const CameraImage *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    CameraImagePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const CameraImage * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlugin_delete(struct PRESTypePlugin *);

    #define CameraImagePlainHelperPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CameraImagePlainHelperPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CameraImagePlainHelperPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CameraImagePlainHelperPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlainHelperPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPluginSupport_copy_data(
        CameraImagePlainHelper *out,
        const CameraImagePlainHelper *in);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data_w_params(
        CameraImagePlainHelper *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data_ex(
        CameraImagePlainHelper *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data(
        CameraImagePlainHelper *sample);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_print_data(
        const CameraImagePlainHelper *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlainHelperPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlainHelperPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlainHelperPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *out,
        const CameraImagePlainHelper *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImagePlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImagePlainHelper *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImagePlainHelper *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_deserialize_from_cdr_buffer(
        CameraImagePlainHelper *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlainHelperPlugin_data_to_string(
        const CameraImagePlainHelper *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    CameraImagePlainHelperPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const CameraImagePlainHelper * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlainHelperPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImagePlainHelper *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlainHelperPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlainHelperPlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlainHelperPlugin_delete(struct PRESTypePlugin *);

} /* namespace flat_types  */
namespace flat_zero_copy_types {

    #define CameraImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    RTIBool CameraImagePlugin_get_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const void *user_data,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    void CameraImagePlugin_return_buffer_w_params(
        PRESTypePluginEndpointData endpointData,
        struct REDABuffer *buffer,
        const struct NDDS_WriterHistory_AllocatorParams *allocatorParams);

    #define CameraImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePluginSupport_copy_data(
        CameraImage *out,
        const CameraImage *in);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_w_params(
        CameraImage *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_ex(
        CameraImage *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data(
        CameraImage *sample);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_print_data(
        const CameraImage *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *out,
        const CameraImage *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImage *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImage *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_deserialize_from_cdr_buffer(
        CameraImage *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlugin_data_to_string(
        const CameraImage *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    CameraImagePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const CameraImage * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlugin_delete(struct PRESTypePlugin *);

    #define CameraImagePlainHelperPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CameraImagePlainHelperPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CameraImagePlainHelperPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CameraImagePlainHelperPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlainHelperPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelperPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPluginSupport_copy_data(
        CameraImagePlainHelper *out,
        const CameraImagePlainHelper *in);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data_w_params(
        CameraImagePlainHelper *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data_ex(
        CameraImagePlainHelper *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_destroy_data(
        CameraImagePlainHelper *sample);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPluginSupport_print_data(
        const CameraImagePlainHelper *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlainHelperPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlainHelperPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlainHelperPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlainHelperPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *out,
        const CameraImagePlainHelper *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImagePlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImagePlainHelper *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImagePlainHelper *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_deserialize_from_cdr_buffer(
        CameraImagePlainHelper *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlainHelperPlugin_data_to_string(
        const CameraImagePlainHelper *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    CameraImagePlainHelperPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const CameraImagePlainHelper * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlainHelperPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlainHelperPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImagePlainHelper *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlainHelperPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlainHelperPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImagePlainHelper *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlainHelperPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlainHelperPlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlainHelperPlugin_delete(struct PRESTypePlugin *);

} /* namespace flat_zero_copy_types  */
namespace zero_copy_types {

    #define ResolutionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ResolutionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ResolutionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ResolutionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ResolutionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPluginSupport_copy_data(
        Resolution *out,
        const Resolution *in);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_w_params(
        Resolution *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_ex(
        Resolution *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data(
        Resolution *sample);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_print_data(
        const Resolution *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ResolutionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ResolutionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ResolutionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *out,
        const Resolution *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Resolution *sample); 

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Resolution *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Resolution **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_deserialize_from_cdr_buffer(
        Resolution *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ResolutionPlugin_data_to_string(
        const Resolution *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ResolutionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Resolution ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ResolutionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ResolutionPlugin_new(void);

    NDDSUSERDllExport extern void
    ResolutionPlugin_delete(struct PRESTypePlugin *);

    #define CameraImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CameraImagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CameraImagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CameraImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePluginSupport_copy_data(
        CameraImage *out,
        const CameraImage *in);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_w_params(
        CameraImage *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_ex(
        CameraImage *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data(
        CameraImage *sample);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_print_data(
        const CameraImage *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *out,
        const CameraImage *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImage *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImage *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_deserialize_from_cdr_buffer(
        CameraImage *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlugin_data_to_string(
        const CameraImage *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    CameraImagePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const CameraImage * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const CameraImage *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlugin_delete(struct PRESTypePlugin *);

} /* namespace zero_copy_types  */
namespace plain_types {

    #define ResolutionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ResolutionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ResolutionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ResolutionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ResolutionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Resolution*
    ResolutionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPluginSupport_copy_data(
        Resolution *out,
        const Resolution *in);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_w_params(
        Resolution *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data_ex(
        Resolution *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_destroy_data(
        Resolution *sample);

    NDDSUSERDllExport extern void 
    ResolutionPluginSupport_print_data(
        const Resolution *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ResolutionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ResolutionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ResolutionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ResolutionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Resolution *out,
        const Resolution *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Resolution *sample); 

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Resolution *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Resolution **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ResolutionPlugin_deserialize_from_cdr_buffer(
        Resolution *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ResolutionPlugin_data_to_string(
        const Resolution *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ResolutionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ResolutionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ResolutionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Resolution ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *ResolutionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ResolutionPlugin_new(void);

    NDDSUSERDllExport extern void
    ResolutionPlugin_delete(struct PRESTypePlugin *);

    #define CameraImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define CameraImagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define CameraImagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define CameraImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define CameraImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern CameraImage*
    CameraImagePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePluginSupport_copy_data(
        CameraImage *out,
        const CameraImage *in);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_w_params(
        CameraImage *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data_ex(
        CameraImage *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_destroy_data(
        CameraImage *sample);

    NDDSUSERDllExport extern void 
    CameraImagePluginSupport_print_data(
        const CameraImage *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    CameraImagePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    CameraImagePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    CameraImagePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    CameraImagePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage *out,
        const CameraImage *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const CameraImage *sample); 

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const CameraImage *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    CameraImagePlugin_deserialize_from_cdr_buffer(
        CameraImage *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    CameraImagePlugin_data_to_string(
        const CameraImage *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    CameraImagePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CameraImagePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    CameraImagePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        CameraImage ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *CameraImagePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    CameraImagePlugin_new(void);

    NDDSUSERDllExport extern void
    CameraImagePlugin_delete(struct PRESTypePlugin *);

} /* namespace plain_types  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraImagePlugin_787822959_h */

