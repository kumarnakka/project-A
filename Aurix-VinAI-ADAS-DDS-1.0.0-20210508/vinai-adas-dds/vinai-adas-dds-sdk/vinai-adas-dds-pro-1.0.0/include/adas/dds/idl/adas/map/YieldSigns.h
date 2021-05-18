

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YieldSigns.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef YieldSigns_1483209489_h
#define YieldSigns_1483209489_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "YieldSign.h"
namespace adas_dds {

    extern const char *YieldSignsTYPENAME;

    struct YieldSignsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class YieldSignsTypeSupport;
    class YieldSignsDataWriter;
    class YieldSignsDataReader;
    #endif
    class YieldSigns 
    {
      public:
        typedef struct YieldSignsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef YieldSignsTypeSupport TypeSupport;
        typedef YieldSignsDataWriter DataWriter;
        typedef YieldSignsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::YieldSignSeq  yield_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* YieldSigns_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *YieldSigns_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *YieldSigns_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *YieldSigns_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(YieldSignsSeq, YieldSigns);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize(
        YieldSigns* self);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize_ex(
        YieldSigns* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool YieldSigns_initialize_w_params(
        YieldSigns* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool YieldSigns_finalize_w_return(
        YieldSigns* self);

    NDDSUSERDllExport
    void YieldSigns_finalize(
        YieldSigns* self);

    NDDSUSERDllExport
    void YieldSigns_finalize_ex(
        YieldSigns* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void YieldSigns_finalize_w_params(
        YieldSigns* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void YieldSigns_finalize_optional_members(
        YieldSigns* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool YieldSigns_copy(
        YieldSigns* dst,
        const YieldSigns* src);

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
        struct type_code<adas_dds::YieldSigns> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* YieldSigns */

