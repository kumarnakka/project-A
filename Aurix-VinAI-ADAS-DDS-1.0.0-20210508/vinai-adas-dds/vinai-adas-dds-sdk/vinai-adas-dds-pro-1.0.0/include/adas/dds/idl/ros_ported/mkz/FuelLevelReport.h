

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FuelLevelReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FuelLevelReport_1924466749_h
#define FuelLevelReport_1924466749_h

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

        extern const char *FuelLevelReportTYPENAME;

        struct FuelLevelReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class FuelLevelReportTypeSupport;
        class FuelLevelReportDataWriter;
        class FuelLevelReportDataReader;
        #endif
        class FuelLevelReport 
        {
          public:
            typedef struct FuelLevelReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef FuelLevelReportTypeSupport TypeSupport;
            typedef FuelLevelReportDataWriter DataWriter;
            typedef FuelLevelReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   fuel_level ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* FuelLevelReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *FuelLevelReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelLevelReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelLevelReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(FuelLevelReportSeq, FuelLevelReport);

        NDDSUSERDllExport
        RTIBool FuelLevelReport_initialize(
            FuelLevelReport* self);

        NDDSUSERDllExport
        RTIBool FuelLevelReport_initialize_ex(
            FuelLevelReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool FuelLevelReport_initialize_w_params(
            FuelLevelReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool FuelLevelReport_finalize_w_return(
            FuelLevelReport* self);

        NDDSUSERDllExport
        void FuelLevelReport_finalize(
            FuelLevelReport* self);

        NDDSUSERDllExport
        void FuelLevelReport_finalize_ex(
            FuelLevelReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void FuelLevelReport_finalize_w_params(
            FuelLevelReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void FuelLevelReport_finalize_optional_members(
            FuelLevelReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool FuelLevelReport_copy(
            FuelLevelReport* dst,
            const FuelLevelReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::FuelLevelReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FuelLevelReport */

