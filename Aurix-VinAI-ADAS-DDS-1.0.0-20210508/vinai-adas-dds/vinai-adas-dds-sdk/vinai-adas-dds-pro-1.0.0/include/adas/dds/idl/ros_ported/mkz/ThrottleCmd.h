

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrottleCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ThrottleCmd_334468965_h
#define ThrottleCmd_334468965_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {
        typedef enum ThrottleCmd_PedalCmdType
        {
            THROTTLE_CMD_NONE ,      
            THROTTLE_CMD_PEDAL ,      
            THROTTLE_CMD_PERCENT      
        } ThrottleCmd_PedalCmdType;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ThrottleCmd_PedalCmdType_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ThrottleCmd_PedalCmdType_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleCmd_PedalCmdType_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleCmd_PedalCmdType_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ThrottleCmd_PedalCmdTypeSeq, ThrottleCmd_PedalCmdType);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_PedalCmdType_initialize(
            ThrottleCmd_PedalCmdType* self);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_PedalCmdType_initialize_ex(
            ThrottleCmd_PedalCmdType* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_PedalCmdType_initialize_w_params(
            ThrottleCmd_PedalCmdType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleCmd_PedalCmdType_finalize_w_return(
            ThrottleCmd_PedalCmdType* self);

        NDDSUSERDllExport
        void ThrottleCmd_PedalCmdType_finalize(
            ThrottleCmd_PedalCmdType* self);

        NDDSUSERDllExport
        void ThrottleCmd_PedalCmdType_finalize_ex(
            ThrottleCmd_PedalCmdType* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ThrottleCmd_PedalCmdType_finalize_w_params(
            ThrottleCmd_PedalCmdType* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ThrottleCmd_PedalCmdType_finalize_optional_members(
            ThrottleCmd_PedalCmdType* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ThrottleCmd_PedalCmdType_copy(
            ThrottleCmd_PedalCmdType* dst,
            const ThrottleCmd_PedalCmdType* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *ThrottleCmdTYPENAME;

        struct ThrottleCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ThrottleCmdTypeSupport;
        class ThrottleCmdDataWriter;
        class ThrottleCmdDataReader;
        #endif
        class ThrottleCmd 
        {
          public:
            typedef struct ThrottleCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ThrottleCmdTypeSupport TypeSupport;
            typedef ThrottleCmdDataWriter DataWriter;
            typedef ThrottleCmdDataReader DataReader;
            #endif

            DDS_Float   pedal_cmd ;
            DDS_Octet   pedal_cmd_type ;
            DDS_Boolean   enable ;
            DDS_Boolean   clear ;
            DDS_Boolean   ignore ;
            DDS_Octet   count ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ThrottleCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ThrottleCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleCmd_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThrottleCmd_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ThrottleCmdSeq, ThrottleCmd);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_initialize(
            ThrottleCmd* self);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_initialize_ex(
            ThrottleCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ThrottleCmd_initialize_w_params(
            ThrottleCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ThrottleCmd_finalize_w_return(
            ThrottleCmd* self);

        NDDSUSERDllExport
        void ThrottleCmd_finalize(
            ThrottleCmd* self);

        NDDSUSERDllExport
        void ThrottleCmd_finalize_ex(
            ThrottleCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ThrottleCmd_finalize_w_params(
            ThrottleCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ThrottleCmd_finalize_optional_members(
            ThrottleCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ThrottleCmd_copy(
            ThrottleCmd* dst,
            const ThrottleCmd* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::ThrottleCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ThrottleCmd */

