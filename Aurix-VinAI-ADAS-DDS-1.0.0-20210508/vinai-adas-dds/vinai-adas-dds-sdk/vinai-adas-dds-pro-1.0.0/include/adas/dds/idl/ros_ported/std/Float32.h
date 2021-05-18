

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float32_1112288466_h
#define Float32_1112288466_h

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

        extern const char *Float32TYPENAME;

        struct Float32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Float32TypeSupport;
        class Float32DataWriter;
        class Float32DataReader;
        #endif
        class Float32 
        {
          public:
            typedef struct Float32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Float32TypeSupport TypeSupport;
            typedef Float32DataWriter DataWriter;
            typedef Float32DataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* Float32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Float32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float32_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float32_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Float32Seq, Float32);

        NDDSUSERDllExport
        RTIBool Float32_initialize(
            Float32* self);

        NDDSUSERDllExport
        RTIBool Float32_initialize_ex(
            Float32* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Float32_initialize_w_params(
            Float32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Float32_finalize_w_return(
            Float32* self);

        NDDSUSERDllExport
        void Float32_finalize(
            Float32* self);

        NDDSUSERDllExport
        void Float32_finalize_ex(
            Float32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Float32_finalize_w_params(
            Float32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Float32_finalize_optional_members(
            Float32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Float32_copy(
            Float32* dst,
            const Float32* src);

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
        struct type_code<adas_dds::std_msgs::Float32> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Float32 */

