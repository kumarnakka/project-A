

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StopSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StopSigns_124622791_h
#define StopSigns_124622791_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "StopSign.h"
namespace adas_dds {

    extern const char *StopSignsTYPENAME;

    struct StopSignsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class StopSignsTypeSupport;
    class StopSignsDataWriter;
    class StopSignsDataReader;
    #endif
    class StopSigns 
    {
      public:
        typedef struct StopSignsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef StopSignsTypeSupport TypeSupport;
        typedef StopSignsDataWriter DataWriter;
        typedef StopSignsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::StopSignSeq  stop_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* StopSigns_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StopSigns_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StopSigns_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StopSigns_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StopSignsSeq, StopSigns);

    NDDSUSERDllExport
    RTIBool StopSigns_initialize(
        StopSigns* self);

    NDDSUSERDllExport
    RTIBool StopSigns_initialize_ex(
        StopSigns* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StopSigns_initialize_w_params(
        StopSigns* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StopSigns_finalize_w_return(
        StopSigns* self);

    NDDSUSERDllExport
    void StopSigns_finalize(
        StopSigns* self);

    NDDSUSERDllExport
    void StopSigns_finalize_ex(
        StopSigns* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StopSigns_finalize_w_params(
        StopSigns* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StopSigns_finalize_optional_members(
        StopSigns* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StopSigns_copy(
        StopSigns* dst,
        const StopSigns* src);

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
        struct type_code<adas_dds::StopSigns> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StopSigns */

