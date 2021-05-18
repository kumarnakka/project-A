

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrafficSignEyeQ4_563920906_h
#define TrafficSignEyeQ4_563920906_h

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

    extern const char *TrafficSignEyeQ4TYPENAME;

    struct TrafficSignEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrafficSignEyeQ4TypeSupport;
    class TrafficSignEyeQ4DataWriter;
    class TrafficSignEyeQ4DataReader;
    #endif
    class TrafficSignEyeQ4 
    {
      public:
        typedef struct TrafficSignEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrafficSignEyeQ4TypeSupport TypeSupport;
        typedef TrafficSignEyeQ4DataWriter DataWriter;
        typedef TrafficSignEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Octet   tsr_id ;
        DDS_UnsignedShort   tsr_sign_name ;
        DDS_Float   tsr_confidence ;
        DDS_Octet   tsr_relevancy ;
        DDS_Octet   tsr_filter_type ;
        DDS_Octet   tsr_sup1_signname ;
        DDS_Float   tsr_sup1_confidence ;
        DDS_Octet   tsr_sup2_signname ;
        DDS_Float   tsr_sup2_confidence ;
        DDS_Float   tsr_sign_long_distance ;
        DDS_Float   tsr_sign_lateral_distance ;
        DDS_Float   tsr_sign_height ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrafficSignEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrafficSignEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSignEyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrafficSignEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrafficSignEyeQ4Seq, TrafficSignEyeQ4);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize(
        TrafficSignEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize_ex(
        TrafficSignEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize_w_params(
        TrafficSignEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_finalize_w_return(
        TrafficSignEyeQ4* self);

    NDDSUSERDllExport
    void TrafficSignEyeQ4_finalize(
        TrafficSignEyeQ4* self);

    NDDSUSERDllExport
    void TrafficSignEyeQ4_finalize_ex(
        TrafficSignEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrafficSignEyeQ4_finalize_w_params(
        TrafficSignEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrafficSignEyeQ4_finalize_optional_members(
        TrafficSignEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_copy(
        TrafficSignEyeQ4* dst,
        const TrafficSignEyeQ4* src);

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
        struct type_code<adas_dds::TrafficSignEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrafficSignEyeQ4 */

