/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImuVisual.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ImuVisual_1171114558_h
#define ImuVisual_1171114558_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ImuVisual
    #define TSeq ImuVisualSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ImuVisual
    #define TSeq ImuVisualSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ImuVisual*
    ImuVisual_create();

    NDDSUSERDllExport extern void
    ImuVisual_delete(ImuVisual* sample);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize(
        ImuVisual* self);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize_ex(
        ImuVisual* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ImuVisual_initialize_w_params(
        ImuVisual* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ImuVisual_finalize(
        ImuVisual* self);

    NDDSUSERDllExport
    RTIBool ImuVisual_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ImuVisual */

