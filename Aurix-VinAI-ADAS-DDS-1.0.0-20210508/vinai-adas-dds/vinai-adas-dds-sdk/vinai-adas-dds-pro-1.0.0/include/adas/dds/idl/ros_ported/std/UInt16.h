

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt16.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt16_1437025263_h
#define UInt16_1437025263_h

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

        extern const char *UInt16TYPENAME;

        struct UInt16Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt16TypeSupport;
        class UInt16DataWriter;
        class UInt16DataReader;
        #endif
        class UInt16 
        {
          public:
            typedef struct UInt16Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt16TypeSupport TypeSupport;
            typedef UInt16DataWriter DataWriter;
            typedef UInt16DataReader DataReader;
            #endif

            DDS_UnsignedShort   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt16_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt16_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt16_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt16_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(UInt16Seq, UInt16);

        NDDSUSERDllExport
        RTIBool UInt16_initialize(
            UInt16* self);

        NDDSUSERDllExport
        RTIBool UInt16_initialize_ex(
            UInt16* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt16_initialize_w_params(
            UInt16* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt16_finalize_w_return(
            UInt16* self);

        NDDSUSERDllExport
        void UInt16_finalize(
            UInt16* self);

        NDDSUSERDllExport
        void UInt16_finalize_ex(
            UInt16* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt16_finalize_w_params(
            UInt16* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt16_finalize_optional_members(
            UInt16* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt16_copy(
            UInt16* dst,
            const UInt16* src);

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
        struct type_code<adas_dds::std_msgs::UInt16> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* UInt16 */

