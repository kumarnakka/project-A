/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TurnSignal.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TurnSignal_1140930012_h
#define TurnSignal_1140930012_h

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

    namespace dbw_mkz_msgs {

        extern const char *TurnSignalTYPENAME;

        struct TurnSignalSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TurnSignalTypeSupport;
        class TurnSignalDataWriter;
        class TurnSignalDataReader;
        #endif
        class TurnSignal 
        {
          public:
            typedef struct TurnSignalSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TurnSignalTypeSupport TypeSupport;
            typedef TurnSignalDataWriter DataWriter;
            typedef TurnSignalDataReader DataReader;
            #endif

            DDS_Octet   value ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TurnSignal_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TurnSignal_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TurnSignal_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T TurnSignal
        #define TSeq TurnSignalSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T TurnSignal
        #define TSeq TurnSignalSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern TurnSignal*
        TurnSignal_create();

        NDDSUSERDllExport extern void
        TurnSignal_delete(TurnSignal* sample);

        NDDSUSERDllExport
        RTIBool TurnSignal_initialize(
            TurnSignal* self);

        NDDSUSERDllExport
        RTIBool TurnSignal_initialize_ex(
            TurnSignal* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TurnSignal_initialize_w_params(
            TurnSignal* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TurnSignal_finalize(
            TurnSignal* self);

        NDDSUSERDllExport
        RTIBool TurnSignal_finalize_w_return(
            TurnSignal* self);

        NDDSUSERDllExport
        void TurnSignal_finalize_ex(
            TurnSignal* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TurnSignal_finalize_w_params(
            TurnSignal* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TurnSignal_finalize_optional_members(
            TurnSignal* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TurnSignal_copy(
            TurnSignal* dst,
            const TurnSignal* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dbw_mkz_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TurnSignal */

