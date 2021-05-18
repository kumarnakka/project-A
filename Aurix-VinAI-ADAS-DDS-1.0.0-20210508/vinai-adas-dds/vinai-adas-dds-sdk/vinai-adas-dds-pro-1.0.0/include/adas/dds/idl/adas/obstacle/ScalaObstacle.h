

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScalaObstacle_226478892_h
#define ScalaObstacle_226478892_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../common/Point2.h"
namespace adas_dds {

    extern const char *ScalaObstacleTYPENAME;

    struct ScalaObstacleSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ScalaObstacleTypeSupport;
    class ScalaObstacleDataWriter;
    class ScalaObstacleDataReader;
    #endif
    class ScalaObstacle 
    {
      public:
        typedef struct ScalaObstacleSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ScalaObstacleTypeSupport TypeSupport;
        typedef ScalaObstacleDataWriter DataWriter;
        typedef ScalaObstacleDataReader DataReader;
        #endif

        DDS_Long   id ;
        DDS_Long   age ;
        DDS_Long   hidden_state_age ;
        DDS_Long   dynamic_flag ;
        DDS_Long   classification ;
        adas_dds::Point2   velocity_relative ;
        adas_dds::Point2   velocity_absolute ;
        adas_dds::Point2Seq  reference_points ;
        adas_dds::Point2   object_closest ;
        adas_dds::Point2   object_box_size ;
        DDS_Float   object_box_height ;
        DDS_Float   object_box_orientation ;
        adas_dds::Point2Seq  contour ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ScalaObstacle_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ScalaObstacle_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaObstacle_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaObstacle_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ScalaObstacleSeq, ScalaObstacle);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize(
        ScalaObstacle* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize_ex(
        ScalaObstacle* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize_w_params(
        ScalaObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ScalaObstacle_finalize_w_return(
        ScalaObstacle* self);

    NDDSUSERDllExport
    void ScalaObstacle_finalize(
        ScalaObstacle* self);

    NDDSUSERDllExport
    void ScalaObstacle_finalize_ex(
        ScalaObstacle* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ScalaObstacle_finalize_w_params(
        ScalaObstacle* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ScalaObstacle_finalize_optional_members(
        ScalaObstacle* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ScalaObstacle_copy(
        ScalaObstacle* dst,
        const ScalaObstacle* src);

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
        struct type_code<adas_dds::ScalaObstacle> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ScalaObstacle */

