/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundaries.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneBoundaries_1300971979_h
#define LaneBoundaries_1300971979_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "LaneBoundary.h"

namespace adas_dds {

    extern const char *LaneBoundariesTYPENAME;

    struct LaneBoundariesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundariesTypeSupport;
    class LaneBoundariesDataWriter;
    class LaneBoundariesDataReader;
    #endif
    class LaneBoundaries 
    {
      public:
        typedef struct LaneBoundariesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundariesTypeSupport TypeSupport;
        typedef LaneBoundariesDataWriter DataWriter;
        typedef LaneBoundariesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LaneBoundarySeq  lane_boundary_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundaries_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundaries_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaries_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundaries
    #define TSeq LaneBoundariesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundaries
    #define TSeq LaneBoundariesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneBoundaries*
    LaneBoundaries_create();

    NDDSUSERDllExport extern void
    LaneBoundaries_delete(LaneBoundaries* sample);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize(
        LaneBoundaries* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize_ex(
        LaneBoundaries* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize_w_params(
        LaneBoundaries* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundaries_finalize(
        LaneBoundaries* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_finalize_w_return(
        LaneBoundaries* self);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_ex(
        LaneBoundaries* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_w_params(
        LaneBoundaries* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_optional_members(
        LaneBoundaries* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundaries_copy(
        LaneBoundaries* dst,
        const LaneBoundaries* src);

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

#endif /* LaneBoundaries */

