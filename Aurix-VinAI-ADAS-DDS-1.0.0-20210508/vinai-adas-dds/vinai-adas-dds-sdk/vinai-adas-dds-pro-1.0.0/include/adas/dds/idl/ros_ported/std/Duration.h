

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Duration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Duration_1772276054_h
#define Duration_1772276054_h

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

        extern const char *DurationTYPENAME;

        struct DurationSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DurationTypeSupport;
        class DurationDataWriter;
        class DurationDataReader;
        #endif
        class Duration 
        {
          public:
            typedef struct DurationSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DurationTypeSupport TypeSupport;
            typedef DurationDataWriter DataWriter;
            typedef DurationDataReader DataReader;
            #endif

            DDS_UnsignedLong   sec ;
            DDS_UnsignedLong   nsec ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Duration_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Duration_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Duration_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Duration_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(DurationSeq, Duration);

        NDDSUSERDllExport
        RTIBool Duration_initialize(
            Duration* self);

        NDDSUSERDllExport
        RTIBool Duration_initialize_ex(
            Duration* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Duration_initialize_w_params(
            Duration* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Duration_finalize_w_return(
            Duration* self);

        NDDSUSERDllExport
        void Duration_finalize(
            Duration* self);

        NDDSUSERDllExport
        void Duration_finalize_ex(
            Duration* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Duration_finalize_w_params(
            Duration* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Duration_finalize_optional_members(
            Duration* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Duration_copy(
            Duration* dst,
            const Duration* src);

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
        struct type_code<adas_dds::std_msgs::Duration> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Duration */

