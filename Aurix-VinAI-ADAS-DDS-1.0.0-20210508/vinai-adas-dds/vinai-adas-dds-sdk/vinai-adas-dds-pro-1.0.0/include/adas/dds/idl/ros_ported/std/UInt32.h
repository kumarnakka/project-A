

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt32_1490589481_h
#define UInt32_1490589481_h

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

        extern const char *UInt32TYPENAME;

        struct UInt32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt32TypeSupport;
        class UInt32DataWriter;
        class UInt32DataReader;
        #endif
        class UInt32 
        {
          public:
            typedef struct UInt32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt32TypeSupport TypeSupport;
            typedef UInt32DataWriter DataWriter;
            typedef UInt32DataReader DataReader;
            #endif

            DDS_UnsignedLong   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt32_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt32_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(UInt32Seq, UInt32);

        NDDSUSERDllExport
        RTIBool UInt32_initialize(
            UInt32* self);

        NDDSUSERDllExport
        RTIBool UInt32_initialize_ex(
            UInt32* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt32_initialize_w_params(
            UInt32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt32_finalize_w_return(
            UInt32* self);

        NDDSUSERDllExport
        void UInt32_finalize(
            UInt32* self);

        NDDSUSERDllExport
        void UInt32_finalize_ex(
            UInt32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt32_finalize_w_params(
            UInt32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt32_finalize_optional_members(
            UInt32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt32_copy(
            UInt32* dst,
            const UInt32* src);

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
        struct type_code<adas_dds::std_msgs::UInt32> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UInt32 */

