/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from String.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef String_419253281_h
#define String_419253281_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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

            DDS_String   data ;

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T String
        #define TSeq StringSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T String
        #define TSeq StringSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern String*
        String_create();

        NDDSUSERDllExport extern void
        String_delete(String* sample);

        NDDSUSERDllExport
        RTIBool String_initialize(
            String* self);

        NDDSUSERDllExport
        RTIBool String_initialize_ex(
            String* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool String_initialize_w_params(
            String* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool String_finalize(
            String* self);

        NDDSUSERDllExport
        RTIBool String_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* String */

