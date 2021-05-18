/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WheelSpeedReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef WheelSpeedReport_126076829_h
#define WheelSpeedReport_126076829_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T WheelSpeedReport
        #define TSeq WheelSpeedReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T WheelSpeedReport
        #define TSeq WheelSpeedReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern WheelSpeedReport*
        WheelSpeedReport_create();

        NDDSUSERDllExport extern void
        WheelSpeedReport_delete(WheelSpeedReport* sample);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize(
            WheelSpeedReport* self);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize_ex(
            WheelSpeedReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_initialize_w_params(
            WheelSpeedReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_finalize(
            WheelSpeedReport* self);

        NDDSUSERDllExport
        RTIBool WheelSpeedReport_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WheelSpeedReport */

