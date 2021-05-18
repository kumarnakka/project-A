/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelInsPvaS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelInsPvaS_516644003_h
#define NovatelInsPvaS_516644003_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "NovatelShortHeader.h"

namespace adas_dds {

    extern const char *NovatelInsPvaSTYPENAME;

    struct NovatelInsPvaSSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelInsPvaSTypeSupport;
    class NovatelInsPvaSDataWriter;
    class NovatelInsPvaSDataReader;
    #endif
    class NovatelInsPvaS 
    {
      public:
        typedef struct NovatelInsPvaSSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelInsPvaSTypeSupport TypeSupport;
        typedef NovatelInsPvaSDataWriter DataWriter;
        typedef NovatelInsPvaSDataReader DataReader;
        #endif

        adas_dds::NovatelShortHeader   header ;
        DDS_UnsignedLong   gps_week ;
        DDS_Double   gps_secs ;
        DDS_Double   latitude ;
        DDS_Double   longitude ;
        DDS_Double   height ;
        DDS_Double   north_velocity ;
        DDS_Double   east_velocity ;
        DDS_Double   up_velocity ;
        DDS_Double   roll ;
        DDS_Double   pitch ;
        DDS_Double   azimuth ;
        DDS_UnsignedLong   status ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelInsPvaS_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelInsPvaS_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelInsPvaS_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelInsPvaS
    #define TSeq NovatelInsPvaSSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelInsPvaS
    #define TSeq NovatelInsPvaSSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelInsPvaS*
    NovatelInsPvaS_create();

    NDDSUSERDllExport extern void
    NovatelInsPvaS_delete(NovatelInsPvaS* sample);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize(
        NovatelInsPvaS* self);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize_ex(
        NovatelInsPvaS* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize_w_params(
        NovatelInsPvaS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_finalize(
        NovatelInsPvaS* self);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_finalize_w_return(
        NovatelInsPvaS* self);

    NDDSUSERDllExport
    void NovatelInsPvaS_finalize_ex(
        NovatelInsPvaS* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelInsPvaS_finalize_w_params(
        NovatelInsPvaS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelInsPvaS_finalize_optional_members(
        NovatelInsPvaS* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_copy(
        NovatelInsPvaS* dst,
        const NovatelInsPvaS* src);

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

#endif /* NovatelInsPvaS */

