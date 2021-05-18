

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Obstacle_626351791_h
#define Obstacle_626351791_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../control/Twist.h"
#include "../../ros_ported/geometry/Point.h"
#include "../../ros_ported/geometry/Pose.h"
#include "../control/Trajectory.h"
namespace adas_dds {

    extern const char *ObstacleTYPENAME;

    struct ObstacleSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstacleTypeSupport;
    class ObstacleDataWriter;
    class ObstacleDataReader;
    #endif
    class Obstacle 
    {
      public:
        typedef struct ObstacleSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstacleTypeSupport TypeSupport;
        typedef ObstacleDataWriter DataWriter;
        typedef ObstacleDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Char   sensor_type ;
        DDS_Boolean   sensor_type_valid ;
        DDS_Char   sensor_loc ;
        DDS_Boolean   sensor_loc_valid ;
        DDS_Long   id ;
        DDS_Boolean   id_valid ;
        adas_dds::geometry_msgs::Pose   pose ;
        adas_dds::Twist   vel ;
        adas_dds::Twist   acc ;
        DDS_Boolean   pose_valid ;
        DDS_Boolean   vel_valid ;
        DDS_Boolean   acc_valid ;
        DDS_Float   length ;
        DDS_Boolean   length_valid ;
        DDS_Float   width ;
        DDS_Boolean   width_valid ;
        DDS_Float   radius ;
        DDS_Boolean   radius_valid ;
        DDS_Float   height ;
        DDS_Boolean   height_valid ;
        adas_dds::geometry_msgs::PointSeq  polygon_upper ;
        adas_dds::geometry_msgs::PointSeq  polygon_lower ;
        DDS_Boolean   polygon_valid ;
        DDS_Short   classification ;
        DDS_Boolean   classification_valid ;
        DDS_Float   score ;
        DDS_Boolean   score_valid ;
        DDS_Boolean   visible ;
        DDS_Boolean   mesh ;
        DDS_Float   s ;
        DDS_Float   l ;
        DDS_Float   s_rel ;
        DDS_Float   l_rel ;
        DDS_Boolean   sl_valid ;
        DDS_Char *   name ;
        adas_dds::Trajectory   trajectory ;
        DDS_Boolean   trajectory_valid ;
        DDS_Boolean   confirmed ;
        DDS_Boolean   move_state_valid ;
        DDS_Char   move_state ;
        DDS_Char   motion_scene ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Obstacle_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Obstacle_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacle_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacle_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstacleSeq, Obstacle);

    NDDSUSERDllExport
    RTIBool Obstacle_initialize(
        Obstacle* self);

    NDDSUSERDllExport
    RTIBool Obstacle_initialize_ex(
        Obstacle* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacle_initialize_w_params(
        Obstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacle_finalize_w_return(
        Obstacle* self);

    NDDSUSERDllExport
    void Obstacle_finalize(
        Obstacle* self);

    NDDSUSERDllExport
    void Obstacle_finalize_ex(
        Obstacle* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Obstacle_finalize_w_params(
        Obstacle* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Obstacle_finalize_optional_members(
        Obstacle* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Obstacle_copy(
        Obstacle* dst,
        const Obstacle* src);

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
        struct type_code<adas_dds::Obstacle> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Obstacle */

