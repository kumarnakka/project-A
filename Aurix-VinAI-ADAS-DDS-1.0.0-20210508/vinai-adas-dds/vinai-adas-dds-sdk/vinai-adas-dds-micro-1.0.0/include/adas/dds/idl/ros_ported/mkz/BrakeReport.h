/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BrakeReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef BrakeReport_28033801_h
#define BrakeReport_28033801_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../std/Header.h"

#include "WatchdogCounter.h"

namespace adas_dds {

    namespace dbw_mkz_msgs {

        extern const char *BrakeReportTYPENAME;

        struct BrakeReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class BrakeReportTypeSupport;
        class BrakeReportDataWriter;
        class BrakeReportDataReader;
        #endif
        class BrakeReport 
        {
          public:
            typedef struct BrakeReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef BrakeReportTypeSupport TypeSupport;
            typedef BrakeReportDataWriter DataWriter;
            typedef BrakeReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   pedal_input ;
            DDS_Float   pedal_cmd ;
            DDS_Float   pedal_output ;
            DDS_Float   torque_input ;
            DDS_Float   torque_cmd ;
            DDS_Float   torque_output ;
            DDS_Boolean   boo_input ;
            DDS_Boolean   boo_cmd ;
            DDS_Boolean   boo_output ;
            DDS_Boolean   enabled ;
            DDS_Boolean   override ;
            DDS_Boolean   driver ;
            DDS_Boolean   timeout ;
            adas_dds::dbw_mkz_msgs::WatchdogCounter   watchdog_counter ;
            DDS_Boolean   watchdog_braking ;
            DDS_Boolean   fault_wdc ;
            DDS_Boolean   fault_ch1 ;
            DDS_Boolean   fault_ch2 ;
            DDS_Boolean   fault_boo ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* BrakeReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *BrakeReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *BrakeReport_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T BrakeReport
        #define TSeq BrakeReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T BrakeReport
        #define TSeq BrakeReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern BrakeReport*
        BrakeReport_create();

        NDDSUSERDllExport extern void
        BrakeReport_delete(BrakeReport* sample);

        NDDSUSERDllExport
        RTIBool BrakeReport_initialize(
            BrakeReport* self);

        NDDSUSERDllExport
        RTIBool BrakeReport_initialize_ex(
            BrakeReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool BrakeReport_initialize_w_params(
            BrakeReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool BrakeReport_finalize(
            BrakeReport* self);

        NDDSUSERDllExport
        RTIBool BrakeReport_finalize_w_return(
            BrakeReport* self);

        NDDSUSERDllExport
        void BrakeReport_finalize_ex(
            BrakeReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void BrakeReport_finalize_w_params(
            BrakeReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void BrakeReport_finalize_optional_members(
            BrakeReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool BrakeReport_copy(
            BrakeReport* dst,
            const BrakeReport* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dbw_mkz_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BrakeReport */

