/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadarObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef RadarObstacles_1017835705_h
#define RadarObstacles_1017835705_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "RadarObstacle.h"

namespace adas_dds {

    extern const char *RadarObstaclesTYPENAME;

    struct RadarObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RadarObstaclesTypeSupport;
    class RadarObstaclesDataWriter;
    class RadarObstaclesDataReader;
    #endif
    class RadarObstacles 
    {
      public:
        typedef struct RadarObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RadarObstaclesTypeSupport TypeSupport;
        typedef RadarObstaclesDataWriter DataWriter;
        typedef RadarObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::RadarObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* RadarObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *RadarObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RadarObstacles_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T RadarObstacles
    #define TSeq RadarObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T RadarObstacles
    #define TSeq RadarObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern RadarObstacles*
    RadarObstacles_create();

    NDDSUSERDllExport extern void
    RadarObstacles_delete(RadarObstacles* sample);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize(
        RadarObstacles* self);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize_ex(
        RadarObstacles* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RadarObstacles_initialize_w_params(
        RadarObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RadarObstacles_finalize(
        RadarObstacles* self);

    NDDSUSERDllExport
    RTIBool RadarObstacles_finalize_w_return(
        RadarObstacles* self);

    NDDSUSERDllExport
    void RadarObstacles_finalize_ex(
        RadarObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void RadarObstacles_finalize_w_params(
        RadarObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void RadarObstacles_finalize_optional_members(
        RadarObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool RadarObstacles_copy(
        RadarObstacles* dst,
        const RadarObstacles* src);

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

#endif /* RadarObstacles */

