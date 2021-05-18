

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int16.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int16_960803999_h
#define Int16_960803999_h

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

        extern const char *Int16TYPENAME;

        struct Int16Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int16TypeSupport;
        class Int16DataWriter;
        class Int16DataReader;
        #endif
        class Int16 
        {
          public:
            typedef struct Int16Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int16TypeSupport TypeSupport;
            typedef Int16DataWriter DataWriter;
            typedef Int16DataReader DataReader;
            #endif

            DDS_Short   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int16_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int16_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int16_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int16_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Int16Seq, Int16);

        NDDSUSERDllExport
        RTIBool Int16_initialize(
            Int16* self);

        NDDSUSERDllExport
        RTIBool Int16_initialize_ex(
            Int16* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int16_initialize_w_params(
            Int16* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int16_finalize_w_return(
            Int16* self);

        NDDSUSERDllExport
        void Int16_finalize(
            Int16* self);

        NDDSUSERDllExport
        void Int16_finalize_ex(
            Int16* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int16_finalize_w_params(
            Int16* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int16_finalize_optional_members(
            Int16* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int16_copy(
            Int16* dst,
            const Int16* src);

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
        struct type_code<adas_dds::std_msgs::Int16> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Int16 */

