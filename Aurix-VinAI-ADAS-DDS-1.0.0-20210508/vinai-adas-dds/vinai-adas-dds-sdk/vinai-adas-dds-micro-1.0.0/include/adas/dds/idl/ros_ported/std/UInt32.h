/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UInt32_1490589481_h
#define UInt32_1490589481_h

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

        extern const char *UInt32TYPENAME;

        struct UInt32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt32TypeSupport;
        class UInt32DataWriter;
        class UInt32DataReader;
        #endif
        class UInt32 
        {
          public:
            typedef struct UInt32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt32TypeSupport TypeSupport;
            typedef UInt32DataWriter DataWriter;
            typedef UInt32DataReader DataReader;
            #endif

            DDS_UnsignedLong   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt32_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T UInt32
        #define TSeq UInt32Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T UInt32
        #define TSeq UInt32Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern UInt32*
        UInt32_create();

        NDDSUSERDllExport extern void
        UInt32_delete(UInt32* sample);

        NDDSUSERDllExport
        RTIBool UInt32_initialize(
            UInt32* self);

        NDDSUSERDllExport
        RTIBool UInt32_initialize_ex(
            UInt32* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt32_initialize_w_params(
            UInt32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt32_finalize(
            UInt32* self);

        NDDSUSERDllExport
        RTIBool UInt32_finalize_w_return(
            UInt32* self);

        NDDSUSERDllExport
        void UInt32_finalize_ex(
            UInt32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt32_finalize_w_params(
            UInt32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt32_finalize_optional_members(
            UInt32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt32_copy(
            UInt32* dst,
            const UInt32* src);

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

#endif /* UInt32 */

