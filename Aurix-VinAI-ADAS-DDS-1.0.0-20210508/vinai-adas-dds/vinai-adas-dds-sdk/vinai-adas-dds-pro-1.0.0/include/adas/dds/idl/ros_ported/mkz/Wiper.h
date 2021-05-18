

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Wiper.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Wiper_703759744_h
#define Wiper_703759744_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Wiper_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(WiperSeq, Wiper);

        NDDSUSERDllExport
        RTIBool Wiper_initialize(
            Wiper* self);

        NDDSUSERDllExport
        RTIBool Wiper_initialize_ex(
            Wiper* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Wiper_initialize_w_params(
            Wiper* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Wiper_finalize_w_return(
            Wiper* self);

        NDDSUSERDllExport
        void Wiper_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dbw_mkz_msgs::Wiper> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Wiper */

