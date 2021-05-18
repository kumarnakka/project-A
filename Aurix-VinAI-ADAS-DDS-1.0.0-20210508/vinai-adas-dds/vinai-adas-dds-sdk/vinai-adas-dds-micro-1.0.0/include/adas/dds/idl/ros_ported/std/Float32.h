/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Float32_1112288466_h
#define Float32_1112288466_h

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

        extern const char *Float32TYPENAME;

        struct Float32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Float32TypeSupport;
        class Float32DataWriter;
        class Float32DataReader;
        #endif
        class Float32 
        {
          public:
            typedef struct Float32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Float32TypeSupport TypeSupport;
            typedef Float32DataWriter DataWriter;
            typedef Float32DataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* Float32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Float32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Float32_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Float32
        #define TSeq Float32Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Float32
        #define TSeq Float32Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Float32*
        Float32_create();

        NDDSUSERDllExport extern void
        Float32_delete(Float32* sample);

        NDDSUSERDllExport
        RTIBool Float32_initialize(
            Float32* self);

        NDDSUSERDllExport
        RTIBool Float32_initialize_ex(
            Float32* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Float32_initialize_w_params(
            Float32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Float32_finalize(
            Float32* self);

        NDDSUSERDllExport
        RTIBool Float32_finalize_w_return(
            Float32* self);

        NDDSUSERDllExport
        void Float32_finalize_ex(
            Float32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Float32_finalize_w_params(
            Float32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Float32_finalize_optional_members(
            Float32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Float32_copy(
            Float32* dst,
            const Float32* src);

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

#endif /* Float32 */

