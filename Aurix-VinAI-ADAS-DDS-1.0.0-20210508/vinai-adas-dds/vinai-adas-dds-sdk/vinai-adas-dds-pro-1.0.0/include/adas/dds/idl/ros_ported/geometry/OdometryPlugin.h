

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Odometry.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OdometryPlugin_1402260810_h
#define OdometryPlugin_1402260810_h

#include "Odometry.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "../../ros_ported/std/HeaderPlugin.h"
#include "PoseWithCovariancePlugin.h"
#include "TwistWithCovariancePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {
    namespace nav_msgs {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct Odometry
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct Odometry)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * Odometry must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct Odometry.
        */
        typedef  class Odometry OdometryKeyHolder;

        #define OdometryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define OdometryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define OdometryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define OdometryPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define OdometryPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define OdometryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define OdometryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Odometry*
        OdometryPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Odometry*
        OdometryPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Odometry*
        OdometryPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        OdometryPluginSupport_copy_data(
            Odometry *out,
            const Odometry *in);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_destroy_data_w_params(
            Odometry *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_destroy_data_ex(
            Odometry *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_destroy_data(
            Odometry *sample);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_print_data(
            const Odometry *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern Odometry*
        OdometryPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Odometry*
        OdometryPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_destroy_key_ex(
            OdometryKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        OdometryPluginSupport_destroy_key(
            OdometryKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        OdometryPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        OdometryPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        OdometryPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        OdometryPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        OdometryPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            Odometry *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Odometry *out,
            const Odometry *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        OdometryPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Odometry *sample); 

        NDDSUSERDllExport extern RTIBool
        OdometryPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const Odometry *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Odometry **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        OdometryPlugin_deserialize_from_cdr_buffer(
            Odometry *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        OdometryPlugin_data_to_string(
            const Odometry *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        OdometryPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        OdometryPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        OdometryPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        OdometryPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Odometry ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            OdometryKeyHolder *key, 
            const Odometry *instance);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            Odometry *instance, 
            const OdometryKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const Odometry *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        OdometryPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms *OdometryPlugin_get_programs();

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        OdometryPlugin_new(void);

        NDDSUSERDllExport extern void
        OdometryPlugin_delete(struct PRESTypePlugin *);

    } /* namespace nav_msgs  */
} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OdometryPlugin_1402260810_h */

