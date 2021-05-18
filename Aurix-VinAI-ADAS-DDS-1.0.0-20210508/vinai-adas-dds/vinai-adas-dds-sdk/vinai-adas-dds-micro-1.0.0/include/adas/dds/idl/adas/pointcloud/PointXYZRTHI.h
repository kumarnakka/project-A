/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointXYZRTHI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PointXYZRTHI_1834259240_h
#define PointXYZRTHI_1834259240_h

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

    extern const char *PointXYZRTHITYPENAME;

    struct PointXYZRTHISeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointXYZRTHITypeSupport;
    class PointXYZRTHIDataWriter;
    class PointXYZRTHIDataReader;
    #endif
    class PointXYZRTHI 
    {
      public:
        typedef struct PointXYZRTHISeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointXYZRTHITypeSupport TypeSupport;
        typedef PointXYZRTHIDataWriter DataWriter;
        typedef PointXYZRTHIDataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   z ;
        DDS_Float   r2 ;
        DDS_Float   theta ;
        DDS_Float   h ;
        DDS_Float   intensity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointXYZRTHI_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointXYZRTHI_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointXYZRTHI_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T PointXYZRTHI
    #define TSeq PointXYZRTHISeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T PointXYZRTHI
    #define TSeq PointXYZRTHISeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern PointXYZRTHI*
    PointXYZRTHI_create();

    NDDSUSERDllExport extern void
    PointXYZRTHI_delete(PointXYZRTHI* sample);

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_initialize(
        PointXYZRTHI* self);

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_initialize_ex(
        PointXYZRTHI* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_initialize_w_params(
        PointXYZRTHI* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_finalize(
        PointXYZRTHI* self);

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_finalize_w_return(
        PointXYZRTHI* self);

    NDDSUSERDllExport
    void PointXYZRTHI_finalize_ex(
        PointXYZRTHI* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointXYZRTHI_finalize_w_params(
        PointXYZRTHI* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointXYZRTHI_finalize_optional_members(
        PointXYZRTHI* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointXYZRTHI_copy(
        PointXYZRTHI* dst,
        const PointXYZRTHI* src);

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

#endif /* PointXYZRTHI */

