/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TirePressureReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TirePressureReport_604411076_h
#define TirePressureReport_604411076_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T TirePressureReport
        #define TSeq TirePressureReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T TirePressureReport
        #define TSeq TirePressureReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern TirePressureReport*
        TirePressureReport_create();

        NDDSUSERDllExport extern void
        TirePressureReport_delete(TirePressureReport* sample);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize(
            TirePressureReport* self);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize_ex(
            TirePressureReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TirePressureReport_initialize_w_params(
            TirePressureReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TirePressureReport_finalize(
            TirePressureReport* self);

        NDDSUSERDllExport
        RTIBool TirePressureReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TirePressureReport */

