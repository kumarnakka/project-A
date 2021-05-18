/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneSection.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneSection_1294706502_h
#define LaneSection_1294706502_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Lane.h"

namespace adas_dds {

    extern const char *LaneSectionTYPENAME;

    struct LaneSectionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneSectionTypeSupport;
    class LaneSectionDataWriter;
    class LaneSectionDataReader;
    #endif
    class LaneSection 
    {
      public:
        typedef struct LaneSectionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneSectionTypeSupport TypeSupport;
        typedef LaneSectionDataWriter DataWriter;
        typedef LaneSectionDataReader DataReader;
        #endif

        DDS_Long   id ;
        adas_dds::LaneSeq  lanes ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneSection_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneSection_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneSection_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneSection
    #define TSeq LaneSectionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneSection
    #define TSeq LaneSectionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneSection*
    LaneSection_create();

    NDDSUSERDllExport extern void
    LaneSection_delete(LaneSection* sample);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize(
        LaneSection* self);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize_ex(
        LaneSection* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize_w_params(
        LaneSection* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneSection_finalize(
        LaneSection* self);

    NDDSUSERDllExport
    RTIBool LaneSection_finalize_w_return(
        LaneSection* self);

    NDDSUSERDllExport
    void LaneSection_finalize_ex(
        LaneSection* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneSection_finalize_w_params(
        LaneSection* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneSection_finalize_optional_members(
        LaneSection* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneSection_copy(
        LaneSection* dst,
        const LaneSection* src);

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

#endif /* LaneSection */

