

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SampledLine_159504655_h
#define SampledLine_159504655_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "LineHeader.h"
#include "../../ros_ported/geometry/Path.h"
namespace adas_dds {

    extern const char *SampledLineTYPENAME;

    struct SampledLineSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class SampledLineTypeSupport;
    class SampledLineDataWriter;
    class SampledLineDataReader;
    #endif
    class SampledLine 
    {
      public:
        typedef struct SampledLineSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef SampledLineTypeSupport TypeSupport;
        typedef SampledLineDataWriter DataWriter;
        typedef SampledLineDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LineHeader   line_header ;
        adas_dds::nav_msgs::Path   single_line ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* SampledLine_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SampledLine_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SampledLine_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SampledLine_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SampledLineSeq, SampledLine);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize(
        SampledLine* self);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize_ex(
        SampledLine* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize_w_params(
        SampledLine* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SampledLine_finalize_w_return(
        SampledLine* self);

    NDDSUSERDllExport
    void SampledLine_finalize(
        SampledLine* self);

    NDDSUSERDllExport
    void SampledLine_finalize_ex(
        SampledLine* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SampledLine_finalize_w_params(
        SampledLine* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SampledLine_finalize_optional_members(
        SampledLine* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SampledLine_copy(
        SampledLine* dst,
        const SampledLine* src);

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
        struct type_code<adas_dds::SampledLine> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SampledLine */

