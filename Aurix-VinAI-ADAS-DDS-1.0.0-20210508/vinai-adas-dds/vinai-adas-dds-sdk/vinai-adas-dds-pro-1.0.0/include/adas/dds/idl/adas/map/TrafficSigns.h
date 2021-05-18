

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSigns_132551522_h
#define TrafficSigns_132551522_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "TrafficSign.h"
namespace adas_dds {

    extern const char *TrafficSignsTYPENAME;

    struct TrafficSignsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficSignsTypeSupport;
    class TrafficSignsDataWriter;
    class TrafficSignsDataReader;
    #endif
    class TrafficSigns 
    {
      public:
        typedef struct TrafficSignsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficSignsTypeSupport TypeSupport;
        typedef TrafficSignsDataWriter DataWriter;
        typedef TrafficSignsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TrafficSignSeq  traffic_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficSigns_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficSigns_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSigns_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSigns_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrafficSignsSeq, TrafficSigns);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize(
        TrafficSigns* self);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize_ex(
        TrafficSigns* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize_w_params(
        TrafficSigns* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSigns_finalize_w_return(
        TrafficSigns* self);

    NDDSUSERDllExport
    void TrafficSigns_finalize(
        TrafficSigns* self);

    NDDSUSERDllExport
    void TrafficSigns_finalize_ex(
        TrafficSigns* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficSigns_finalize_w_params(
        TrafficSigns* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficSigns_finalize_optional_members(
        TrafficSigns* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficSigns_copy(
        TrafficSigns* dst,
        const TrafficSigns* src);

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
        struct type_code<adas_dds::TrafficSigns> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrafficSigns */

