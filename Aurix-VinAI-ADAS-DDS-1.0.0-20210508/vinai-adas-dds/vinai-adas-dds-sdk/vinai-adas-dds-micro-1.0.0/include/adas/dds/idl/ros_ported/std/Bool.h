/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bool.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Bool_2069076595_h
#define Bool_2069076595_h

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

        extern const char *BoolTYPENAME;

        struct BoolSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class BoolTypeSupport;
        class BoolDataWriter;
        class BoolDataReader;
        #endif
        class Bool 
        {
          public:
            typedef struct BoolSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef BoolTypeSupport TypeSupport;
            typedef BoolDataWriter DataWriter;
            typedef BoolDataReader DataReader;
            #endif

            DDS_Boolean   data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Bool_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Bool_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bool_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Bool
        #define TSeq BoolSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Bool
        #define TSeq BoolSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Bool*
        Bool_create();

        NDDSUSERDllExport extern void
        Bool_delete(Bool* sample);

        NDDSUSERDllExport
        RTIBool Bool_initialize(
            Bool* self);

        NDDSUSERDllExport
        RTIBool Bool_initialize_ex(
            Bool* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Bool_initialize_w_params(
            Bool* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Bool_finalize(
            Bool* self);

        NDDSUSERDllExport
        RTIBool Bool_finalize_w_return(
            Bool* self);

        NDDSUSERDllExport
        void Bool_finalize_ex(
            Bool* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Bool_finalize_w_params(
            Bool* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Bool_finalize_optional_members(
            Bool* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Bool_copy(
            Bool* dst,
            const Bool* src);

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

#endif /* Bool */

