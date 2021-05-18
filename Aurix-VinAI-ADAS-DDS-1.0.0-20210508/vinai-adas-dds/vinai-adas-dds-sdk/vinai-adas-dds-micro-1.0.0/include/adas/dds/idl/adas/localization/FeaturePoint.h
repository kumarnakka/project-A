/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeaturePoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef FeaturePoint_780179060_h
#define FeaturePoint_780179060_h

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

namespace adas_dds {

    extern const char *FeaturePointTYPENAME;

    struct FeaturePointSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class FeaturePointTypeSupport;
    class FeaturePointDataWriter;
    class FeaturePointDataReader;
    #endif
    class FeaturePoint 
    {
      public:
        typedef struct FeaturePointSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef FeaturePointTypeSupport TypeSupport;
        typedef FeaturePointDataWriter DataWriter;
        typedef FeaturePointDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Long   id ;
        DDS_Float   u ;
        DDS_Float   v ;
        DDS_Float   norm_cam_px ;
        DDS_Float   norm_cam_py ;
        DDS_Float   norm_cam_pz ;
        DDS_Float   norm_cam_vx ;
        DDS_Float   norm_cam_vy ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* FeaturePoint_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FeaturePoint_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FeaturePoint_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T FeaturePoint
    #define TSeq FeaturePointSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T FeaturePoint
    #define TSeq FeaturePointSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern FeaturePoint*
    FeaturePoint_create();

    NDDSUSERDllExport extern void
    FeaturePoint_delete(FeaturePoint* sample);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize(
        FeaturePoint* self);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize_ex(
        FeaturePoint* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize_w_params(
        FeaturePoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FeaturePoint_finalize(
        FeaturePoint* self);

    NDDSUSERDllExport
    RTIBool FeaturePoint_finalize_w_return(
        FeaturePoint* self);

    NDDSUSERDllExport
    void FeaturePoint_finalize_ex(
        FeaturePoint* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FeaturePoint_finalize_w_params(
        FeaturePoint* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FeaturePoint_finalize_optional_members(
        FeaturePoint* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FeaturePoint_copy(
        FeaturePoint* dst,
        const FeaturePoint* src);

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

#endif /* FeaturePoint */

