

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TurnSignalCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TurnSignalCmd_1793453656_h
#define TurnSignalCmd_1793453656_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "TurnSignal.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *TurnSignalCmdTYPENAME;

        struct TurnSignalCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TurnSignalCmdTypeSupport;
        class TurnSignalCmdDataWriter;
        class TurnSignalCmdDataReader;
        #endif
        class TurnSignalCmd 
        {
          public:
            typedef struct TurnSignalCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TurnSignalCmdTypeSupport TypeSupport;
            typedef TurnSignalCmdDataWriter DataWriter;
            typedef TurnSignalCmdDataReader DataReader;
            #endif

            adas_dds::dbw_mkz_msgs::TurnSignal   cmd ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TurnSignalCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TurnSignalCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TurnSignalCmd_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TurnSignalCmd_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TurnSignalCmdSeq, TurnSignalCmd);

        NDDSUSERDllExport
        RTIBool TurnSignalCmd_initialize(
            TurnSignalCmd* self);

        NDDSUSERDllExport
        RTIBool TurnSignalCmd_initialize_ex(
            TurnSignalCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TurnSignalCmd_initialize_w_params(
            TurnSignalCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TurnSignalCmd_finalize_w_return(
            TurnSignalCmd* self);

        NDDSUSERDllExport
        void TurnSignalCmd_finalize(
            TurnSignalCmd* self);

        NDDSUSERDllExport
        void TurnSignalCmd_finalize_ex(
            TurnSignalCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TurnSignalCmd_finalize_w_params(
            TurnSignalCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TurnSignalCmd_finalize_optional_members(
            TurnSignalCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TurnSignalCmd_copy(
            TurnSignalCmd* dst,
            const TurnSignalCmd* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::TurnSignalCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TurnSignalCmd */

