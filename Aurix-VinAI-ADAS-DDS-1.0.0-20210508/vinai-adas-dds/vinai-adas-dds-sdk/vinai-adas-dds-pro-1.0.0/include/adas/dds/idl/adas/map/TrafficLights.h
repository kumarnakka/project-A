

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficLights.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficLights_622018114_h
#define TrafficLights_622018114_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "TrafficLight.h"
namespace adas_dds {

    extern const char *TrafficLightsTYPENAME;

    struct TrafficLightsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficLightsTypeSupport;
    class TrafficLightsDataWriter;
    class TrafficLightsDataReader;
    #endif
    class TrafficLights 
    {
      public:
        typedef struct TrafficLightsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficLightsTypeSupport TypeSupport;
        typedef TrafficLightsDataWriter DataWriter;
        typedef TrafficLightsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TrafficLightSeq  traffic_lights ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficLights_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficLights_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficLights_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficLights_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrafficLightsSeq, TrafficLights);

    NDDSUSERDllExport
    RTIBool TrafficLights_initialize(
        TrafficLights* self);

    NDDSUSERDllExport
    RTIBool TrafficLights_initialize_ex(
        TrafficLights* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficLights_initialize_w_params(
        TrafficLights* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficLights_finalize_w_return(
        TrafficLights* self);

    NDDSUSERDllExport
    void TrafficLights_finalize(
        TrafficLights* self);

    NDDSUSERDllExport
    void TrafficLights_finalize_ex(
        TrafficLights* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficLights_finalize_w_params(
        TrafficLights* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficLights_finalize_optional_members(
        TrafficLights* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficLights_copy(
        TrafficLights* dst,
        const TrafficLights* src);

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
        struct type_code<adas_dds::TrafficLights> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrafficLights */

