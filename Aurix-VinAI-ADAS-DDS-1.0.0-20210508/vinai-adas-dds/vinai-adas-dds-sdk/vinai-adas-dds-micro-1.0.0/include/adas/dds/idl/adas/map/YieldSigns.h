/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YieldSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef YieldSigns_1483209489_h
#define YieldSigns_1483209489_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "YieldSign.h"

namespace adas_dds {

    extern const char *YieldSignsTYPENAME;

    struct YieldSignsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class YieldSignsTypeSupport;
    class YieldSignsDataWriter;
    class YieldSignsDataReader;
    #endif
    class YieldSigns 
    {
      public:
        typedef struct YieldSignsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef YieldSignsTypeSupport TypeSupport;
        typedef YieldSignsDataWriter DataWriter;
        typedef YieldSignsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::YieldSignSeq  yield_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* YieldSigns_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *YieldSigns_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *YieldSigns_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T YieldSigns
    #define TSeq YieldSignsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T YieldSigns
    #define TSeq YieldSignsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern YieldSigns*
    YieldSigns_create();

    NDDSUSERDllExport extern void
    YieldSigns_delete(YieldSigns* sample);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize(
        YieldSigns* self);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize_ex(
        YieldSigns* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize_w_params(
        YieldSigns* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool YieldSigns_finalize(
        YieldSigns* self);

    NDDSUSERDllExport
    RTIBool YieldSigns_finalize_w_return(
        YieldSigns* self);

    NDDSUSERDllExport
    void YieldSigns_finalize_ex(
        YieldSigns* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void YieldSigns_finalize_w_params(
        YieldSigns* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void YieldSigns_finalize_optional_members(
        YieldSigns* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool YieldSigns_copy(
        YieldSigns* dst,
        const YieldSigns* src);

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

#endif /* YieldSigns */

