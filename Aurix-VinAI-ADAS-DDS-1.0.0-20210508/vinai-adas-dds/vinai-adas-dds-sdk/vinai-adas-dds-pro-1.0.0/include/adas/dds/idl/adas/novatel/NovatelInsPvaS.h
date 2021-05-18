

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelInsPvaS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelInsPvaS_516644003_h
#define NovatelInsPvaS_516644003_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelInsPvaS_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NovatelInsPvaSSeq, NovatelInsPvaS);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize(
        NovatelInsPvaS* self);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize_ex(
        NovatelInsPvaS* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_initialize_w_params(
        NovatelInsPvaS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelInsPvaS_finalize_w_return(
        NovatelInsPvaS* self);

    NDDSUSERDllExport
    void NovatelInsPvaS_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::NovatelInsPvaS> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelInsPvaS */

