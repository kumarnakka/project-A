/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaObstacle.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ScalaObstacle_226478892_h
#define ScalaObstacle_226478892_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ScalaObstacle
    #define TSeq ScalaObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ScalaObstacle
    #define TSeq ScalaObstacleSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ScalaObstacle*
    ScalaObstacle_create();

    NDDSUSERDllExport extern void
    ScalaObstacle_delete(ScalaObstacle* sample);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize(
        ScalaObstacle* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize_ex(
        ScalaObstacle* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_initialize_w_params(
        ScalaObstacle* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ScalaObstacle_finalize(
        ScalaObstacle* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacle_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ScalaObstacle */

