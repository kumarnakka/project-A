

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeReference.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TimeReference_361237938_h
#define TimeReference_361237938_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "../std/Time.h"
namespace adas_dds {
    namespace sensor_msgs {

        extern const char *TimeReferenceTYPENAME;

        struct TimeReferenceSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TimeReferenceTypeSupport;
        class TimeReferenceDataWriter;
        class TimeReferenceDataReader;
        #endif
        class TimeReference 
        {
          public:
            typedef struct TimeReferenceSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TimeReferenceTypeSupport TypeSupport;
            typedef TimeReferenceDataWriter DataWriter;
            typedef TimeReferenceDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::std_msgs::Time   time_ref ;
            DDS_Char *   source ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TimeReference_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TimeReference_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TimeReference_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TimeReference_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TimeReferenceSeq, TimeReference);

        NDDSUSERDllExport
        RTIBool TimeReference_initialize(
            TimeReference* self);

        NDDSUSERDllExport
        RTIBool TimeReference_initialize_ex(
            TimeReference* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TimeReference_initialize_w_params(
            TimeReference* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TimeReference_finalize_w_return(
            TimeReference* self);

        NDDSUSERDllExport
        void TimeReference_finalize(
            TimeReference* self);

        NDDSUSERDllExport
        void TimeReference_finalize_ex(
            TimeReference* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TimeReference_finalize_w_params(
            TimeReference* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TimeReference_finalize_optional_members(
            TimeReference* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TimeReference_copy(
            TimeReference* dst,
            const TimeReference* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace sensor_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::sensor_msgs::TimeReference> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TimeReference */

