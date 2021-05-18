/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt8.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UInt8_1576659337_h
#define UInt8_1576659337_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T UInt8
        #define TSeq UInt8Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T UInt8
        #define TSeq UInt8Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern UInt8*
        UInt8_create();

        NDDSUSERDllExport extern void
        UInt8_delete(UInt8* sample);

        NDDSUSERDllExport
        RTIBool UInt8_initialize(
            UInt8* self);

        NDDSUSERDllExport
        RTIBool UInt8_initialize_ex(
            UInt8* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt8_initialize_w_params(
            UInt8* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt8_finalize(
            UInt8* self);

        NDDSUSERDllExport
        RTIBool UInt8_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UInt8 */

