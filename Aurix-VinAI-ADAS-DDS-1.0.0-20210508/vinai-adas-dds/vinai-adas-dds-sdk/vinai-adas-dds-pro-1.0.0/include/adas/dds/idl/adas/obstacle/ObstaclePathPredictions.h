

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstaclePathPredictions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstaclePathPredictions_1993250772_h
#define ObstaclePathPredictions_1993250772_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstaclePathPredictions_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstaclePathPredictionsSeq, ObstaclePathPredictions);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize(
        ObstaclePathPredictions* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize_ex(
        ObstaclePathPredictions* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_initialize_w_params(
        ObstaclePathPredictions* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPredictions_finalize_w_return(
        ObstaclePathPredictions* self);

    NDDSUSERDllExport
    void ObstaclePathPredictions_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::ObstaclePathPredictions> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObstaclePathPredictions */

