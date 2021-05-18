/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LanesEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LanesEyeQ4_1293154269_h
#define LanesEyeQ4_1293154269_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "LaneEyeQ4.h"

#include "NextLaneEyeQ4.h"

namespace adas_dds {

    extern const char *LanesEyeQ4TYPENAME;

    struct LanesEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class LanesEyeQ4TypeSupport;
    class LanesEyeQ4DataWriter;
    class LanesEyeQ4DataReader;
    #endif
    class LanesEyeQ4 
    {
      public:
        typedef struct LanesEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LanesEyeQ4TypeSupport TypeSupport;
        typedef LanesEyeQ4DataWriter DataWriter;
        typedef LanesEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LaneEyeQ4Seq  lanes ;
        adas_dds::NextLaneEyeQ4Seq  next_lanes ;
        DDS_Float   host_lane_width ;
        DDS_Boolean   is_construction_area ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LanesEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LanesEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LanesEyeQ4_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LanesEyeQ4
    #define TSeq LanesEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LanesEyeQ4
    #define TSeq LanesEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LanesEyeQ4*
    LanesEyeQ4_create();

    NDDSUSERDllExport extern void
    LanesEyeQ4_delete(LanesEyeQ4* sample);

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_initialize(
        LanesEyeQ4* self);

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_initialize_ex(
        LanesEyeQ4* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_initialize_w_params(
        LanesEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_finalize(
        LanesEyeQ4* self);

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_finalize_w_return(
        LanesEyeQ4* self);

    NDDSUSERDllExport
    void LanesEyeQ4_finalize_ex(
        LanesEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LanesEyeQ4_finalize_w_params(
        LanesEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LanesEyeQ4_finalize_optional_members(
        LanesEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LanesEyeQ4_copy(
        LanesEyeQ4* dst,
        const LanesEyeQ4* src);

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

#endif /* LanesEyeQ4 */

