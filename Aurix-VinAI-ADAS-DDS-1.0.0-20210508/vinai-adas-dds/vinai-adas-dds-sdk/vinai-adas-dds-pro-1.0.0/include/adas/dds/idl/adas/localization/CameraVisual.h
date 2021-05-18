

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraVisual.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraVisual_1780458187_h
#define CameraVisual_1780458187_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../../ros_ported/geometry/Point.h"
#include "../../ros_ported/geometry/Pose.h"
namespace adas_dds {

    extern const char *CameraVisualTYPENAME;

    struct CameraVisualSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CameraVisualTypeSupport;
    class CameraVisualDataWriter;
    class CameraVisualDataReader;
    #endif
    class CameraVisual 
    {
      public:
        typedef struct CameraVisualSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CameraVisualTypeSupport TypeSupport;
        typedef CameraVisualDataWriter DataWriter;
        typedef CameraVisualDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   focal_x ;
        DDS_Float   focal_y ;
        DDS_Float   img_x ;
        DDS_Float   img_y ;
        DDS_Float   base_width ;
        DDS_Float   base_height ;
        DDS_Float   base_length ;
        DDS_Float   img_dist ;
        DDS_Float   factor ;
        adas_dds::geometry_msgs::PointSeq  base_vertices ;
        adas_dds::geometry_msgs::PointSeq  base_edges ;
        adas_dds::geometry_msgs::PointSeq  vertices ;
        adas_dds::geometry_msgs::PointSeq  edges ;
        adas_dds::geometry_msgs::Pose   pose ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* CameraVisual_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CameraVisual_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CameraVisual_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CameraVisual_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CameraVisualSeq, CameraVisual);

    NDDSUSERDllExport
    RTIBool CameraVisual_initialize(
        CameraVisual* self);

    NDDSUSERDllExport
    RTIBool CameraVisual_initialize_ex(
        CameraVisual* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CameraVisual_initialize_w_params(
        CameraVisual* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CameraVisual_finalize_w_return(
        CameraVisual* self);

    NDDSUSERDllExport
    void CameraVisual_finalize(
        CameraVisual* self);

    NDDSUSERDllExport
    void CameraVisual_finalize_ex(
        CameraVisual* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CameraVisual_finalize_w_params(
        CameraVisual* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CameraVisual_finalize_optional_members(
        CameraVisual* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CameraVisual_copy(
        CameraVisual* dst,
        const CameraVisual* src);

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
        struct type_code<adas_dds::CameraVisual> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraVisual */

