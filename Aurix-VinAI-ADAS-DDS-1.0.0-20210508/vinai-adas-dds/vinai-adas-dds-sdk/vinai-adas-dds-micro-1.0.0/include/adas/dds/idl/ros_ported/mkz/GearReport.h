/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef GearReport_533023647_h
#define GearReport_533023647_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T GearReport
        #define TSeq GearReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T GearReport
        #define TSeq GearReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern GearReport*
        GearReport_create();

        NDDSUSERDllExport extern void
        GearReport_delete(GearReport* sample);

        NDDSUSERDllExport
        RTIBool GearReport_initialize(
            GearReport* self);

        NDDSUSERDllExport
        RTIBool GearReport_initialize_ex(
            GearReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearReport_initialize_w_params(
            GearReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearReport_finalize(
            GearReport* self);

        NDDSUSERDllExport
        RTIBool GearReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GearReport */

