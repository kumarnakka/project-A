/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bus.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Bus_1902991107_h
#define Bus_1902991107_h

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

#include "../control/Twist.h"

namespace adas_dds {

    extern const char *BusTYPENAME;

    struct BusSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BusTypeSupport;
    class BusDataWriter;
    class BusDataReader;
    #endif
    class Bus 
    {
      public:
        typedef struct BusSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BusTypeSupport TypeSupport;
        typedef BusDataWriter DataWriter;
        typedef BusDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   pos ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Bus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Bus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bus_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Bus
    #define TSeq BusSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Bus
    #define TSeq BusSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Bus*
    Bus_create();

    NDDSUSERDllExport extern void
    Bus_delete(Bus* sample);

    NDDSUSERDllExport
    RTIBool Bus_initialize(
        Bus* self);

    NDDSUSERDllExport
    RTIBool Bus_initialize_ex(
        Bus* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bus_initialize_w_params(
        Bus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bus_finalize(
        Bus* self);

    NDDSUSERDllExport
    RTIBool Bus_finalize_w_return(
        Bus* self);

    NDDSUSERDllExport
    void Bus_finalize_ex(
        Bus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Bus_finalize_w_params(
        Bus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Bus_finalize_optional_members(
        Bus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Bus_copy(
        Bus* dst,
        const Bus* src);

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

#endif /* Bus */

