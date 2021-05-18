/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Wiper.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Wiper_703759744_h
#define Wiper_703759744_h

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

        extern const char *WiperTYPENAME;

        struct WiperSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WiperTypeSupport;
        class WiperDataWriter;
        class WiperDataReader;
        #endif
        class Wiper 
        {
          public:
            typedef struct WiperSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WiperTypeSupport TypeSupport;
            typedef WiperDataWriter DataWriter;
            typedef WiperDataReader DataReader;
            #endif

            DDS_Octet   status ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Wiper_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Wiper_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Wiper_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Wiper
        #define TSeq WiperSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Wiper
        #define TSeq WiperSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Wiper*
        Wiper_create();

        NDDSUSERDllExport extern void
        Wiper_delete(Wiper* sample);

        NDDSUSERDllExport
        RTIBool Wiper_initialize(
            Wiper* self);

        NDDSUSERDllExport
        RTIBool Wiper_initialize_ex(
            Wiper* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Wiper_initialize_w_params(
            Wiper* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Wiper_finalize(
            Wiper* self);

        NDDSUSERDllExport
        RTIBool Wiper_finalize_w_return(
            Wiper* self);

        NDDSUSERDllExport
        void Wiper_finalize_ex(
            Wiper* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Wiper_finalize_w_params(
            Wiper* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Wiper_finalize_optional_members(
            Wiper* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Wiper_copy(
            Wiper* dst,
            const Wiper* src);

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

#endif /* Wiper */

