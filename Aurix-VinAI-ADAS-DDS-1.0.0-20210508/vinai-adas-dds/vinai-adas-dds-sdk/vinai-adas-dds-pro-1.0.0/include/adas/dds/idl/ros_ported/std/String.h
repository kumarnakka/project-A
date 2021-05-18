

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from String.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef String_419253281_h
#define String_419253281_h

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

        extern const char *StringTYPENAME;

        struct StringSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class StringTypeSupport;
        class StringDataWriter;
        class StringDataReader;
        #endif
        class String 
        {
          public:
            typedef struct StringSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef StringTypeSupport TypeSupport;
            typedef StringDataWriter DataWriter;
            typedef StringDataReader DataReader;
            #endif

            DDS_Char *   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* String_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *String_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *String_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *String_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(StringSeq, String);

        NDDSUSERDllExport
        RTIBool String_initialize(
            String* self);

        NDDSUSERDllExport
        RTIBool String_initialize_ex(
            String* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool String_initialize_w_params(
            String* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool String_finalize_w_return(
            String* self);

        NDDSUSERDllExport
        void String_finalize(
            String* self);

        NDDSUSERDllExport
        void String_finalize_ex(
            String* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void String_finalize_w_params(
            String* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void String_finalize_optional_members(
            String* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool String_copy(
            String* dst,
            const String* src);

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
        struct type_code<adas_dds::std_msgs::String> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* String */

