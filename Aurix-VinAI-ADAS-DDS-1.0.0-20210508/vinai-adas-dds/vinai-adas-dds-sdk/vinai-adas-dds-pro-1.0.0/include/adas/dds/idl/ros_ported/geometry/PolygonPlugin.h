

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PolygonPlugin_634212533_h
#define PolygonPlugin_634212533_h

#include "Polygon.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "Point32Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace geometry_msgs {

        #define PolygonPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PolygonPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PolygonPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PolygonPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PolygonPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Polygon*
        PolygonPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Polygon*
        PolygonPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Polygon*
        PolygonPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PolygonPluginSupport_copy_data(
            Polygon *out,
            const Polygon *in);

        NDDSUSERDllExport extern void 
        PolygonPluginSupport_destroy_data_w_params(
            Polygon *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PolygonPluginSupport_destroy_data_ex(
            Polygon *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PolygonPluginSupport_destroy_data(
            Polygon *sample);

        NDDSUSERDllExport extern void 
        PolygonPluginSupport_print_data(
            const Polygon *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        PolygonPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        PolygonPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        PolygonPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        PolygonPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        PolygonPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Polygon *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        PolygonPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Polygon *out,
            const Polygon *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PolygonPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Polygon *sample); 

        NDDSUSERDllExport extern RTIBool
        PolygonPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Polygon *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        PolygonPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Polygon **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        PolygonPlugin_deserialize_from_cdr_buffer(
            Polygon *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PolygonPlugin_data_to_string(
            const Polygon *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PolygonPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PolygonPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PolygonPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PolygonPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PolygonPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Polygon ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *PolygonPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        PolygonPlugin_new(void);

        NDDSUSERDllExport extern void
        PolygonPlugin_delete(struct PRESTypePlugin *);

    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PolygonPlugin_634212533_h */

