

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelShortHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelShortHeader_1414189619_h
#define NovatelShortHeader_1414189619_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *NovatelShortHeaderTYPENAME;

    struct NovatelShortHeaderSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelShortHeaderTypeSupport;
    class NovatelShortHeaderDataWriter;
    class NovatelShortHeaderDataReader;
    #endif
    class NovatelShortHeader 
    {
      public:
        typedef struct NovatelShortHeaderSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelShortHeaderTypeSupport TypeSupport;
        typedef NovatelShortHeaderDataWriter DataWriter;
        typedef NovatelShortHeaderDataReader DataReader;
        #endif

        DDS_UnsignedShort   message_id ;
        DDS_UnsignedShort   message_length ;
        DDS_UnsignedShort   gps_week ;
        DDS_UnsignedLong   gps_millisecs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelShortHeader_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelShortHeader_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelShortHeader_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelShortHeader_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NovatelShortHeaderSeq, NovatelShortHeader);

    NDDSUSERDllExport
    RTIBool NovatelShortHeader_initialize(
        NovatelShortHeader* self);

    NDDSUSERDllExport
    RTIBool NovatelShortHeader_initialize_ex(
        NovatelShortHeader* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelShortHeader_initialize_w_params(
        NovatelShortHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelShortHeader_finalize_w_return(
        NovatelShortHeader* self);

    NDDSUSERDllExport
    void NovatelShortHeader_finalize(
        NovatelShortHeader* self);

    NDDSUSERDllExport
    void NovatelShortHeader_finalize_ex(
        NovatelShortHeader* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelShortHeader_finalize_w_params(
        NovatelShortHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelShortHeader_finalize_optional_members(
        NovatelShortHeader* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelShortHeader_copy(
        NovatelShortHeader* dst,
        const NovatelShortHeader* src);

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
        struct type_code<adas_dds::NovatelShortHeader> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelShortHeader */

