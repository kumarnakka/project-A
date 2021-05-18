/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef SampledLines_711636351_h
#define SampledLines_711636351_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T SampledLines
    #define TSeq SampledLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T SampledLines
    #define TSeq SampledLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern SampledLines*
    SampledLines_create();

    NDDSUSERDllExport extern void
    SampledLines_delete(SampledLines* sample);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize(
        SampledLines* self);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize_ex(
        SampledLines* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SampledLines_initialize_w_params(
        SampledLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SampledLines_finalize(
        SampledLines* self);

    NDDSUSERDllExport
    RTIBool SampledLines_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SampledLines */

