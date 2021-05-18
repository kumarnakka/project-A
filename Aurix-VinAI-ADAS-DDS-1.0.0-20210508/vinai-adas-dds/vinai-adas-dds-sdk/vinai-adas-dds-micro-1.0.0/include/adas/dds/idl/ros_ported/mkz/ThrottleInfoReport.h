/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrottleInfoReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ThrottleInfoReport_1065356701_h
#define ThrottleInfoReport_1065356701_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T ThrottleInfoReport
        #define TSeq ThrottleInfoReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T ThrottleInfoReport
        #define TSeq ThrottleInfoReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern ThrottleInfoReport*
        ThrottleInfoReport_create();

        NDDSUSERDllExport extern void
        ThrottleInfoReport_delete(ThrottleInfoReport* sample);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize(
            ThrottleInfoReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize_ex(
            ThrottleInfoReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_initialize_w_params(
            ThrottleInfoReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_finalize(
            ThrottleInfoReport* self);

        NDDSUSERDllExport
        RTIBool ThrottleInfoReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrottleInfoReport */

