/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrafficSignEyeQ4_563920906_h
#define TrafficSignEyeQ4_563920906_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T TrafficSignEyeQ4
    #define TSeq TrafficSignEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T TrafficSignEyeQ4
    #define TSeq TrafficSignEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern TrafficSignEyeQ4*
    TrafficSignEyeQ4_create();

    NDDSUSERDllExport extern void
    TrafficSignEyeQ4_delete(TrafficSignEyeQ4* sample);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize(
        TrafficSignEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize_ex(
        TrafficSignEyeQ4* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_initialize_w_params(
        TrafficSignEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_finalize(
        TrafficSignEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignEyeQ4_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSignEyeQ4 */

