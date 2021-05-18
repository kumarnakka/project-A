

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficLight.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficLight_536123709_h
#define TrafficLight_536123709_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "StopSign.h"
#include "../common/Point2.h"
#include "../common/Point3.h"
#include "LightRegion.h"
namespace adas_dds {

    extern const char *TrafficLightTYPENAME;

    struct TrafficLightSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficLightTypeSupport;
    class TrafficLightDataWriter;
    class TrafficLightDataReader;
    #endif
    class TrafficLight 
    {
      public:
        typedef struct TrafficLightSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficLightTypeSupport TypeSupport;
        typedef TrafficLightDataWriter DataWriter;
        typedef TrafficLightDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LightRegion   light_region ;
        DDS_Char   light_color ;
        DDS_Char   light_type ;
        adas_dds::Point3Seq  stop_line ;
        adas_dds::Point2Seq  corners ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficLight_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficLight_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficLight_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficLight_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrafficLightSeq, TrafficLight);

    NDDSUSERDllExport
    RTIBool TrafficLight_initialize(
        TrafficLight* self);

    NDDSUSERDllExport
    RTIBool TrafficLight_initialize_ex(
        TrafficLight* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficLight_initialize_w_params(
        TrafficLight* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficLight_finalize_w_return(
        TrafficLight* self);

    NDDSUSERDllExport
    void TrafficLight_finalize(
        TrafficLight* self);

    NDDSUSERDllExport
    void TrafficLight_finalize_ex(
        TrafficLight* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficLight_finalize_w_params(
        TrafficLight* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficLight_finalize_optional_members(
        TrafficLight* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficLight_copy(
        TrafficLight* dst,
        const TrafficLight* src);

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
        struct type_code<adas_dds::TrafficLight> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrafficLight */

