/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstaclePathPrediction.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ObstaclePathPrediction_2011913158_h
#define ObstaclePathPrediction_2011913158_h

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

namespace adas_dds {

    extern const char *ObstaclePathPredictionTYPENAME;

    struct ObstaclePathPredictionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstaclePathPredictionTypeSupport;
    class ObstaclePathPredictionDataWriter;
    class ObstaclePathPredictionDataReader;
    #endif
    class ObstaclePathPrediction 
    {
      public:
        typedef struct ObstaclePathPredictionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstaclePathPredictionTypeSupport TypeSupport;
        typedef ObstaclePathPredictionDataWriter DataWriter;
        typedef ObstaclePathPredictionDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Short   obs_id ;
        DDS_Float   time_start ;
        DDS_Float   time_end ;
        DDS_Float   cx0 ;
        DDS_Float   cx1 ;
        DDS_Float   cx2 ;
        DDS_Float   cx3 ;
        DDS_Float   cy0 ;
        DDS_Float   cy1 ;
        DDS_Float   cy2 ;
        DDS_Float   cy3 ;
        DDS_Float   ch0 ;
        DDS_Float   ch1 ;
        DDS_Float   ch2 ;
        DDS_Float   ch3 ;
        DDS_Char   mnvr_type ;
        DDS_Char   target_line_id ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObstaclePathPrediction_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObstaclePathPrediction_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstaclePathPrediction_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ObstaclePathPrediction
    #define TSeq ObstaclePathPredictionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ObstaclePathPrediction
    #define TSeq ObstaclePathPredictionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ObstaclePathPrediction*
    ObstaclePathPrediction_create();

    NDDSUSERDllExport extern void
    ObstaclePathPrediction_delete(ObstaclePathPrediction* sample);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize(
        ObstaclePathPrediction* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize_ex(
        ObstaclePathPrediction* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize_w_params(
        ObstaclePathPrediction* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_finalize(
        ObstaclePathPrediction* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_finalize_w_return(
        ObstaclePathPrediction* self);

    NDDSUSERDllExport
    void ObstaclePathPrediction_finalize_ex(
        ObstaclePathPrediction* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObstaclePathPrediction_finalize_w_params(
        ObstaclePathPrediction* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObstaclePathPrediction_finalize_optional_members(
        ObstaclePathPrediction* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_copy(
        ObstaclePathPrediction* dst,
        const ObstaclePathPrediction* src);

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

#endif /* ObstaclePathPrediction */

