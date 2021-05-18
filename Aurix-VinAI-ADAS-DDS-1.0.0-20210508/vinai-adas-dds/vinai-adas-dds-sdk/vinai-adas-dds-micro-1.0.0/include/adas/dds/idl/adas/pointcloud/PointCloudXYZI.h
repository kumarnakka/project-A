/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloudXYZI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PointCloudXYZI_1655463097_h
#define PointCloudXYZI_1655463097_h

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

#include "PointXYZI.h"

#include "PointCloudHeader.h"

namespace adas_dds {

    extern const char *PointCloudXYZITYPENAME;

    struct PointCloudXYZISeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointCloudXYZITypeSupport;
    class PointCloudXYZIDataWriter;
    class PointCloudXYZIDataReader;
    #endif
    class PointCloudXYZI 
    {
      public:
        typedef struct PointCloudXYZISeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointCloudXYZITypeSupport TypeSupport;
        typedef PointCloudXYZIDataWriter DataWriter;
        typedef PointCloudXYZIDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::PointCloudHeader   pcd_header ;
        adas_dds::PointXYZISeq  data ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointCloudXYZI_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointCloudXYZI_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudXYZI_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T PointCloudXYZI
    #define TSeq PointCloudXYZISeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T PointCloudXYZI
    #define TSeq PointCloudXYZISeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern PointCloudXYZI*
    PointCloudXYZI_create();

    NDDSUSERDllExport extern void
    PointCloudXYZI_delete(PointCloudXYZI* sample);

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_initialize(
        PointCloudXYZI* self);

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_initialize_ex(
        PointCloudXYZI* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_initialize_w_params(
        PointCloudXYZI* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_finalize(
        PointCloudXYZI* self);

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_finalize_w_return(
        PointCloudXYZI* self);

    NDDSUSERDllExport
    void PointCloudXYZI_finalize_ex(
        PointCloudXYZI* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointCloudXYZI_finalize_w_params(
        PointCloudXYZI* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointCloudXYZI_finalize_optional_members(
        PointCloudXYZI* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointCloudXYZI_copy(
        PointCloudXYZI* dst,
        const PointCloudXYZI* src);

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

#endif /* PointCloudXYZI */

