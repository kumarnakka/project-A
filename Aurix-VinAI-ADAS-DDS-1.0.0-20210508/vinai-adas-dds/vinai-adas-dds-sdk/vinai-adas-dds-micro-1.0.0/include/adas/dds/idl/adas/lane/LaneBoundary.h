/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundary.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneBoundary_2027416843_h
#define LaneBoundary_2027416843_h

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

namespace adas_dds {

    extern const char *LaneBoundaryTYPENAME;

    struct LaneBoundarySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundaryTypeSupport;
    class LaneBoundaryDataWriter;
    class LaneBoundaryDataReader;
    #endif
    class LaneBoundary 
    {
      public:
        typedef struct LaneBoundarySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundaryTypeSupport TypeSupport;
        typedef LaneBoundaryDataWriter DataWriter;
        typedef LaneBoundaryDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LineHeader   line_header ;
        DDS_Float   c0 ;
        DDS_Float   c0_std ;
        DDS_Char   quality ;
        DDS_Float   c1 ;
        DDS_Float   c1_std ;
        DDS_Float   c2 ;
        DDS_Float   c2_std ;
        DDS_Float   c3 ;
        DDS_Float   c3_std ;
        DDS_Float   x_start ;
        DDS_Float   x_end ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundary_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundary_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundary_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundary
    #define TSeq LaneBoundarySeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundary
    #define TSeq LaneBoundarySeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneBoundary*
    LaneBoundary_create();

    NDDSUSERDllExport extern void
    LaneBoundary_delete(LaneBoundary* sample);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize(
        LaneBoundary* self);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize_ex(
        LaneBoundary* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize_w_params(
        LaneBoundary* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundary_finalize(
        LaneBoundary* self);

    NDDSUSERDllExport
    RTIBool LaneBoundary_finalize_w_return(
        LaneBoundary* self);

    NDDSUSERDllExport
    void LaneBoundary_finalize_ex(
        LaneBoundary* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundary_finalize_w_params(
        LaneBoundary* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundary_finalize_optional_members(
        LaneBoundary* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundary_copy(
        LaneBoundary* dst,
        const LaneBoundary* src);

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

#endif /* LaneBoundary */

