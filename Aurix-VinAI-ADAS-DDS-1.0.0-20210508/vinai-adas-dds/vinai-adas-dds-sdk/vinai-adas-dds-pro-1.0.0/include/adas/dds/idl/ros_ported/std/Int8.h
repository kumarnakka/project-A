

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int8_591466031_h
#define Int8_591466031_h

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

        extern const char *Int8TYPENAME;

        struct Int8Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int8TypeSupport;
        class Int8DataWriter;
        class Int8DataReader;
        #endif
        class Int8 
        {
          public:
            typedef struct Int8Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int8TypeSupport TypeSupport;
            typedef Int8DataWriter DataWriter;
            typedef Int8DataReader DataReader;
            #endif

            DDS_Char   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int8_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int8_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int8_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int8_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Int8Seq, Int8);

        NDDSUSERDllExport
        RTIBool Int8_initialize(
            Int8* self);

        NDDSUSERDllExport
        RTIBool Int8_initialize_ex(
            Int8* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int8_initialize_w_params(
            Int8* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int8_finalize_w_return(
            Int8* self);

        NDDSUSERDllExport
        void Int8_finalize(
            Int8* self);

        NDDSUSERDllExport
        void Int8_finalize_ex(
            Int8* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int8_finalize_w_params(
            Int8* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int8_finalize_optional_members(
            Int8* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int8_copy(
            Int8* dst,
            const Int8* src);

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
        struct type_code<adas_dds::std_msgs::Int8> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Int8 */

