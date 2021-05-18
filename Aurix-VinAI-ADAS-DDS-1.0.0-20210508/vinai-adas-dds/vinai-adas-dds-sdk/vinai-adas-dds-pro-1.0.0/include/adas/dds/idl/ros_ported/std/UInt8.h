

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt8.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt8_1576659337_h
#define UInt8_1576659337_h

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

        extern const char *UInt8TYPENAME;

        struct UInt8Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt8TypeSupport;
        class UInt8DataWriter;
        class UInt8DataReader;
        #endif
        class UInt8 
        {
          public:
            typedef struct UInt8Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt8TypeSupport TypeSupport;
            typedef UInt8DataWriter DataWriter;
            typedef UInt8DataReader DataReader;
            #endif

            DDS_Octet   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt8_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt8_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt8_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt8_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(UInt8Seq, UInt8);

        NDDSUSERDllExport
        RTIBool UInt8_initialize(
            UInt8* self);

        NDDSUSERDllExport
        RTIBool UInt8_initialize_ex(
            UInt8* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt8_initialize_w_params(
            UInt8* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt8_finalize_w_return(
            UInt8* self);

        NDDSUSERDllExport
        void UInt8_finalize(
            UInt8* self);

        NDDSUSERDllExport
        void UInt8_finalize_ex(
            UInt8* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt8_finalize_w_params(
            UInt8* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt8_finalize_optional_members(
            UInt8* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt8_copy(
            UInt8* dst,
            const UInt8* src);

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
        struct type_code<adas_dds::std_msgs::UInt8> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UInt8 */

