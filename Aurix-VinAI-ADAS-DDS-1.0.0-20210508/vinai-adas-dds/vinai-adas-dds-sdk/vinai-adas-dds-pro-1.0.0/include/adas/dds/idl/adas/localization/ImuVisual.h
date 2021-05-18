

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImuVisual.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ImuVisual_1171114558_h
#define ImuVisual_1171114558_h

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

    extern const char *ImuVisualTYPENAME;

    struct ImuVisualSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ImuVisualTypeSupport;
    class ImuVisualDataWriter;
    class ImuVisualDataReader;
    #endif
    class ImuVisual 
    {
      public:
        typedef struct ImuVisualSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ImuVisualTypeSupport TypeSupport;
        typedef ImuVisualDataWriter DataWriter;
        typedef ImuVisualDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   base_width ;
        DDS_Float   base_height ;
        DDS_Float   base_length ;
        adas_dds::geometry_msgs::PointSeq  base_vertices ;
        adas_dds::geometry_msgs::PointSeq  base_edges ;
        adas_dds::geometry_msgs::PointSeq  vertices ;
        adas_dds::geometry_msgs::PointSeq  edges ;
        adas_dds::geometry_msgs::Pose   pose ;
        adas_dds::geometry_msgs::Point   acc_bias ;
        adas_dds::geometry_msgs::Point   gyro_bias ;
        adas_dds::geometry_msgs::Point   acc_mea ;
        adas_dds::geometry_msgs::Point   gyro_mea ;
        adas_dds::geometry_msgs::Point   b_acc ;
        adas_dds::geometry_msgs::Point   b_gyro ;
        adas_dds::geometry_msgs::Point   b_vel ;
        adas_dds::geometry_msgs::Point   w_p ;
        adas_dds::geometry_msgs::Point   w_r ;
        adas_dds::geometry_msgs::Point   w_vel ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ImuVisual_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ImuVisual_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ImuVisual_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ImuVisual_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ImuVisualSeq, ImuVisual);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize(
        ImuVisual* self);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize_ex(
        ImuVisual* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize_w_params(
        ImuVisual* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ImuVisual_finalize_w_return(
        ImuVisual* self);

    NDDSUSERDllExport
    void ImuVisual_finalize(
        ImuVisual* self);

    NDDSUSERDllExport
    void ImuVisual_finalize_ex(
        ImuVisual* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ImuVisual_finalize_w_params(
        ImuVisual* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ImuVisual_finalize_optional_members(
        ImuVisual* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ImuVisual_copy(
        ImuVisual* dst,
        const ImuVisual* src);

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
        struct type_code<adas_dds::ImuVisual> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ImuVisual */

