/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HillStartAssist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef HillStartAssist_816376833_h
#define HillStartAssist_816376833_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T HillStartAssist
        #define TSeq HillStartAssistSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T HillStartAssist
        #define TSeq HillStartAssistSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern HillStartAssist*
        HillStartAssist_create();

        NDDSUSERDllExport extern void
        HillStartAssist_delete(HillStartAssist* sample);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize(
            HillStartAssist* self);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize_ex(
            HillStartAssist* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HillStartAssist_initialize_w_params(
            HillStartAssist* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HillStartAssist_finalize(
            HillStartAssist* self);

        NDDSUSERDllExport
        RTIBool HillStartAssist_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HillStartAssist */

