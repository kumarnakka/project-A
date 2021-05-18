/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeaturePoints.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef FeaturePoints_1646235536_h
#define FeaturePoints_1646235536_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "FeaturePoint.h"

namespace adas_dds {

    extern const char *FeaturePointsTYPENAME;

    struct FeaturePointsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class FeaturePointsTypeSupport;
    class FeaturePointsDataWriter;
    class FeaturePointsDataReader;
    #endif
    class FeaturePoints 
    {
      public:
        typedef struct FeaturePointsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef FeaturePointsTypeSupport TypeSupport;
        typedef FeaturePointsDataWriter DataWriter;
        typedef FeaturePointsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::FeaturePointSeq  features ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* FeaturePoints_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FeaturePoints_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FeaturePoints_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T FeaturePoints
    #define TSeq FeaturePointsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T FeaturePoints
    #define TSeq FeaturePointsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern FeaturePoints*
    FeaturePoints_create();

    NDDSUSERDllExport extern void
    FeaturePoints_delete(FeaturePoints* sample);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize(
        FeaturePoints* self);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize_ex(
        FeaturePoints* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize_w_params(
        FeaturePoints* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FeaturePoints_finalize(
        FeaturePoints* self);

    NDDSUSERDllExport
    RTIBool FeaturePoints_finalize_w_return(
        FeaturePoints* self);

    NDDSUSERDllExport
    void FeaturePoints_finalize_ex(
        FeaturePoints* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FeaturePoints_finalize_w_params(
        FeaturePoints* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FeaturePoints_finalize_optional_members(
        FeaturePoints* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FeaturePoints_copy(
        FeaturePoints* dst,
        const FeaturePoints* src);

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

#endif /* FeaturePoints */

