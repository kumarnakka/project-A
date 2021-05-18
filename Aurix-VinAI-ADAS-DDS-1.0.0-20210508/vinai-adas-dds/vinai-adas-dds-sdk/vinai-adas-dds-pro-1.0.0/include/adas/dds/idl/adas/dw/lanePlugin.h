

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from lane.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef lanePlugin_1617544613_h
#define lanePlugin_1617544613_h

#include "lane.h"

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
    namespace dw {

        #define PointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Point*
        PointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Point*
        PointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Point*
        PointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PointPluginSupport_copy_data(
            Point *out,
            const Point *in);

        NDDSUSERDllExport extern void 
        PointPluginSupport_destroy_data_w_params(
            Point *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PointPluginSupport_destroy_data_ex(
            Point *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PointPluginSupport_destroy_data(
            Point *sample);

        NDDSUSERDllExport extern void 
        PointPluginSupport_print_data(
            const Point *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Point *out,
            const Point *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Point *sample); 

        NDDSUSERDllExport extern RTIBool
        PointPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Point *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Point **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PointPlugin_deserialize_from_cdr_buffer(
            Point *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PointPlugin_data_to_string(
            const Point *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Point ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PointPlugin_get_programs();

        #define LanePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LanePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LanePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LanePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LanePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Lane*
        LanePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Lane*
        LanePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Lane*
        LanePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LanePluginSupport_copy_data(
            Lane *out,
            const Lane *in);

        NDDSUSERDllExport extern void 
        LanePluginSupport_destroy_data_w_params(
            Lane *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LanePluginSupport_destroy_data_ex(
            Lane *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LanePluginSupport_destroy_data(
            Lane *sample);

        NDDSUSERDllExport extern void 
        LanePluginSupport_print_data(
            const Lane *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LanePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LanePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LanePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LanePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LanePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Lane *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LanePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Lane *out,
            const Lane *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LanePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Lane *sample); 

        NDDSUSERDllExport extern RTIBool
        LanePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Lane *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        LanePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Lane **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        LanePlugin_deserialize_from_cdr_buffer(
            Lane *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LanePlugin_data_to_string(
            const Lane *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LanePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LanePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LanePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LanePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LanePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Lane ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *LanePlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LanePlugin_new(void);

        NDDSUSERDllExport extern void
        LanePlugin_delete(struct PRESTypePlugin *);

    } /* namespace dw  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* lanePlugin_1617544613_h */

