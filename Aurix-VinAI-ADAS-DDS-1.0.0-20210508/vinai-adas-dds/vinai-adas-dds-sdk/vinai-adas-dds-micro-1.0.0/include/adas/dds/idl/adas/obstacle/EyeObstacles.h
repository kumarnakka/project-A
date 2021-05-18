/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef EyeObstacles_538812926_h
#define EyeObstacles_538812926_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "EyeObstacle.h"

namespace adas_dds {

    extern const char *EyeqObstaclesTYPENAME;

    struct EyeqObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeqObstaclesTypeSupport;
    class EyeqObstaclesDataWriter;
    class EyeqObstaclesDataReader;
    #endif
    class EyeqObstacles 
    {
      public:
        typedef struct EyeqObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeqObstaclesTypeSupport TypeSupport;
        typedef EyeqObstaclesDataWriter DataWriter;
        typedef EyeqObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::EyeqObstacleSeq  obstacle_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeqObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeqObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqObstacles_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T EyeqObstacles
    #define TSeq EyeqObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T EyeqObstacles
    #define TSeq EyeqObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern EyeqObstacles*
    EyeqObstacles_create();

    NDDSUSERDllExport extern void
    EyeqObstacles_delete(EyeqObstacles* sample);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize(
        EyeqObstacles* self);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize_ex(
        EyeqObstacles* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_initialize_w_params(
        EyeqObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqObstacles_finalize(
        EyeqObstacles* self);

    NDDSUSERDllExport
    RTIBool EyeqObstacles_finalize_w_return(
        EyeqObstacles* self);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_ex(
        EyeqObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_w_params(
        EyeqObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeqObstacles_finalize_optional_members(
        EyeqObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeqObstacles_copy(
        EyeqObstacles* dst,
        const EyeqObstacles* src);

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

#endif /* EyeObstacles */

