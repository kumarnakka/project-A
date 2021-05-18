

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BrakeInfoReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BrakeInfoReport_1227183420_h
#define BrakeInfoReport_1227183420_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "HillStartAssist.h"
#include "ParkingBrake.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *BrakeInfoReportTYPENAME;

        struct BrakeInfoReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class BrakeInfoReportTypeSupport;
        class BrakeInfoReportDataWriter;
        class BrakeInfoReportDataReader;
        #endif
        class BrakeInfoReport 
        {
          public:
            typedef struct BrakeInfoReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef BrakeInfoReportTypeSupport TypeSupport;
            typedef BrakeInfoReportDataWriter DataWriter;
            typedef BrakeInfoReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   brake_torque_request ;
            DDS_Float   brake_torque_actual ;
            DDS_Float   wheel_torque_actual ;
            DDS_Float   accel_over_ground ;
            adas_dds::dbw_mkz_msgs::HillStartAssist   m_hsa ;
            DDS_Boolean   abs_active ;
            DDS_Boolean   abs_enabled ;
            DDS_Boolean   stab_active ;
            DDS_Boolean   stab_enabled ;
            DDS_Boolean   trac_active ;
            DDS_Boolean   trac_enabled ;
            adas_dds::dbw_mkz_msgs::ParkingBrake   parking_brake ;
            DDS_Boolean   stationary ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* BrakeInfoReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *BrakeInfoReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *BrakeInfoReport_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *BrakeInfoReport_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(BrakeInfoReportSeq, BrakeInfoReport);

        NDDSUSERDllExport
        RTIBool BrakeInfoReport_initialize(
            BrakeInfoReport* self);

        NDDSUSERDllExport
        RTIBool BrakeInfoReport_initialize_ex(
            BrakeInfoReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool BrakeInfoReport_initialize_w_params(
            BrakeInfoReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool BrakeInfoReport_finalize_w_return(
            BrakeInfoReport* self);

        NDDSUSERDllExport
        void BrakeInfoReport_finalize(
            BrakeInfoReport* self);

        NDDSUSERDllExport
        void BrakeInfoReport_finalize_ex(
            BrakeInfoReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void BrakeInfoReport_finalize_w_params(
            BrakeInfoReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void BrakeInfoReport_finalize_optional_members(
            BrakeInfoReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool BrakeInfoReport_copy(
            BrakeInfoReport* dst,
            const BrakeInfoReport* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::BrakeInfoReport> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BrakeInfoReport */

