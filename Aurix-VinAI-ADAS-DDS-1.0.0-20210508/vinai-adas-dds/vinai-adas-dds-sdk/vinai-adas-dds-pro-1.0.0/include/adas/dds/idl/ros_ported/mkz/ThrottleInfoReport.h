

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrottleInfoReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ThrottleInfoReport_1065356701_h
#define ThrottleInfoReport_1065356701_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *ThrottleInfoReportTYPENAME;

        struct ThrottleInfoReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ThrottleInfoReportTypeSupport;
        class ThrottleInfoReportDataWriter;
        class ThrottleInfoReportDataReader;
        #endif
        class ThrottleInfoReport 
        {
          public:
            typedef struct ThrottleInfoReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ThrottleInfoReportTypeSupport TypeSupport;
            typedef ThrottleInfoReportDataWriter DataWriter;
            typedef ThrottleInfoReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   throttle_pc ;
            DDS_Float   throttle_rate ;
            DDS_Float   engine_rpm ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ThrottleInfoReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ThrottleInfoReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleInfoReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleInfoReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ThrottleInfoReportSeq, ThrottleInfoReport);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize(
            ThrottleInfoReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize_ex(
            ThrottleInfoReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize_w_params(
            ThrottleInfoReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_finalize_w_return(
            ThrottleInfoReport* self);

        NDDSUSERDllExport
        void ThrottleInfoReport_finalize(
            ThrottleInfoReport* self);

        NDDSUSERDllExport
        void ThrottleInfoReport_finalize_ex(
            ThrottleInfoReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ThrottleInfoReport_finalize_w_params(
            ThrottleInfoReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ThrottleInfoReport_finalize_optional_members(
            ThrottleInfoReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_copy(
            ThrottleInfoReport* dst,
            const ThrottleInfoReport* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dbw_mkz_msgs::ThrottleInfoReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrottleInfoReport */

