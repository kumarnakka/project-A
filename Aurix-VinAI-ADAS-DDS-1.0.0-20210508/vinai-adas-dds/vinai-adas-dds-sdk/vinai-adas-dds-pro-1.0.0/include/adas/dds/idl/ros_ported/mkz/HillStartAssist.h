

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HillStartAssist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HillStartAssist_816376833_h
#define HillStartAssist_816376833_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *HillStartAssistTYPENAME;

        struct HillStartAssistSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HillStartAssistTypeSupport;
        class HillStartAssistDataWriter;
        class HillStartAssistDataReader;
        #endif
        class HillStartAssist 
        {
          public:
            typedef struct HillStartAssistSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HillStartAssistTypeSupport TypeSupport;
            typedef HillStartAssistDataWriter DataWriter;
            typedef HillStartAssistDataReader DataReader;
            #endif

            DDS_Octet   status ;
            DDS_Octet   mode ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* HillStartAssist_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HillStartAssist_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HillStartAssist_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HillStartAssist_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HillStartAssistSeq, HillStartAssist);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize(
            HillStartAssist* self);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize_ex(
            HillStartAssist* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize_w_params(
            HillStartAssist* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HillStartAssist_finalize_w_return(
            HillStartAssist* self);

        NDDSUSERDllExport
        void HillStartAssist_finalize(
            HillStartAssist* self);

        NDDSUSERDllExport
        void HillStartAssist_finalize_ex(
            HillStartAssist* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HillStartAssist_finalize_w_params(
            HillStartAssist* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HillStartAssist_finalize_optional_members(
            HillStartAssist* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HillStartAssist_copy(
            HillStartAssist* dst,
            const HillStartAssist* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::HillStartAssist> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HillStartAssist */

