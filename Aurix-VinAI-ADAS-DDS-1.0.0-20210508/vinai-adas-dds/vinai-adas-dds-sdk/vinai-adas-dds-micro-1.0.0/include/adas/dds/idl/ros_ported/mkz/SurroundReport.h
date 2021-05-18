/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SurroundReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef SurroundReport_1647256963_h
#define SurroundReport_1647256963_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T SurroundReport
        #define TSeq SurroundReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T SurroundReport
        #define TSeq SurroundReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern SurroundReport*
        SurroundReport_create();

        NDDSUSERDllExport extern void
        SurroundReport_delete(SurroundReport* sample);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize(
            SurroundReport* self);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize_ex(
            SurroundReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SurroundReport_initialize_w_params(
            SurroundReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool SurroundReport_finalize(
            SurroundReport* self);

        NDDSUSERDllExport
        RTIBool SurroundReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SurroundReport */

