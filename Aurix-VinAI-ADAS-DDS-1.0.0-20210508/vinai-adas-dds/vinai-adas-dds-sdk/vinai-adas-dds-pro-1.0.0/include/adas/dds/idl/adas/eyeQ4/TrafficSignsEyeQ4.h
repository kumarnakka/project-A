

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignsEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSignsEyeQ4_1251031122_h
#define TrafficSignsEyeQ4_1251031122_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "TrafficSignEyeQ4.h"
namespace adas_dds {

    extern const char *TrafficSignsEyeQ4TYPENAME;

    struct TrafficSignsEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficSignsEyeQ4TypeSupport;
    class TrafficSignsEyeQ4DataWriter;
    class TrafficSignsEyeQ4DataReader;
    #endif
    class TrafficSignsEyeQ4 
    {
      public:
        typedef struct TrafficSignsEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficSignsEyeQ4TypeSupport TypeSupport;
        typedef TrafficSignsEyeQ4DataWriter DataWriter;
        typedef TrafficSignsEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TrafficSignEyeQ4Seq  traffic_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficSignsEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficSignsEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSignsEyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSignsEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrafficSignsEyeQ4Seq, TrafficSignsEyeQ4);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize(
        TrafficSignsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize_ex(
        TrafficSignsEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize_w_params(
        TrafficSignsEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_finalize_w_return(
        TrafficSignsEyeQ4* self);

    NDDSUSERDllExport
    void TrafficSignsEyeQ4_finalize(
        TrafficSignsEyeQ4* self);

    NDDSUSERDllExport
    void TrafficSignsEyeQ4_finalize_ex(
        TrafficSignsEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficSignsEyeQ4_finalize_w_params(
        TrafficSignsEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficSignsEyeQ4_finalize_optional_members(
        TrafficSignsEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_copy(
        TrafficSignsEyeQ4* dst,
        const TrafficSignsEyeQ4* src);

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
        struct type_code<adas_dds::TrafficSignsEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrafficSignsEyeQ4 */

