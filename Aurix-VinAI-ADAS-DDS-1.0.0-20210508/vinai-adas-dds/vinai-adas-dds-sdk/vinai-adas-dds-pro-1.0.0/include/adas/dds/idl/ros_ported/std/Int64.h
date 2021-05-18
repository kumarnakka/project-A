

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int64.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int64_1102102712_h
#define Int64_1102102712_h

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

        extern const char *Int64TYPENAME;

        struct Int64Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int64TypeSupport;
        class Int64DataWriter;
        class Int64DataReader;
        #endif
        class Int64 
        {
          public:
            typedef struct Int64Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int64TypeSupport TypeSupport;
            typedef Int64DataWriter DataWriter;
            typedef Int64DataReader DataReader;
            #endif

            DDS_LongLong   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int64_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int64_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int64_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int64_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Int64Seq, Int64);

        NDDSUSERDllExport
        RTIBool Int64_initialize(
            Int64* self);

        NDDSUSERDllExport
        RTIBool Int64_initialize_ex(
            Int64* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int64_initialize_w_params(
            Int64* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int64_finalize_w_return(
            Int64* self);

        NDDSUSERDllExport
        void Int64_finalize(
            Int64* self);

        NDDSUSERDllExport
        void Int64_finalize_ex(
            Int64* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int64_finalize_w_params(
            Int64* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int64_finalize_optional_members(
            Int64* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int64_copy(
            Int64* dst,
            const Int64* src);

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
        struct type_code<adas_dds::std_msgs::Int64> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Int64 */

