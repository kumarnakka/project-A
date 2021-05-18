

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloudXYZRTHI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloudXYZRTHI_24501177_h
#define PointCloudXYZRTHI_24501177_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "PointXYZRTHI.h"
#include "PointCloudHeader.h"
namespace adas_dds {

    extern const char *PointCloudXYZRTHITYPENAME;

    struct PointCloudXYZRTHISeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointCloudXYZRTHITypeSupport;
    class PointCloudXYZRTHIDataWriter;
    class PointCloudXYZRTHIDataReader;
    #endif
    class PointCloudXYZRTHI 
    {
      public:
        typedef struct PointCloudXYZRTHISeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointCloudXYZRTHITypeSupport TypeSupport;
        typedef PointCloudXYZRTHIDataWriter DataWriter;
        typedef PointCloudXYZRTHIDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::PointCloudHeader   pcd_header ;
        adas_dds::PointXYZRTHISeq  data ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointCloudXYZRTHI_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointCloudXYZRTHI_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudXYZRTHI_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudXYZRTHI_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PointCloudXYZRTHISeq, PointCloudXYZRTHI);

    NDDSUSERDllExport
    RTIBool PointCloudXYZRTHI_initialize(
        PointCloudXYZRTHI* self);

    NDDSUSERDllExport
    RTIBool PointCloudXYZRTHI_initialize_ex(
        PointCloudXYZRTHI* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointCloudXYZRTHI_initialize_w_params(
        PointCloudXYZRTHI* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointCloudXYZRTHI_finalize_w_return(
        PointCloudXYZRTHI* self);

    NDDSUSERDllExport
    void PointCloudXYZRTHI_finalize(
        PointCloudXYZRTHI* self);

    NDDSUSERDllExport
    void PointCloudXYZRTHI_finalize_ex(
        PointCloudXYZRTHI* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointCloudXYZRTHI_finalize_w_params(
        PointCloudXYZRTHI* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointCloudXYZRTHI_finalize_optional_members(
        PointCloudXYZRTHI* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointCloudXYZRTHI_copy(
        PointCloudXYZRTHI* dst,
        const PointCloudXYZRTHI* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::PointCloudXYZRTHI> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PointCloudXYZRTHI */

