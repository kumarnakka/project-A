/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloudHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PointCloudHeader_514698463_h
#define PointCloudHeader_514698463_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../../ros_ported/geometry/Pose.h"

namespace adas_dds {

    extern const char *PointCloudHeaderTYPENAME;

    struct PointCloudHeaderSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointCloudHeaderTypeSupport;
    class PointCloudHeaderDataWriter;
    class PointCloudHeaderDataReader;
    #endif
    class PointCloudHeader 
    {
      public:
        typedef struct PointCloudHeaderSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointCloudHeaderTypeSupport TypeSupport;
        typedef PointCloudHeaderDataWriter DataWriter;
        typedef PointCloudHeaderDataReader DataReader;
        #endif

        DDS_UnsignedLong   width ;
        DDS_UnsignedLong   height ;
        DDS_Boolean   is_dense ;
        adas_dds::geometry_msgs::Pose   pose ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointCloudHeader_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointCloudHeader_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointCloudHeader_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T PointCloudHeader
    #define TSeq PointCloudHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T PointCloudHeader
    #define TSeq PointCloudHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern PointCloudHeader*
    PointCloudHeader_create();

    NDDSUSERDllExport extern void
    PointCloudHeader_delete(PointCloudHeader* sample);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize(
        PointCloudHeader* self);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize_ex(
        PointCloudHeader* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_initialize_w_params(
        PointCloudHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointCloudHeader_finalize(
        PointCloudHeader* self);

    NDDSUSERDllExport
    RTIBool PointCloudHeader_finalize_w_return(
        PointCloudHeader* self);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_ex(
        PointCloudHeader* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_w_params(
        PointCloudHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointCloudHeader_finalize_optional_members(
        PointCloudHeader* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointCloudHeader_copy(
        PointCloudHeader* dst,
        const PointCloudHeader* src);

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

#endif /* PointCloudHeader */

