

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YieldSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef YieldSign_508343277_h
#define YieldSign_508343277_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../common/Point3.h"
#include "../../ros_ported/geometry/Pose.h"
namespace adas_dds {

    extern const char *YieldSignTYPENAME;

    struct YieldSignSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class YieldSignTypeSupport;
    class YieldSignDataWriter;
    class YieldSignDataReader;
    #endif
    class YieldSign 
    {
      public:
        typedef struct YieldSignSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef YieldSignTypeSupport TypeSupport;
        typedef YieldSignDataWriter DataWriter;
        typedef YieldSignDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Boolean   is_detected ;
        adas_dds::Point3Seq  raw_data ;
        adas_dds::geometry_msgs::Pose   pose ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* YieldSign_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *YieldSign_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *YieldSign_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *YieldSign_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(YieldSignSeq, YieldSign);

    NDDSUSERDllExport
    RTIBool YieldSign_initialize(
        YieldSign* self);

    NDDSUSERDllExport
    RTIBool YieldSign_initialize_ex(
        YieldSign* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool YieldSign_initialize_w_params(
        YieldSign* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool YieldSign_finalize_w_return(
        YieldSign* self);

    NDDSUSERDllExport
    void YieldSign_finalize(
        YieldSign* self);

    NDDSUSERDllExport
    void YieldSign_finalize_ex(
        YieldSign* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void YieldSign_finalize_w_params(
        YieldSign* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void YieldSign_finalize_optional_members(
        YieldSign* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool YieldSign_copy(
        YieldSign* dst,
        const YieldSign* src);

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
        struct type_code<adas_dds::YieldSign> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* YieldSign */

