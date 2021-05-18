/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Vector3Plugin_2087827963_h
#define Vector3Plugin_2087827963_h

#include "Vector3.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    namespace geometry_msgs {

        struct Vector3TypePlugin;

        NDDSUSERDllExport extern RTI_BOOL
        Vector3TypePlugin_delete(struct DDS_TypePlugin *self);

        NDDSUSERDllExport extern struct DDS_TypePlugin*
        Vector3WriterTypePlugin_create(
            DDS_DomainParticipant *participant,
            struct DDS_DomainParticipantQos *dp_qos,
            DDS_DataWriter *writer,
            struct DDS_DataWriterQos *qos,
            struct DDS_TypePluginProperty *property);

        NDDSUSERDllExport extern struct DDS_TypePlugin*
        Vector3ReaderTypePlugin_create(
            DDS_DomainParticipant *participant,
            struct DDS_DomainParticipantQos *dp_qos,
            DDS_DataReader *reader,
            struct DDS_DataReaderQos *qos,
            struct DDS_TypePluginProperty *property);

        NDDSUSERDllExport extern struct DDS_TypePluginI*
        Vector3TypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        Vector3TypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        Vector3I_get_key_kind(void);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        Vector3Plugin_create_sample(
            struct DDS_TypePlugin *plugin, void **sample);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        Vector3Plugin_delete_sample(
            struct DDS_TypePlugin *plugin, void *sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        Vector3Plugin_copy_sample(
            struct DDS_TypePlugin *plugin, void *dst, const void *src);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        Vector3_cdr_serialize(
            struct DDS_TypePlugin *plugin, 
            struct CDR_Stream_t *stream, 
            const void *void_sample,
            DDS_InstanceHandle_t *destination);

        NDDSUSERDllExport extern RTI_BOOL 
        Vector3_cdr_deserialize(
            struct DDS_TypePlugin *plugin,
            void *void_sample,
            struct CDR_Stream_t *stream,
            DDS_InstanceHandle_t *source); 

        NDDSUSERDllExport extern RTI_UINT32
        Vector3_get_serialized_sample_size(
            struct DDS_TypePlugin *plugin,
            RTI_UINT32 current_alignment);
        /* Unkeyed type key serialization equivalent to sample serialization */
        #define Vector3_cdr_serialize_key Vector3_cdr_serialize
        #define Vector3_cdr_deserialize_key Vector3_cdr_deserialize
        #define Vector3_get_serialized_key_size Vector3_get_serialized_sample_size

    } /* namespace geometry_msgs  */

} /* namespace adas_dds  */

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Vector3Plugin_2087827963_h */

