/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneId_1216626773_h
#define LaneId_1216626773_h

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

namespace adas_dds {

    extern const char *LaneIdTYPENAME;

    struct LaneIdSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneIdTypeSupport;
    class LaneIdDataWriter;
    class LaneIdDataReader;
    #endif
    class LaneId 
    {
      public:
        typedef struct LaneIdSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneIdTypeSupport TypeSupport;
        typedef LaneIdDataWriter DataWriter;
        typedef LaneIdDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_CharSeq  lane_idx ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneId_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneId
    #define TSeq LaneIdSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneId
    #define TSeq LaneIdSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneId*
    LaneId_create();

    NDDSUSERDllExport extern void
    LaneId_delete(LaneId* sample);

    NDDSUSERDllExport
    RTIBool LaneId_initialize(
        LaneId* self);

    NDDSUSERDllExport
    RTIBool LaneId_initialize_ex(
        LaneId* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneId_initialize_w_params(
        LaneId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneId_finalize(
        LaneId* self);

    NDDSUSERDllExport
    RTIBool LaneId_finalize_w_return(
        LaneId* self);

    NDDSUSERDllExport
    void LaneId_finalize_ex(
        LaneId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneId_finalize_w_params(
        LaneId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneId_finalize_optional_members(
        LaneId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneId_copy(
        LaneId* dst,
        const LaneId* src);

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

#endif /* LaneId */

