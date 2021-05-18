

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int32_1014368217_h
#define Int32_1014368217_h

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

        extern const char *Int32TYPENAME;

        struct Int32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int32TypeSupport;
        class Int32DataWriter;
        class Int32DataReader;
        #endif
        class Int32 
        {
          public:
            typedef struct Int32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int32TypeSupport TypeSupport;
            typedef Int32DataWriter DataWriter;
            typedef Int32DataReader DataReader;
            #endif

            DDS_Long   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int32_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int32_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Int32Seq, Int32);

        NDDSUSERDllExport
        RTIBool Int32_initialize(
            Int32* self);

        NDDSUSERDllExport
        RTIBool Int32_initialize_ex(
            Int32* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int32_initialize_w_params(
            Int32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int32_finalize_w_return(
            Int32* self);

        NDDSUSERDllExport
        void Int32_finalize(
            Int32* self);

        NDDSUSERDllExport
        void Int32_finalize_ex(
            Int32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int32_finalize_w_params(
            Int32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int32_finalize_optional_members(
            Int32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int32_copy(
            Int32* dst,
            const Int32* src);

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
        struct type_code<adas_dds::std_msgs::Int32> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Int32 */

