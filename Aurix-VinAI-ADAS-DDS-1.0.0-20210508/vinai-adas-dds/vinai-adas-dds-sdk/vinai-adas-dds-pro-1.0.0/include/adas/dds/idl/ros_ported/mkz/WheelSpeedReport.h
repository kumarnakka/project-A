

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WheelSpeedReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WheelSpeedReport_126076829_h
#define WheelSpeedReport_126076829_h

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

        extern const char *WheelSpeedReportTYPENAME;

        struct WheelSpeedReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WheelSpeedReportTypeSupport;
        class WheelSpeedReportDataWriter;
        class WheelSpeedReportDataReader;
        #endif
        class WheelSpeedReport 
        {
          public:
            typedef struct WheelSpeedReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WheelSpeedReportTypeSupport TypeSupport;
            typedef WheelSpeedReportDataWriter DataWriter;
            typedef WheelSpeedReportDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* WheelSpeedReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *WheelSpeedReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WheelSpeedReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WheelSpeedReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(WheelSpeedReportSeq, WheelSpeedReport);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize(
            WheelSpeedReport* self);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize_ex(
            WheelSpeedReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize_w_params(
            WheelSpeedReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_finalize_w_return(
            WheelSpeedReport* self);

        NDDSUSERDllExport
        void WheelSpeedReport_finalize(
            WheelSpeedReport* self);

        NDDSUSERDllExport
        void WheelSpeedReport_finalize_ex(
            WheelSpeedReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void WheelSpeedReport_finalize_w_params(
            WheelSpeedReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void WheelSpeedReport_finalize_optional_members(
            WheelSpeedReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_copy(
            WheelSpeedReport* dst,
            const WheelSpeedReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::WheelSpeedReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WheelSpeedReport */

