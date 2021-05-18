

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrottleReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ThrottleReport_14799960_h
#define ThrottleReport_14799960_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "WatchdogCounter.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *ThrottleReportTYPENAME;

        struct ThrottleReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ThrottleReportTypeSupport;
        class ThrottleReportDataWriter;
        class ThrottleReportDataReader;
        #endif
        class ThrottleReport 
        {
          public:
            typedef struct ThrottleReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ThrottleReportTypeSupport TypeSupport;
            typedef ThrottleReportDataWriter DataWriter;
            typedef ThrottleReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   pedal_input ;
            DDS_Float   pedal_cmd ;
            DDS_Float   pedal_output ;
            DDS_Boolean   enabled ;
            DDS_Boolean   override ;
            DDS_Boolean   driver ;
            DDS_Boolean   timeout ;
            adas_dds::dbw_mkz_msgs::WatchdogCounter   watchdog_counter ;
            DDS_Boolean   fault_wdc ;
            DDS_Boolean   fault_ch1 ;
            DDS_Boolean   fault_ch2 ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ThrottleReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ThrottleReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ThrottleReportSeq, ThrottleReport);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize(
            ThrottleReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize_ex(
            ThrottleReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize_w_params(
            ThrottleReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleReport_finalize_w_return(
            ThrottleReport* self);

        NDDSUSERDllExport
        void ThrottleReport_finalize(
            ThrottleReport* self);

        NDDSUSERDllExport
        void ThrottleReport_finalize_ex(
            ThrottleReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ThrottleReport_finalize_w_params(
            ThrottleReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ThrottleReport_finalize_optional_members(
            ThrottleReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ThrottleReport_copy(
            ThrottleReport* dst,
            const ThrottleReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::ThrottleReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrottleReport */

