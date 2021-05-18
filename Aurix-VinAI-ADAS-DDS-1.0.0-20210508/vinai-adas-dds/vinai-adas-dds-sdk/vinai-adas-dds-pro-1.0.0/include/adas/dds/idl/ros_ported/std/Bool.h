

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bool.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Bool_2069076595_h
#define Bool_2069076595_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace std_msgs {

        extern const char *BoolTYPENAME;

        struct BoolSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class BoolTypeSupport;
        class BoolDataWriter;
        class BoolDataReader;
        #endif
        class Bool 
        {
          public:
            typedef struct BoolSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef BoolTypeSupport TypeSupport;
            typedef BoolDataWriter DataWriter;
            typedef BoolDataReader DataReader;
            #endif

            DDS_Boolean   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Bool_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Bool_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bool_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bool_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(BoolSeq, Bool);

        NDDSUSERDllExport
        RTIBool Bool_initialize(
            Bool* self);

        NDDSUSERDllExport
        RTIBool Bool_initialize_ex(
            Bool* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Bool_initialize_w_params(
            Bool* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Bool_finalize_w_return(
            Bool* self);

        NDDSUSERDllExport
        void Bool_finalize(
            Bool* self);

        NDDSUSERDllExport
        void Bool_finalize_ex(
            Bool* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Bool_finalize_w_params(
            Bool* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Bool_finalize_optional_members(
            Bool* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Bool_copy(
            Bool* dst,
            const Bool* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace std_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::std_msgs::Bool> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Bool */

