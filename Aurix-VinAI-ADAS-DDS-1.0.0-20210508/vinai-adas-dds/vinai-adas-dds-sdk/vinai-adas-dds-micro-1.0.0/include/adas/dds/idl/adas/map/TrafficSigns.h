/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrafficSigns_132551522_h
#define TrafficSigns_132551522_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T TrafficSigns
    #define TSeq TrafficSignsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T TrafficSigns
    #define TSeq TrafficSignsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern TrafficSigns*
    TrafficSigns_create();

    NDDSUSERDllExport extern void
    TrafficSigns_delete(TrafficSigns* sample);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize(
        TrafficSigns* self);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize_ex(
        TrafficSigns* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrafficSigns_initialize_w_params(
        TrafficSigns* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrafficSigns_finalize(
        TrafficSigns* self);

    NDDSUSERDllExport
    RTIBool TrafficSigns_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrafficSigns */

