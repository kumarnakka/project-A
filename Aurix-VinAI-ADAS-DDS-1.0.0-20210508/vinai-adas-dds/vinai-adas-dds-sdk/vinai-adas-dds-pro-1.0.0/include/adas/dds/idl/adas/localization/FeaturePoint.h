

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeaturePoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FeaturePoint_780179060_h
#define FeaturePoint_780179060_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FeaturePoint_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(FeaturePointSeq, FeaturePoint);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize(
        FeaturePoint* self);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize_ex(
        FeaturePoint* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FeaturePoint_initialize_w_params(
        FeaturePoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FeaturePoint_finalize_w_return(
        FeaturePoint* self);

    NDDSUSERDllExport
    void FeaturePoint_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::FeaturePoint> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FeaturePoint */

