/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int16.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Int16_960803999_h
#define Int16_960803999_h

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

        extern const char *Int16TYPENAME;

        struct Int16Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Int16TypeSupport;
        class Int16DataWriter;
        class Int16DataReader;
        #endif
        class Int16 
        {
          public:
            typedef struct Int16Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Int16TypeSupport TypeSupport;
            typedef Int16DataWriter DataWriter;
            typedef Int16DataReader DataReader;
            #endif

            DDS_Short   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Int16_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Int16_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Int16_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Int16
        #define TSeq Int16Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Int16
        #define TSeq Int16Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Int16*
        Int16_create();

        NDDSUSERDllExport extern void
        Int16_delete(Int16* sample);

        NDDSUSERDllExport
        RTIBool Int16_initialize(
            Int16* self);

        NDDSUSERDllExport
        RTIBool Int16_initialize_ex(
            Int16* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Int16_initialize_w_params(
            Int16* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Int16_finalize(
            Int16* self);

        NDDSUSERDllExport
        RTIBool Int16_finalize_w_return(
            Int16* self);

        NDDSUSERDllExport
        void Int16_finalize_ex(
            Int16* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Int16_finalize_w_params(
            Int16* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Int16_finalize_optional_members(
            Int16* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Int16_copy(
            Int16* dst,
            const Int16* src);

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

#endif /* Int16 */

