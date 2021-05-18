

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointField.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointField_1773016523_h
#define PointField_1773016523_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointField_DataType_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PointField_DataTypeSeq, PointField_DataType);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize(
            PointField_DataType* self);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize_ex(
            PointField_DataType* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PointField_DataType_initialize_w_params(
            PointField_DataType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PointField_DataType_finalize_w_return(
            PointField_DataType* self);

        NDDSUSERDllExport
        void PointField_DataType_finalize(
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

            DDS_Char *   name ;
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointField_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PointFieldSeq, PointField);

        NDDSUSERDllExport
        RTIBool PointField_initialize(
            PointField* self);

        NDDSUSERDllExport
        RTIBool PointField_initialize_ex(
            PointField* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PointField_initialize_w_params(
            PointField* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PointField_finalize_w_return(
            PointField* self);

        NDDSUSERDllExport
        void PointField_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::sensor_msgs::PointField> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PointField */

