

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SurroundReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SurroundReport_1647256963_h
#define SurroundReport_1647256963_h

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

        extern const char *SurroundReportTYPENAME;

        struct SurroundReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SurroundReportTypeSupport;
        class SurroundReportDataWriter;
        class SurroundReportDataReader;
        #endif
        class SurroundReport 
        {
          public:
            typedef struct SurroundReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SurroundReportTypeSupport TypeSupport;
            typedef SurroundReportDataWriter DataWriter;
            typedef SurroundReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Boolean   cta_left_alert ;
            DDS_Boolean   cta_right_alert ;
            DDS_Boolean   cta_left_enabled ;
            DDS_Boolean   cta_right_enabled ;
            DDS_Boolean   blis_left_alert ;
            DDS_Boolean   blis_right_alert ;
            DDS_Boolean   blis_left_enabled ;
            DDS_Boolean   blis_right_enabled ;
            DDS_Boolean   sonar_enabled ;
            DDS_Boolean   sonar_fault ;
            DDS_Float   sonar [12];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* SurroundReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *SurroundReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *SurroundReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *SurroundReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(SurroundReportSeq, SurroundReport);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize(
            SurroundReport* self);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize_ex(
            SurroundReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize_w_params(
            SurroundReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool SurroundReport_finalize_w_return(
            SurroundReport* self);

        NDDSUSERDllExport
        void SurroundReport_finalize(
            SurroundReport* self);

        NDDSUSERDllExport
        void SurroundReport_finalize_ex(
            SurroundReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SurroundReport_finalize_w_params(
            SurroundReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SurroundReport_finalize_optional_members(
            SurroundReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SurroundReport_copy(
            SurroundReport* dst,
            const SurroundReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::SurroundReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SurroundReport */

