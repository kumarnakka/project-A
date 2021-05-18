/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UssObstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UssObstacles_939312938_h
#define UssObstacles_939312938_h

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

#include "UssObstacle.h"

namespace adas_dds {

    extern const char *UssObstaclesTYPENAME;

    struct UssObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class UssObstaclesTypeSupport;
    class UssObstaclesDataWriter;
    class UssObstaclesDataReader;
    #endif
    class UssObstacles 
    {
      public:
        typedef struct UssObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef UssObstaclesTypeSupport TypeSupport;
        typedef UssObstaclesDataWriter DataWriter;
        typedef UssObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::UssObstacleSeq  obstacles ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* UssObstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *UssObstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *UssObstacles_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T UssObstacles
    #define TSeq UssObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T UssObstacles
    #define TSeq UssObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern UssObstacles*
    UssObstacles_create();

    NDDSUSERDllExport extern void
    UssObstacles_delete(UssObstacles* sample);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize(
        UssObstacles* self);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize_ex(
        UssObstacles* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool UssObstacles_initialize_w_params(
        UssObstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool UssObstacles_finalize(
        UssObstacles* self);

    NDDSUSERDllExport
    RTIBool UssObstacles_finalize_w_return(
        UssObstacles* self);

    NDDSUSERDllExport
    void UssObstacles_finalize_ex(
        UssObstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void UssObstacles_finalize_w_params(
        UssObstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void UssObstacles_finalize_optional_members(
        UssObstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool UssObstacles_copy(
        UssObstacles* dst,
        const UssObstacles* src);

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

#endif /* UssObstacles */

