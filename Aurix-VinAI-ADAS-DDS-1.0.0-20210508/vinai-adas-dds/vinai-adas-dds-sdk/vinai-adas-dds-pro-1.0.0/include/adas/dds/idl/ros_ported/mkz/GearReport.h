

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GearReport_533023647_h
#define GearReport_533023647_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "Gear.h"
#include "GearReject.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *GearReportTYPENAME;

        struct GearReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class GearReportTypeSupport;
        class GearReportDataWriter;
        class GearReportDataReader;
        #endif
        class GearReport 
        {
          public:
            typedef struct GearReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef GearReportTypeSupport TypeSupport;
            typedef GearReportDataWriter DataWriter;
            typedef GearReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::dbw_mkz_msgs::Gear   state ;
            adas_dds::dbw_mkz_msgs::Gear   cmd ;
            adas_dds::dbw_mkz_msgs::GearReject   reject ;
            DDS_Boolean   override ;
            DDS_Boolean   fault_bus ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* GearReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *GearReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(GearReportSeq, GearReport);

        NDDSUSERDllExport
        RTIBool GearReport_initialize(
            GearReport* self);

        NDDSUSERDllExport
        RTIBool GearReport_initialize_ex(
            GearReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearReport_initialize_w_params(
            GearReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearReport_finalize_w_return(
            GearReport* self);

        NDDSUSERDllExport
        void GearReport_finalize(
            GearReport* self);

        NDDSUSERDllExport
        void GearReport_finalize_ex(
            GearReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void GearReport_finalize_w_params(
            GearReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void GearReport_finalize_optional_members(
            GearReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool GearReport_copy(
            GearReport* dst,
            const GearReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::GearReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GearReport */

