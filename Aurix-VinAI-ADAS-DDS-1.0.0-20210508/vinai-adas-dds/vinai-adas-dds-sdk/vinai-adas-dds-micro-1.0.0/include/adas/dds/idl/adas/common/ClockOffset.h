/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClockOffset.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ClockOffset_1107519426_h
#define ClockOffset_1107519426_h

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

#include "../../ros_ported/std/Duration.h"

namespace adas_dds {

    extern const char *ClockOffsetTYPENAME;

    struct ClockOffsetSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ClockOffsetTypeSupport;
    class ClockOffsetDataWriter;
    class ClockOffsetDataReader;
    #endif
    class ClockOffset 
    {
      public:
        typedef struct ClockOffsetSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ClockOffsetTypeSupport TypeSupport;
        typedef ClockOffsetDataWriter DataWriter;
        typedef ClockOffsetDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::std_msgs::Duration   clock_diff ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ClockOffset_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockOffset_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockOffset_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ClockOffset
    #define TSeq ClockOffsetSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ClockOffset
    #define TSeq ClockOffsetSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ClockOffset*
    ClockOffset_create();

    NDDSUSERDllExport extern void
    ClockOffset_delete(ClockOffset* sample);

    NDDSUSERDllExport
    RTIBool ClockOffset_initialize(
        ClockOffset* self);

    NDDSUSERDllExport
    RTIBool ClockOffset_initialize_ex(
        ClockOffset* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockOffset_initialize_w_params(
        ClockOffset* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockOffset_finalize(
        ClockOffset* self);

    NDDSUSERDllExport
    RTIBool ClockOffset_finalize_w_return(
        ClockOffset* self);

    NDDSUSERDllExport
    void ClockOffset_finalize_ex(
        ClockOffset* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockOffset_finalize_w_params(
        ClockOffset* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockOffset_finalize_optional_members(
        ClockOffset* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockOffset_copy(
        ClockOffset* dst,
        const ClockOffset* src);

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

#endif /* ClockOffset */

