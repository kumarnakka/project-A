/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignsEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrafficSignsEyeQ4_1251031122_h
#define TrafficSignsEyeQ4_1251031122_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T TrafficSignsEyeQ4
    #define TSeq TrafficSignsEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T TrafficSignsEyeQ4
    #define TSeq TrafficSignsEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern TrafficSignsEyeQ4*
    TrafficSignsEyeQ4_create();

    NDDSUSERDllExport extern void
    TrafficSignsEyeQ4_delete(TrafficSignsEyeQ4* sample);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize(
        TrafficSignsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize_ex(
        TrafficSignsEyeQ4* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_initialize_w_params(
        TrafficSignsEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_finalize(
        TrafficSignsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool TrafficSignsEyeQ4_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSignsEyeQ4 */

