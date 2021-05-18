

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Misc1Report.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Misc1Report_858438373_h
#define Misc1Report_858438373_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "Wiper.h"
#include "TurnSignal.h"
#include "AmbientLight.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *Misc1ReportTYPENAME;

        struct Misc1ReportSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class Misc1ReportTypeSupport;
        class Misc1ReportDataWriter;
        class Misc1ReportDataReader;
        #endif
        class Misc1Report 
        {
          public:
            typedef struct Misc1ReportSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Misc1ReportTypeSupport TypeSupport;
            typedef Misc1ReportDataWriter DataWriter;
            typedef Misc1ReportDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::dbw_mkz_msgs::TurnSignal   turn_signal ;
            DDS_Boolean   high_beam_headlights ;
            adas_dds::dbw_mkz_msgs::Wiper   wiper ;
            adas_dds::dbw_mkz_msgs::AmbientLight   ambient_light ;
            DDS_Boolean   btn_cc_on ;
            DDS_Boolean   btn_cc_off ;
            DDS_Boolean   btn_cc_on_off ;
            DDS_Boolean   btn_cc_cncl ;
            DDS_Boolean   btn_cc_res ;
            DDS_Boolean   btn_cc_res_cncl ;
            DDS_Boolean   btn_cc_set_inc ;
            DDS_Boolean   btn_cc_set_dec ;
            DDS_Boolean   btn_cc_gap_inc ;
            DDS_Boolean   btn_cc_gap_dec ;
            DDS_Boolean   btn_la_on_off ;
            DDS_Boolean   btn_ld_ok ;
            DDS_Boolean   btn_ld_up ;
            DDS_Boolean   btn_ld_down ;
            DDS_Boolean   btn_ld_left ;
            DDS_Boolean   btn_ld_right ;
            DDS_Boolean   fault_bus ;
            DDS_Boolean   door_driver ;
            DDS_Boolean   door_passenger ;
            DDS_Boolean   door_rear_left ;
            DDS_Boolean   door_rear_right ;
            DDS_Boolean   door_hood ;
            DDS_Boolean   door_trunk ;
            DDS_Boolean   passenger_detect ;
            DDS_Boolean   passenger_airbag ;
            DDS_Boolean   buckle_driver ;
            DDS_Boolean   buckle_passenger ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Misc1Report_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Misc1Report_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Misc1Report_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Misc1Report_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Misc1ReportSeq, Misc1Report);

        NDDSUSERDllExport
        RTIBool Misc1Report_initialize(
            Misc1Report* self);

        NDDSUSERDllExport
        RTIBool Misc1Report_initialize_ex(
            Misc1Report* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Misc1Report_initialize_w_params(
            Misc1Report* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Misc1Report_finalize_w_return(
            Misc1Report* self);

        NDDSUSERDllExport
        void Misc1Report_finalize(
            Misc1Report* self);

        NDDSUSERDllExport
        void Misc1Report_finalize_ex(
            Misc1Report* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Misc1Report_finalize_w_params(
            Misc1Report* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Misc1Report_finalize_optional_members(
            Misc1Report* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Misc1Report_copy(
            Misc1Report* dst,
            const Misc1Report* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::Misc1Report> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Misc1Report */

