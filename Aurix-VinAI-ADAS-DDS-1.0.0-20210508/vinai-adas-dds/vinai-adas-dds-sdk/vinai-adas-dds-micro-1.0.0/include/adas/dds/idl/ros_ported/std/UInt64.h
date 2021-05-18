/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt64.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UInt64_1578323976_h
#define UInt64_1578323976_h

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

        extern const char *UInt64TYPENAME;

        struct UInt64Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt64TypeSupport;
        class UInt64DataWriter;
        class UInt64DataReader;
        #endif
        class UInt64 
        {
          public:
            typedef struct UInt64Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt64TypeSupport TypeSupport;
            typedef UInt64DataWriter DataWriter;
            typedef UInt64DataReader DataReader;
            #endif

            DDS_UnsignedLongLong   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt64_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt64_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt64_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T UInt64
        #define TSeq UInt64Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T UInt64
        #define TSeq UInt64Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern UInt64*
        UInt64_create();

        NDDSUSERDllExport extern void
        UInt64_delete(UInt64* sample);

        NDDSUSERDllExport
        RTIBool UInt64_initialize(
            UInt64* self);

        NDDSUSERDllExport
        RTIBool UInt64_initialize_ex(
            UInt64* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt64_initialize_w_params(
            UInt64* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt64_finalize(
            UInt64* self);

        NDDSUSERDllExport
        RTIBool UInt64_finalize_w_return(
            UInt64* self);

        NDDSUSERDllExport
        void UInt64_finalize_ex(
            UInt64* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt64_finalize_w_params(
            UInt64* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt64_finalize_optional_members(
            UInt64* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt64_copy(
            UInt64* dst,
            const UInt64* src);

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

#endif /* UInt64 */

