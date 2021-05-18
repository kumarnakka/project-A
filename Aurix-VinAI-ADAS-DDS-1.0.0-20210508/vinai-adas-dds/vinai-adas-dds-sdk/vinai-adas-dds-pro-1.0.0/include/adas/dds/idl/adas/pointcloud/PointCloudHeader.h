

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloudHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloudHeader_514698463_h
#define PointCloudHeader_514698463_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/geometry/Pose.h"
namespace adas_dds {

    extern const char *PointCloudHeaderTYPENAME;

    struct PointCloudHeaderSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointCloudHeaderTypeSupport;
    class PointCloudHeaderDataWriter;
    class PointCloudHeaderDataReader;
    #endif
    class PointCloudHeader 
    {
      public:
        typedef struct PointCloudHeaderSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointCloudHeaderTypeSupport TypeSupport;
        typedef PointCloudHeaderDataWriter DataWriter;
        typedef PointCloudHeaderDataReader DataReader;
        #endif

        DDS_UnsignedLong   width ;
        DDS_UnsignedLong   height ;
        DDS_Boolean   is_dense ;
        adas_dds::geometry_msgs::Pose   pose ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointCloudHeader_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointCloudHeader_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudHeader_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudHeader_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PointCloudHeaderSeq, PointCloudHeader);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize(
        PointCloudHeader* self);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize_ex(
        PointCloudHeader* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize_w_params(
        PointCloudHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointCloudHeader_finalize_w_return(
        PointCloudHeader* self);

    NDDSUSERDllExport
    void PointCloudHeader_finalize(
        PointCloudHeader* self);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_ex(
        PointCloudHeader* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_w_params(
        PointCloudHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_optional_members(
        PointCloudHeader* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointCloudHeader_copy(
        PointCloudHeader* dst,
        const PointCloudHeader* src);

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
        struct type_code<adas_dds::PointCloudHeader> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PointCloudHeader */

