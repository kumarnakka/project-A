/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrottleReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ThrottleReport_14799960_h
#define ThrottleReport_14799960_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T ThrottleReport
        #define TSeq ThrottleReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T ThrottleReport
        #define TSeq ThrottleReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern ThrottleReport*
        ThrottleReport_create();

        NDDSUSERDllExport extern void
        ThrottleReport_delete(ThrottleReport* sample);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize(
            ThrottleReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize_ex(
            ThrottleReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleReport_initialize_w_params(
            ThrottleReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleReport_finalize(
            ThrottleReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrottleReport */

