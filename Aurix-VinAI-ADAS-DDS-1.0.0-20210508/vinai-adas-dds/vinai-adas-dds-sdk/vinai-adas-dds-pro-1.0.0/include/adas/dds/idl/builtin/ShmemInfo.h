

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShmemInfo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ShmemInfo_1787268623_h
#define ShmemInfo_1787268623_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShmemInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ShmemInfoSeq, ShmemInfo);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize(
        ShmemInfo* self);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize_ex(
        ShmemInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ShmemInfo_initialize_w_params(
        ShmemInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ShmemInfo_finalize_w_return(
        ShmemInfo* self);

    NDDSUSERDllExport
    void ShmemInfo_finalize(
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShmemImage_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ShmemImageSeq, ShmemImage);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize(
        ShmemImage* self);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize_ex(
        ShmemImage* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ShmemImage_initialize_w_params(
        ShmemImage* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ShmemImage_finalize_w_return(
        ShmemImage* self);

    NDDSUSERDllExport
    void ShmemImage_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::ShmemInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<adas_dds::ShmemImage> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ShmemInfo */

