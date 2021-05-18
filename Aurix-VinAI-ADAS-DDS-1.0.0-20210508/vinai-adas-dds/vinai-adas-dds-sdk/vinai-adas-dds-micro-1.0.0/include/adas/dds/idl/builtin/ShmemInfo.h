/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShmemInfo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ShmemInfo_1787268623_h
#define ShmemInfo_1787268623_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    extern const char *ShmemInfoTYPENAME;

    struct ShmemInfoSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ShmemInfoTypeSupport;
    class ShmemInfoDataWriter;
    class ShmemInfoDataReader;
    #endif
    class ShmemInfo 
    {
      public:
        typedef struct ShmemInfoSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ShmemInfoTypeSupport TypeSupport;
        typedef ShmemInfoDataWriter DataWriter;
        typedef ShmemInfoDataReader DataReader;
        #endif

        DDS_UnsignedLong   id ;
        DDS_UnsignedLong   timestamp ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ShmemInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ShmemInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShmemInfo_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ShmemInfo
    #define TSeq ShmemInfoSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ShmemInfo
    #define TSeq ShmemInfoSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ShmemInfo*
    ShmemInfo_create();

    NDDSUSERDllExport extern void
    ShmemInfo_delete(ShmemInfo* sample);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize(
        ShmemInfo* self);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize_ex(
        ShmemInfo* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize_w_params(
        ShmemInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ShmemInfo_finalize(
        ShmemInfo* self);

    NDDSUSERDllExport
    RTIBool ShmemInfo_finalize_w_return(
        ShmemInfo* self);

    NDDSUSERDllExport
    void ShmemInfo_finalize_ex(
        ShmemInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ShmemInfo_finalize_w_params(
        ShmemInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ShmemInfo_finalize_optional_members(
        ShmemInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ShmemInfo_copy(
        ShmemInfo* dst,
        const ShmemInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ShmemImageTYPENAME;

    struct ShmemImageSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ShmemImageTypeSupport;
    class ShmemImageDataWriter;
    class ShmemImageDataReader;
    #endif
    class ShmemImage 
    {
      public:
        typedef struct ShmemImageSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ShmemImageTypeSupport TypeSupport;
        typedef ShmemImageDataWriter DataWriter;
        typedef ShmemImageDataReader DataReader;
        #endif

        DDS_UnsignedLong   seq ;
        DDS_LongLong   timestamp ;
        DDS_Char   encoding [8];
        DDS_UnsignedShort   width ;
        DDS_UnsignedShort   height ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ShmemImage_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ShmemImage_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShmemImage_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ShmemImage
    #define TSeq ShmemImageSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ShmemImage
    #define TSeq ShmemImageSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ShmemImage*
    ShmemImage_create();

    NDDSUSERDllExport extern void
    ShmemImage_delete(ShmemImage* sample);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize(
        ShmemImage* self);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize_ex(
        ShmemImage* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize_w_params(
        ShmemImage* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ShmemImage_finalize(
        ShmemImage* self);

    NDDSUSERDllExport
    RTIBool ShmemImage_finalize_w_return(
        ShmemImage* self);

    NDDSUSERDllExport
    void ShmemImage_finalize_ex(
        ShmemImage* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ShmemImage_finalize_w_params(
        ShmemImage* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ShmemImage_finalize_optional_members(
        ShmemImage* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ShmemImage_copy(
        ShmemImage* dst,
        const ShmemImage* src);

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

#endif /* ShmemInfo */

