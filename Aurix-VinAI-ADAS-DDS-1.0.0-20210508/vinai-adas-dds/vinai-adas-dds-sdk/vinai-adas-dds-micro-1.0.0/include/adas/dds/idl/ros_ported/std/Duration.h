/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Duration.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Duration_1772276054_h
#define Duration_1772276054_h

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

        extern const char *DurationTYPENAME;

        struct DurationSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class DurationTypeSupport;
        class DurationDataWriter;
        class DurationDataReader;
        #endif
        class Duration 
        {
          public:
            typedef struct DurationSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef DurationTypeSupport TypeSupport;
            typedef DurationDataWriter DataWriter;
            typedef DurationDataReader DataReader;
            #endif

            DDS_UnsignedLong   sec ;
            DDS_UnsignedLong   nsec ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Duration_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Duration_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Duration_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Duration
        #define TSeq DurationSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Duration
        #define TSeq DurationSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Duration*
        Duration_create();

        NDDSUSERDllExport extern void
        Duration_delete(Duration* sample);

        NDDSUSERDllExport
        RTIBool Duration_initialize(
            Duration* self);

        NDDSUSERDllExport
        RTIBool Duration_initialize_ex(
            Duration* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Duration_initialize_w_params(
            Duration* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Duration_finalize(
            Duration* self);

        NDDSUSERDllExport
        RTIBool Duration_finalize_w_return(
            Duration* self);

        NDDSUSERDllExport
        void Duration_finalize_ex(
            Duration* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Duration_finalize_w_params(
            Duration* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Duration_finalize_optional_members(
            Duration* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Duration_copy(
            Duration* dst,
            const Duration* src);

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

#endif /* Duration */

