/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelCommonHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelCommonHeader_1036755087_h
#define NovatelCommonHeader_1036755087_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    extern const char *NovatelCommonHeaderTYPENAME;

    struct NovatelCommonHeaderSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelCommonHeaderTypeSupport;
    class NovatelCommonHeaderDataWriter;
    class NovatelCommonHeaderDataReader;
    #endif
    class NovatelCommonHeader 
    {
      public:
        typedef struct NovatelCommonHeaderSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelCommonHeaderTypeSupport TypeSupport;
        typedef NovatelCommonHeaderDataWriter DataWriter;
        typedef NovatelCommonHeaderDataReader DataReader;
        #endif

        DDS_UnsignedShort   message_id ;
        DDS_Octet   message_type ;
        DDS_Octet   port_address ;
        DDS_UnsignedShort   message_length ;
        DDS_UnsignedShort   seq ;
        DDS_Octet   idle_time ;
        DDS_Octet   time_status ;
        DDS_UnsignedShort   gps_week ;
        DDS_UnsignedLong   gps_week_millisecs ;
        DDS_UnsignedLong   receiver_status ;
        DDS_UnsignedShort   reserved ;
        DDS_UnsignedShort   software_version ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelCommonHeader_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelCommonHeader_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelCommonHeader_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelCommonHeader
    #define TSeq NovatelCommonHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelCommonHeader
    #define TSeq NovatelCommonHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelCommonHeader*
    NovatelCommonHeader_create();

    NDDSUSERDllExport extern void
    NovatelCommonHeader_delete(NovatelCommonHeader* sample);

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_initialize(
        NovatelCommonHeader* self);

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_initialize_ex(
        NovatelCommonHeader* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_initialize_w_params(
        NovatelCommonHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_finalize(
        NovatelCommonHeader* self);

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_finalize_w_return(
        NovatelCommonHeader* self);

    NDDSUSERDllExport
    void NovatelCommonHeader_finalize_ex(
        NovatelCommonHeader* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelCommonHeader_finalize_w_params(
        NovatelCommonHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelCommonHeader_finalize_optional_members(
        NovatelCommonHeader* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelCommonHeader_copy(
        NovatelCommonHeader* dst,
        const NovatelCommonHeader* src);

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

#endif /* NovatelCommonHeader */

