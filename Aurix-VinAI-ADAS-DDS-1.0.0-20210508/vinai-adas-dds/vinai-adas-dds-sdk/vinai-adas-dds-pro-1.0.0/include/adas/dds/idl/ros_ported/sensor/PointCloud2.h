

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud2.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloud2_19004054_h
#define PointCloud2_19004054_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "PointField.h"
namespace adas_dds {
    namespace sensor_msgs {

        extern const char *PointCloud2TYPENAME;

        struct PointCloud2Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class PointCloud2TypeSupport;
        class PointCloud2DataWriter;
        class PointCloud2DataReader;
        #endif
        class PointCloud2 
        {
          public:
            typedef struct PointCloud2Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PointCloud2TypeSupport TypeSupport;
            typedef PointCloud2DataWriter DataWriter;
            typedef PointCloud2DataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_UnsignedLong   height ;
            DDS_UnsignedLong   width ;
            adas_dds::sensor_msgs::PointFieldSeq  fields ;
            DDS_Boolean   is_bigendian ;
            DDS_UnsignedLong   point_step ;
            DDS_UnsignedLong   row_step ;
            DDS_OctetSeq  data ;
            DDS_Boolean   is_dense ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PointCloud2_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PointCloud2_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloud2_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloud2_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PointCloud2Seq, PointCloud2);

        NDDSUSERDllExport
        RTIBool PointCloud2_initialize(
            PointCloud2* self);

        NDDSUSERDllExport
        RTIBool PointCloud2_initialize_ex(
            PointCloud2* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PointCloud2_initialize_w_params(
            PointCloud2* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PointCloud2_finalize_w_return(
            PointCloud2* self);

        NDDSUSERDllExport
        void PointCloud2_finalize(
            PointCloud2* self);

        NDDSUSERDllExport
        void PointCloud2_finalize_ex(
            PointCloud2* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PointCloud2_finalize_w_params(
            PointCloud2* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PointCloud2_finalize_optional_members(
            PointCloud2* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PointCloud2_copy(
            PointCloud2* dst,
            const PointCloud2* src);

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
        struct type_code<adas_dds::sensor_msgs::PointCloud2> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PointCloud2 */

