

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float64.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float64_1024553971_h
#define Float64_1024553971_h

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

        extern const char *Float64TYPENAME;

        struct Float64Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Float64TypeSupport;
        class Float64DataWriter;
        class Float64DataReader;
        #endif
        class Float64 
        {
          public:
            typedef struct Float64Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Float64TypeSupport TypeSupport;
            typedef Float64DataWriter DataWriter;
            typedef Float64DataReader DataReader;
            #endif

            DDS_Float   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Float64_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Float64_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float64_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float64_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Float64Seq, Float64);

        NDDSUSERDllExport
        RTIBool Float64_initialize(
            Float64* self);

        NDDSUSERDllExport
        RTIBool Float64_initialize_ex(
            Float64* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Float64_initialize_w_params(
            Float64* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Float64_finalize_w_return(
            Float64* self);

        NDDSUSERDllExport
        void Float64_finalize(
            Float64* self);

        NDDSUSERDllExport
        void Float64_finalize_ex(
            Float64* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Float64_finalize_w_params(
            Float64* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Float64_finalize_optional_members(
            Float64* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Float64_copy(
            Float64* dst,
            const Float64* src);

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
        struct type_code<adas_dds::std_msgs::Float64> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Float64 */

