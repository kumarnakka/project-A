/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Int8_591466031_h
#define Int8_591466031_h

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

        extern const char *Int8TYPENAME;

        struct Int8Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int8TypeSupport;
        class Int8DataWriter;
        class Int8DataReader;
        #endif
        class Int8 
        {
          public:
            typedef struct Int8Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int8TypeSupport TypeSupport;
            typedef Int8DataWriter DataWriter;
            typedef Int8DataReader DataReader;
            #endif

            DDS_Char   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int8_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int8_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int8_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Int8
        #define TSeq Int8Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Int8
        #define TSeq Int8Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Int8*
        Int8_create();

        NDDSUSERDllExport extern void
        Int8_delete(Int8* sample);

        NDDSUSERDllExport
        RTIBool Int8_initialize(
            Int8* self);

        NDDSUSERDllExport
        RTIBool Int8_initialize_ex(
            Int8* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int8_initialize_w_params(
            Int8* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int8_finalize(
            Int8* self);

        NDDSUSERDllExport
        RTIBool Int8_finalize_w_return(
            Int8* self);

        NDDSUSERDllExport
        void Int8_finalize_ex(
            Int8* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int8_finalize_w_params(
            Int8* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int8_finalize_optional_members(
            Int8* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int8_copy(
            Int8* dst,
            const Int8* src);

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

#endif /* Int8 */

