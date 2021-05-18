/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float64.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Float64_1024553971_h
#define Float64_1024553971_h

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

        extern const char *Float64TYPENAME;

        struct Float64Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Float64TypeSupport;
        class Float64DataWriter;
        class Float64DataReader;
        #endif
        class Float64 
        {
          public:
            typedef struct Float64Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Float64TypeSupport TypeSupport;
            typedef Float64DataWriter DataWriter;
            typedef Float64DataReader DataReader;
            #endif

            DDS_Float   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Float64_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Float64_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float64_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Float64
        #define TSeq Float64Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Float64
        #define TSeq Float64Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Float64*
        Float64_create();

        NDDSUSERDllExport extern void
        Float64_delete(Float64* sample);

        NDDSUSERDllExport
        RTIBool Float64_initialize(
            Float64* self);

        NDDSUSERDllExport
        RTIBool Float64_initialize_ex(
            Float64* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Float64_initialize_w_params(
            Float64* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Float64_finalize(
            Float64* self);

        NDDSUSERDllExport
        RTIBool Float64_finalize_w_return(
            Float64* self);

        NDDSUSERDllExport
        void Float64_finalize_ex(
            Float64* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Float64_finalize_w_params(
            Float64* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Float64_finalize_optional_members(
            Float64* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Float64_copy(
            Float64* dst,
            const Float64* src);

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

#endif /* Float64 */

