

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneSection.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneSection_1294706502_h
#define LaneSection_1294706502_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneSection_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneSectionSeq, LaneSection);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize(
        LaneSection* self);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize_ex(
        LaneSection* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneSection_initialize_w_params(
        LaneSection* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneSection_finalize_w_return(
        LaneSection* self);

    NDDSUSERDllExport
    void LaneSection_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::LaneSection> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneSection */

