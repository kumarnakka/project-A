

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SampledLines_711636351_h
#define SampledLines_711636351_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "SampledLine.h"
namespace adas_dds {

    extern const char *SampledLinesTYPENAME;

    struct SampledLinesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class SampledLinesTypeSupport;
    class SampledLinesDataWriter;
    class SampledLinesDataReader;
    #endif
    class SampledLines 
    {
      public:
        typedef struct SampledLinesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef SampledLinesTypeSupport TypeSupport;
        typedef SampledLinesDataWriter DataWriter;
        typedef SampledLinesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::SampledLineSeq  sampled_line_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* SampledLines_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SampledLines_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SampledLines_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SampledLines_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SampledLinesSeq, SampledLines);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize(
        SampledLines* self);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize_ex(
        SampledLines* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize_w_params(
        SampledLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SampledLines_finalize_w_return(
        SampledLines* self);

    NDDSUSERDllExport
    void SampledLines_finalize(
        SampledLines* self);

    NDDSUSERDllExport
    void SampledLines_finalize_ex(
        SampledLines* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SampledLines_finalize_w_params(
        SampledLines* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SampledLines_finalize_optional_members(
        SampledLines* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SampledLines_copy(
        SampledLines* dst,
        const SampledLines* src);

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
        struct type_code<adas_dds::SampledLines> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SampledLines */

