

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeObstacle_296475552_h
#define EyeObstacle_296475552_h

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

    extern const char *EyeqObstacleTYPENAME;

    struct EyeqObstacleSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeqObstacleTypeSupport;
    class EyeqObstacleDataWriter;
    class EyeqObstacleDataReader;
    #endif
    class EyeqObstacle 
    {
      public:
        typedef struct EyeqObstacleSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeqObstacleTypeSupport TypeSupport;
        typedef EyeqObstacleDataWriter DataWriter;
        typedef EyeqObstacleDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Char   obstacle_id ;
        DDS_Float   obstacle_posX ;
        DDS_Float   obstacle_posY ;
        DDS_Char   blinker_info ;
        DDS_Char   move_in_and_out ;
        DDS_Float   obstacle_velX ;
        DDS_Char   obstacle_type ;
        DDS_Char   obstacle_status ;
        DDS_Boolean   obstacle_brakelights ;
        DDS_Char   obstacle_valid ;
        DDS_Float   obstacle_length ;
        DDS_Float   obstacle_width ;
        DDS_Char   obstacle_age ;
        DDS_Char   obstacle_lane ;
        DDS_Boolean   cipv_flag ;
        DDS_Float   obstacle_angle_rate ;
        DDS_Float   obstacle_velY ;
        DDS_Float   object_accel_X ;
        DDS_Char   obstacle_replaced ;
        DDS_Float   obstacle_angle ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeqObstacle_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeqObstacle_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqObstacle_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqObstacle_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EyeqObstacleSeq, EyeqObstacle);

    NDDSUSERDllExport
    RTIBool EyeqObstacle_initialize(
        EyeqObstacle* self);

    NDDSUSERDllExport
    RTIBool EyeqObstacle_initialize_ex(
        EyeqObstacle* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqObstacle_initialize_w_params(
        EyeqObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqObstacle_finalize_w_return(
        EyeqObstacle* self);

    NDDSUSERDllExport
    void EyeqObstacle_finalize(
        EyeqObstacle* self);

    NDDSUSERDllExport
    void EyeqObstacle_finalize_ex(
        EyeqObstacle* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeqObstacle_finalize_w_params(
        EyeqObstacle* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeqObstacle_finalize_optional_members(
        EyeqObstacle* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeqObstacle_copy(
        EyeqObstacle* dst,
        const EyeqObstacle* src);

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
        struct type_code<adas_dds::EyeqObstacle> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EyeObstacle */

