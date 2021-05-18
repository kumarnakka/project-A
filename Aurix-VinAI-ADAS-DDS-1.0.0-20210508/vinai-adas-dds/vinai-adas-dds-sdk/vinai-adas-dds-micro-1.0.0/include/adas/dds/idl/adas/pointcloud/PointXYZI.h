/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointXYZI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PointXYZI_830974386_h
#define PointXYZI_830974386_h

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

    extern const char *PointXYZITYPENAME;

    struct PointXYZISeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointXYZITypeSupport;
    class PointXYZIDataWriter;
    class PointXYZIDataReader;
    #endif
    class PointXYZI 
    {
      public:
        typedef struct PointXYZISeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointXYZITypeSupport TypeSupport;
        typedef PointXYZIDataWriter DataWriter;
        typedef PointXYZIDataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   z ;
        DDS_Float   intensity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointXYZI_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointXYZI_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointXYZI_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T PointXYZI
    #define TSeq PointXYZISeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T PointXYZI
    #define TSeq PointXYZISeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern PointXYZI*
    PointXYZI_create();

    NDDSUSERDllExport extern void
    PointXYZI_delete(PointXYZI* sample);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize(
        PointXYZI* self);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize_ex(
        PointXYZI* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize_w_params(
        PointXYZI* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointXYZI_finalize(
        PointXYZI* self);

    NDDSUSERDllExport
    RTIBool PointXYZI_finalize_w_return(
        PointXYZI* self);

    NDDSUSERDllExport
    void PointXYZI_finalize_ex(
        PointXYZI* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointXYZI_finalize_w_params(
        PointXYZI* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointXYZI_finalize_optional_members(
        PointXYZI* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointXYZI_copy(
        PointXYZI* dst,
        const PointXYZI* src);

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

#endif /* PointXYZI */

