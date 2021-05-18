

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TirePressureReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TirePressureReport_604411076_h
#define TirePressureReport_604411076_h

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

        extern const char *TirePressureReportTYPENAME;

        struct TirePressureReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TirePressureReportTypeSupport;
        class TirePressureReportDataWriter;
        class TirePressureReportDataReader;
        #endif
        class TirePressureReport 
        {
          public:
            typedef struct TirePressureReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TirePressureReportTypeSupport TypeSupport;
            typedef TirePressureReportDataWriter DataWriter;
            typedef TirePressureReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   front_left ;
            DDS_Float   front_right ;
            DDS_Float   rear_left ;
            DDS_Float   rear_right ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TirePressureReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TirePressureReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TirePressureReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TirePressureReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TirePressureReportSeq, TirePressureReport);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize(
            TirePressureReport* self);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize_ex(
            TirePressureReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize_w_params(
            TirePressureReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TirePressureReport_finalize_w_return(
            TirePressureReport* self);

        NDDSUSERDllExport
        void TirePressureReport_finalize(
            TirePressureReport* self);

        NDDSUSERDllExport
        void TirePressureReport_finalize_ex(
            TirePressureReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TirePressureReport_finalize_w_params(
            TirePressureReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TirePressureReport_finalize_optional_members(
            TirePressureReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TirePressureReport_copy(
            TirePressureReport* dst,
            const TirePressureReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::TirePressureReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TirePressureReport */

