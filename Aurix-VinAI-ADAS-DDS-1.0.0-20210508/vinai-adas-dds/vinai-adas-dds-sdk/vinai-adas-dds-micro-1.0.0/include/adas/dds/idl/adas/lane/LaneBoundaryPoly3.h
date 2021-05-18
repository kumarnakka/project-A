/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundaryPoly3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LaneBoundaryPoly3_2085621932_h
#define LaneBoundaryPoly3_2085621932_h

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

    extern const char *LaneBoundaryPoly3TYPENAME;

    struct LaneBoundaryPoly3Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundaryPoly3TypeSupport;
    class LaneBoundaryPoly3DataWriter;
    class LaneBoundaryPoly3DataReader;
    #endif
    class LaneBoundaryPoly3 
    {
      public:
        typedef struct LaneBoundaryPoly3Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundaryPoly3TypeSupport TypeSupport;
        typedef LaneBoundaryPoly3DataWriter DataWriter;
        typedef LaneBoundaryPoly3DataReader DataReader;
        #endif

        DDS_Double   coef0 ;
        DDS_Double   coef1 ;
        DDS_Double   coef2 ;
        DDS_Double   coef3 ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundaryPoly3_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundaryPoly3_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaryPoly3_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundaryPoly3
    #define TSeq LaneBoundaryPoly3Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LaneBoundaryPoly3
    #define TSeq LaneBoundaryPoly3Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LaneBoundaryPoly3*
    LaneBoundaryPoly3_create();

    NDDSUSERDllExport extern void
    LaneBoundaryPoly3_delete(LaneBoundaryPoly3* sample);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize_ex(
        LaneBoundaryPoly3* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize_w_params(
        LaneBoundaryPoly3* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_finalize(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_finalize_w_return(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_ex(
        LaneBoundaryPoly3* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_w_params(
        LaneBoundaryPoly3* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_optional_members(
        LaneBoundaryPoly3* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_copy(
        LaneBoundaryPoly3* dst,
        const LaneBoundaryPoly3* src);

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

#endif /* LaneBoundaryPoly3 */

