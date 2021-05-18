

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObstaclePathPrediction.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObstaclePathPrediction_2011913158_h
#define ObstaclePathPrediction_2011913158_h

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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObstaclePathPrediction_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstaclePathPredictionSeq, ObstaclePathPrediction);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize(
        ObstaclePathPrediction* self);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize_ex(
        ObstaclePathPrediction* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_initialize_w_params(
        ObstaclePathPrediction* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObstaclePathPrediction_finalize_w_return(
        ObstaclePathPrediction* self);

    NDDSUSERDllExport
    void ObstaclePathPrediction_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::ObstaclePathPrediction> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObstaclePathPrediction */

