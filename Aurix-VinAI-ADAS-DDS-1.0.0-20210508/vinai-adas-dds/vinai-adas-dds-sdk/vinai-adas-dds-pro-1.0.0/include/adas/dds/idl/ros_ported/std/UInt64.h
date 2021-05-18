

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt64.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt64_1578323976_h
#define UInt64_1578323976_h

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

        extern const char *UInt64TYPENAME;

        struct UInt64Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt64TypeSupport;
        class UInt64DataWriter;
        class UInt64DataReader;
        #endif
        class UInt64 
        {
          public:
            typedef struct UInt64Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt64TypeSupport TypeSupport;
            typedef UInt64DataWriter DataWriter;
            typedef UInt64DataReader DataReader;
            #endif

            DDS_UnsignedLongLong   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt64_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt64_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt64_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt64_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(UInt64Seq, UInt64);

        NDDSUSERDllExport
        RTIBool UInt64_initialize(
            UInt64* self);

        NDDSUSERDllExport
        RTIBool UInt64_initialize_ex(
            UInt64* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt64_initialize_w_params(
            UInt64* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt64_finalize_w_return(
            UInt64* self);

        NDDSUSERDllExport
        void UInt64_finalize(
            UInt64* self);

        NDDSUSERDllExport
        void UInt64_finalize_ex(
            UInt64* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt64_finalize_w_params(
            UInt64* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt64_finalize_optional_members(
            UInt64* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt64_copy(
            UInt64* dst,
            const UInt64* src);

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
        struct type_code<adas_dds::std_msgs::UInt64> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UInt64 */

