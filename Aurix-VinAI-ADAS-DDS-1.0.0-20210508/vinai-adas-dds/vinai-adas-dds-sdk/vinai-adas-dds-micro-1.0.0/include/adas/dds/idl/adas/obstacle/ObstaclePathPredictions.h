/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstaclePathPredictions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ObstaclePathPredictions_1993250772_h
#define ObstaclePathPredictions_1993250772_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "ObstaclePathPrediction.h"

namespace adas_dds {

    extern const char *ObstaclePathPredictionsTYPENAME;

    struct ObstaclePathPredictionsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstaclePathPredictionsTypeSupport;
    class ObstaclePathPredictionsDataWriter;
    class ObstaclePathPredictionsDataReader;
    #endif
    class ObstaclePathPredictions 
    {
      public:
        typedef struct ObstaclePathPredictionsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstaclePathPredictionsTypeSupport TypeSupport;
        typedef ObstaclePathPredictionsDataWriter DataWriter;
        typedef ObstaclePathPredictionsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ObstaclePathPredictionSeq  obstacle_path_prediction_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObstaclePathPredictions_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObstaclePathPredictions_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstaclePathPredictions_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ObstaclePathPredictions
    #define TSeq ObstaclePathPredictionsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ObstaclePathPredictions
    #define TSeq ObstaclePathPredictionsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ObstaclePathPredictions*
    ObstaclePathPredictions_create();

    NDDSUSERDllExport extern void
    ObstaclePathPredictions_delete(ObstaclePathPredictions* sample);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize(
        ObstaclePathPredictions* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize_ex(
        ObstaclePathPredictions* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize_w_params(
        ObstaclePathPredictions* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_finalize(
        ObstaclePathPredictions* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_finalize_w_return(
        ObstaclePathPredictions* self);

    NDDSUSERDllExport
    void ObstaclePathPredictions_finalize_ex(
        ObstaclePathPredictions* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObstaclePathPredictions_finalize_w_params(
        ObstaclePathPredictions* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObstaclePathPredictions_finalize_optional_members(
        ObstaclePathPredictions* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_copy(
        ObstaclePathPredictions* dst,
        const ObstaclePathPredictions* src);

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

#endif /* ObstaclePathPredictions */

