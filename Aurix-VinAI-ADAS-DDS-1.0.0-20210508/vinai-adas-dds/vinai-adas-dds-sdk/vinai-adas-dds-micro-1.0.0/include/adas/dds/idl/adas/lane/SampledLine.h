/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SampledLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef SampledLine_159504655_h
#define SampledLine_159504655_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T SampledLine
    #define TSeq SampledLineSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T SampledLine
    #define TSeq SampledLineSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern SampledLine*
    SampledLine_create();

    NDDSUSERDllExport extern void
    SampledLine_delete(SampledLine* sample);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize(
        SampledLine* self);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize_ex(
        SampledLine* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SampledLine_initialize_w_params(
        SampledLine* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SampledLine_finalize(
        SampledLine* self);

    NDDSUSERDllExport
    RTIBool SampledLine_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SampledLine */

