

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Marker.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MarkerPlugin_1187234442_h
#define MarkerPlugin_1187234442_h

#include "Marker.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../std/HeaderPlugin.h"
#include "../geometry/PosePlugin.h"
#include "../geometry/PointPlugin.h"
#include "../geometry/Vector3Plugin.h"
#include "../std/ColorRGBAPlugin.h"
#include "../std/DurationPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace visualization_msgs {

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        Marker_TypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        Marker_TypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Marker_TypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        Marker_TypePluginSupport_print_data(
            const Marker_Type *sample, const char *desc, int indent_level);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        Marker_ActionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        Marker_ActionPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Marker_ActionPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        Marker_ActionPluginSupport_print_data(
            const Marker_Action *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct Marker
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct Marker)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * Marker must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct Marker.
        */
        typedef  class Marker MarkerKeyHolder;

        #define MarkerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define MarkerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define MarkerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define MarkerPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define MarkerPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define MarkerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define MarkerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Marker*
        MarkerPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Marker*
        MarkerPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Marker*
        MarkerPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        MarkerPluginSupport_copy_data(
            Marker *out,
            const Marker *in);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_destroy_data_w_params(
            Marker *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_destroy_data_ex(
            Marker *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_destroy_data(
            Marker *sample);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_print_data(
            const Marker *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern Marker*
        MarkerPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Marker*
        MarkerPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_destroy_key_ex(
            MarkerKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MarkerPluginSupport_destroy_key(
            MarkerKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        MarkerPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        MarkerPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        MarkerPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        MarkerPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        MarkerPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Marker *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Marker *out,
            const Marker *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        MarkerPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Marker *sample); 

        NDDSUSERDllExport extern RTIBool
        MarkerPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Marker *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Marker **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        MarkerPlugin_deserialize_from_cdr_buffer(
            Marker *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        MarkerPlugin_data_to_string(
            const Marker *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        MarkerPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        MarkerPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        MarkerPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MarkerPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Marker ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            MarkerKeyHolder *key, 
            const Marker *instance);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            Marker *instance, 
            const MarkerKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const Marker *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        MarkerPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *MarkerPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        MarkerPlugin_new(void);

        NDDSUSERDllExport extern void
        MarkerPlugin_delete(struct PRESTypePlugin *);

    } /* namespace visualization_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MarkerPlugin_1187234442_h */

