/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SteeringReport.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef SteeringReport_1125893337_h
#define SteeringReport_1125893337_h

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

        extern const char *SteeringReportTYPENAME;

        struct SteeringReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SteeringReportTypeSupport;
        class SteeringReportDataWriter;
        class SteeringReportDataReader;
        #endif
        class SteeringReport 
        {
          public:
            typedef struct SteeringReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SteeringReportTypeSupport TypeSupport;
            typedef SteeringReportDataWriter DataWriter;
            typedef SteeringReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_Float   steering_wheel_angle ;
            DDS_Float   steering_wheel_angle_cmd ;
            DDS_Float   steering_wheel_torque ;
            DDS_Float   speed ;
            DDS_Boolean   enabled ;
            DDS_Boolean   override ;
            DDS_Boolean   timeout ;
            DDS_Boolean   fault_wdc ;
            DDS_Boolean   fault_bus1 ;
            DDS_Boolean   fault_bus2 ;
            DDS_Boolean   fault_calibration ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* SteeringReport_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *SteeringReport_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *SteeringReport_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T SteeringReport
        #define TSeq SteeringReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T SteeringReport
        #define TSeq SteeringReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern SteeringReport*
        SteeringReport_create();

        NDDSUSERDllExport extern void
        SteeringReport_delete(SteeringReport* sample);

        NDDSUSERDllExport
        RTIBool SteeringReport_initialize(
            SteeringReport* self);

        NDDSUSERDllExport
        RTIBool SteeringReport_initialize_ex(
            SteeringReport* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SteeringReport_initialize_w_params(
            SteeringReport* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool SteeringReport_finalize(
            SteeringReport* self);

        NDDSUSERDllExport
        RTIBool SteeringReport_finalize_w_return(
            SteeringReport* self);

        NDDSUSERDllExport
        void SteeringReport_finalize_ex(
            SteeringReport* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SteeringReport_finalize_w_params(
            SteeringReport* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SteeringReport_finalize_optional_members(
            SteeringReport* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SteeringReport_copy(
            SteeringReport* dst,
            const SteeringReport* src);

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

#endif /* SteeringReport */

