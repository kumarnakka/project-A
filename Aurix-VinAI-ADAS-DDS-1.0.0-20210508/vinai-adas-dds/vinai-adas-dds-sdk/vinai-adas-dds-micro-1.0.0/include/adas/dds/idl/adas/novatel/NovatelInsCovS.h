/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelInsCovS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelInsCovS_1981401078_h
#define NovatelInsCovS_1981401078_h

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

    extern const char *NovatelInsCovSTYPENAME;

    struct NovatelInsCovSSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelInsCovSTypeSupport;
    class NovatelInsCovSDataWriter;
    class NovatelInsCovSDataReader;
    #endif
    class NovatelInsCovS 
    {
      public:
        typedef struct NovatelInsCovSSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelInsCovSTypeSupport TypeSupport;
        typedef NovatelInsCovSDataWriter DataWriter;
        typedef NovatelInsCovSDataReader DataReader;
        #endif

        adas_dds::NovatelShortHeader   header ;
        DDS_UnsignedLong   gps_week ;
        DDS_Double   gps_secs ;
        DDS_Double   position_covariance [9];
        DDS_Double   attitude_covariance [9];
        DDS_Double   velocity_covariance [9];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelInsCovS_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelInsCovS_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelInsCovS_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelInsCovS
    #define TSeq NovatelInsCovSSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelInsCovS
    #define TSeq NovatelInsCovSSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelInsCovS*
    NovatelInsCovS_create();

    NDDSUSERDllExport extern void
    NovatelInsCovS_delete(NovatelInsCovS* sample);

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_initialize(
        NovatelInsCovS* self);

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_initialize_ex(
        NovatelInsCovS* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_initialize_w_params(
        NovatelInsCovS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_finalize(
        NovatelInsCovS* self);

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_finalize_w_return(
        NovatelInsCovS* self);

    NDDSUSERDllExport
    void NovatelInsCovS_finalize_ex(
        NovatelInsCovS* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelInsCovS_finalize_w_params(
        NovatelInsCovS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelInsCovS_finalize_optional_members(
        NovatelInsCovS* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelInsCovS_copy(
        NovatelInsCovS* dst,
        const NovatelInsCovS* src);

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

#endif /* NovatelInsCovS */

