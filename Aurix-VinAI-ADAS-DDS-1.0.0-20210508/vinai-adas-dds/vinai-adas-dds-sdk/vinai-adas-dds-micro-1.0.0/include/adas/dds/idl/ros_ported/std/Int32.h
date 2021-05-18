/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Int32_1014368217_h
#define Int32_1014368217_h

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

        extern const char *Int32TYPENAME;

        struct Int32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int32TypeSupport;
        class Int32DataWriter;
        class Int32DataReader;
        #endif
        class Int32 
        {
          public:
            typedef struct Int32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int32TypeSupport TypeSupport;
            typedef Int32DataWriter DataWriter;
            typedef Int32DataReader DataReader;
            #endif

            DDS_Long   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int32_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Int32
        #define TSeq Int32Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Int32
        #define TSeq Int32Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Int32*
        Int32_create();

        NDDSUSERDllExport extern void
        Int32_delete(Int32* sample);

        NDDSUSERDllExport
        RTIBool Int32_initialize(
            Int32* self);

        NDDSUSERDllExport
        RTIBool Int32_initialize_ex(
            Int32* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int32_initialize_w_params(
            Int32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int32_finalize(
            Int32* self);

        NDDSUSERDllExport
        RTIBool Int32_finalize_w_return(
            Int32* self);

        NDDSUSERDllExport
        void Int32_finalize_ex(
            Int32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int32_finalize_w_params(
            Int32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int32_finalize_optional_members(
            Int32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int32_copy(
            Int32* dst,
            const Int32* src);

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

#endif /* Int32 */

