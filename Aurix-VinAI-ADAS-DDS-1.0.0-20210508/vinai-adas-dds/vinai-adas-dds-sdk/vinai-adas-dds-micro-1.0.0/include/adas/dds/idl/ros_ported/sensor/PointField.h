/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointField.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PointField_1773016523_h
#define PointField_1773016523_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    namespace sensor_msgs {

        typedef enum PointField_DataType
        {
            NONE ,      
            INT8 ,      
            UINT8 ,      
            INT16 ,      
            UINT16 ,      
            INT32 ,      
            UINT32 ,      
            FLOAT32 ,      
            FLOAT64      
        } PointField_DataType;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PointField_DataType_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PointField_DataType_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointField_DataType_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T PointField_DataType
        #define TSeq PointField_DataTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T PointField_DataType
        #define TSeq PointField_DataTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern PointField_DataType*
        PointField_DataType_create();

        NDDSUSERDllExport extern void
        PointField_DataType_delete(PointField_DataType* sample);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize(
            PointField_DataType* self);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize_ex(
            PointField_DataType* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize_w_params(
            PointField_DataType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PointField_DataType_finalize(
            PointField_DataType* self);

        NDDSUSERDllExport
        RTIBool PointField_DataType_finalize_w_return(
            PointField_DataType* self);

        NDDSUSERDllExport
        void PointField_DataType_finalize_ex(
            PointField_DataType* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PointField_DataType_finalize_w_params(
            PointField_DataType* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PointField_DataType_finalize_optional_members(
            PointField_DataType* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PointField_DataType_copy(
            PointField_DataType* dst,
            const PointField_DataType* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *PointFieldTYPENAME;

        struct PointFieldSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PointFieldTypeSupport;
        class PointFieldDataWriter;
        class PointFieldDataReader;
        #endif
        class PointField 
        {
          public:
            typedef struct PointFieldSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PointFieldTypeSupport TypeSupport;
            typedef PointFieldDataWriter DataWriter;
            typedef PointFieldDataReader DataReader;
            #endif

            DDS_String   name ;
            DDS_UnsignedLong   offset ;
            DDS_Octet   datatype ;
            DDS_UnsignedLong   count ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PointField_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PointField_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointField_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T PointField
        #define TSeq PointFieldSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T PointField
        #define TSeq PointFieldSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern PointField*
        PointField_create();

        NDDSUSERDllExport extern void
        PointField_delete(PointField* sample);

        NDDSUSERDllExport
        RTIBool PointField_initialize(
            PointField* self);

        NDDSUSERDllExport
        RTIBool PointField_initialize_ex(
            PointField* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PointField_initialize_w_params(
            PointField* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PointField_finalize(
            PointField* self);

        NDDSUSERDllExport
        RTIBool PointField_finalize_w_return(
            PointField* self);

        NDDSUSERDllExport
        void PointField_finalize_ex(
            PointField* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PointField_finalize_w_params(
            PointField* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PointField_finalize_optional_members(
            PointField* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PointField_copy(
            PointField* dst,
            const PointField* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace sensor_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PointField */

