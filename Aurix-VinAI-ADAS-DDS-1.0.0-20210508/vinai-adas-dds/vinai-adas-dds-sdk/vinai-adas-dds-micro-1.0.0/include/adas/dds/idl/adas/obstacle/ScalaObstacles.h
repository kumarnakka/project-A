/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScalaObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ScalaObstacles_1631077158_h
#define ScalaObstacles_1631077158_h

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

#include "ScalaObstacle.h"

namespace adas_dds {

    extern const char *ScalaObstaclesTYPENAME;

    struct ScalaObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ScalaObstaclesTypeSupport;
    class ScalaObstaclesDataWriter;
    class ScalaObstaclesDataReader;
    #endif
    class ScalaObstacles 
    {
      public:
        typedef struct ScalaObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ScalaObstaclesTypeSupport TypeSupport;
        typedef ScalaObstaclesDataWriter DataWriter;
        typedef ScalaObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ScalaObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ScalaObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ScalaObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ScalaObstacles_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ScalaObstacles
    #define TSeq ScalaObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ScalaObstacles
    #define TSeq ScalaObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ScalaObstacles*
    ScalaObstacles_create();

    NDDSUSERDllExport extern void
    ScalaObstacles_delete(ScalaObstacles* sample);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize(
        ScalaObstacles* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize_ex(
        ScalaObstacles* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_initialize_w_params(
        ScalaObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ScalaObstacles_finalize(
        ScalaObstacles* self);

    NDDSUSERDllExport
    RTIBool ScalaObstacles_finalize_w_return(
        ScalaObstacles* self);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_ex(
        ScalaObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_w_params(
        ScalaObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ScalaObstacles_finalize_optional_members(
        ScalaObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ScalaObstacles_copy(
        ScalaObstacles* dst,
        const ScalaObstacles* src);

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

#endif /* ScalaObstacles */

