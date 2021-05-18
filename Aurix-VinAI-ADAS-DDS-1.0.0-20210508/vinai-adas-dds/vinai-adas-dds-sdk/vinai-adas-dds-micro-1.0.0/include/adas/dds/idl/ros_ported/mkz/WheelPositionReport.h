/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WheelPositionReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef WheelPositionReport_110281201_h
#define WheelPositionReport_110281201_h

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

        extern const char *WheelPositionReportTYPENAME;

        struct WheelPositionReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WheelPositionReportTypeSupport;
        class WheelPositionReportDataWriter;
        class WheelPositionReportDataReader;
        #endif
        class WheelPositionReport 
        {
          public:
            typedef struct WheelPositionReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WheelPositionReportTypeSupport TypeSupport;
            typedef WheelPositionReportDataWriter DataWriter;
            typedef WheelPositionReportDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* WheelPositionReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *WheelPositionReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WheelPositionReport_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T WheelPositionReport
        #define TSeq WheelPositionReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T WheelPositionReport
        #define TSeq WheelPositionReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern WheelPositionReport*
        WheelPositionReport_create();

        NDDSUSERDllExport extern void
        WheelPositionReport_delete(WheelPositionReport* sample);

        NDDSUSERDllExport
        RTIBool WheelPositionReport_initialize(
            WheelPositionReport* self);

        NDDSUSERDllExport
        RTIBool WheelPositionReport_initialize_ex(
            WheelPositionReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WheelPositionReport_initialize_w_params(
            WheelPositionReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WheelPositionReport_finalize(
            WheelPositionReport* self);

        NDDSUSERDllExport
        RTIBool WheelPositionReport_finalize_w_return(
            WheelPositionReport* self);

        NDDSUSERDllExport
        void WheelPositionReport_finalize_ex(
            WheelPositionReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void WheelPositionReport_finalize_w_params(
            WheelPositionReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void WheelPositionReport_finalize_optional_members(
            WheelPositionReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool WheelPositionReport_copy(
            WheelPositionReport* dst,
            const WheelPositionReport* src);

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

#endif /* WheelPositionReport */

