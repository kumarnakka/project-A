/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt16.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef UInt16_1437025263_h
#define UInt16_1437025263_h

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

        extern const char *UInt16TYPENAME;

        struct UInt16Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class UInt16TypeSupport;
        class UInt16DataWriter;
        class UInt16DataReader;
        #endif
        class UInt16 
        {
          public:
            typedef struct UInt16Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef UInt16TypeSupport TypeSupport;
            typedef UInt16DataWriter DataWriter;
            typedef UInt16DataReader DataReader;
            #endif

            DDS_UnsignedShort   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* UInt16_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *UInt16_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *UInt16_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T UInt16
        #define TSeq UInt16Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T UInt16
        #define TSeq UInt16Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern UInt16*
        UInt16_create();

        NDDSUSERDllExport extern void
        UInt16_delete(UInt16* sample);

        NDDSUSERDllExport
        RTIBool UInt16_initialize(
            UInt16* self);

        NDDSUSERDllExport
        RTIBool UInt16_initialize_ex(
            UInt16* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool UInt16_initialize_w_params(
            UInt16* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool UInt16_finalize(
            UInt16* self);

        NDDSUSERDllExport
        RTIBool UInt16_finalize_w_return(
            UInt16* self);

        NDDSUSERDllExport
        void UInt16_finalize_ex(
            UInt16* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void UInt16_finalize_w_params(
            UInt16* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void UInt16_finalize_optional_members(
            UInt16* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool UInt16_copy(
            UInt16* dst,
            const UInt16* src);

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

#endif /* UInt16 */

