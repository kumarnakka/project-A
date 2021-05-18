/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BrakeCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef BrakeCmd_1707253997_h
#define BrakeCmd_1707253997_h

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

        typedef enum BrakeCmd_PedalCmdType
        {
            BRAKE_CMD_NONE ,      
            BRAKE_CMD_PEDAL ,      
            BRAKE_CMD_PERCENT ,      
            BRAKE_CMD_TORQUE      
        } BrakeCmd_PedalCmdType;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* BrakeCmd_PedalCmdType_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *BrakeCmd_PedalCmdType_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *BrakeCmd_PedalCmdType_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T BrakeCmd_PedalCmdType
        #define TSeq BrakeCmd_PedalCmdTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T BrakeCmd_PedalCmdType
        #define TSeq BrakeCmd_PedalCmdTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern BrakeCmd_PedalCmdType*
        BrakeCmd_PedalCmdType_create();

        NDDSUSERDllExport extern void
        BrakeCmd_PedalCmdType_delete(BrakeCmd_PedalCmdType* sample);

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_initialize(
            BrakeCmd_PedalCmdType* self);

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_initialize_ex(
            BrakeCmd_PedalCmdType* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_initialize_w_params(
            BrakeCmd_PedalCmdType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_finalize(
            BrakeCmd_PedalCmdType* self);

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_finalize_w_return(
            BrakeCmd_PedalCmdType* self);

        NDDSUSERDllExport
        void BrakeCmd_PedalCmdType_finalize_ex(
            BrakeCmd_PedalCmdType* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void BrakeCmd_PedalCmdType_finalize_w_params(
            BrakeCmd_PedalCmdType* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void BrakeCmd_PedalCmdType_finalize_optional_members(
            BrakeCmd_PedalCmdType* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool BrakeCmd_PedalCmdType_copy(
            BrakeCmd_PedalCmdType* dst,
            const BrakeCmd_PedalCmdType* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        static const DDS_Float BrakeCmd_TORQUE_BOO = 520.0f;

        static const DDS_Float BrakeCmd_TORQUE_MAX = 3412.0f;

        extern const char *BrakeCmdTYPENAME;

        struct BrakeCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class BrakeCmdTypeSupport;
        class BrakeCmdDataWriter;
        class BrakeCmdDataReader;
        #endif
        class BrakeCmd 
        {
          public:
            typedef struct BrakeCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef BrakeCmdTypeSupport TypeSupport;
            typedef BrakeCmdDataWriter DataWriter;
            typedef BrakeCmdDataReader DataReader;
            #endif

            DDS_Float   pedal_cmd ;
            DDS_Octet   pedal_cmd_type ;
            DDS_Boolean   boo_cmd ;
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
        NDDSUSERDllExport DDS_TypeCode* BrakeCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *BrakeCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *BrakeCmd_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T BrakeCmd
        #define TSeq BrakeCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T BrakeCmd
        #define TSeq BrakeCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern BrakeCmd*
        BrakeCmd_create();

        NDDSUSERDllExport extern void
        BrakeCmd_delete(BrakeCmd* sample);

        NDDSUSERDllExport
        RTIBool BrakeCmd_initialize(
            BrakeCmd* self);

        NDDSUSERDllExport
        RTIBool BrakeCmd_initialize_ex(
            BrakeCmd* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool BrakeCmd_initialize_w_params(
            BrakeCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool BrakeCmd_finalize(
            BrakeCmd* self);

        NDDSUSERDllExport
        RTIBool BrakeCmd_finalize_w_return(
            BrakeCmd* self);

        NDDSUSERDllExport
        void BrakeCmd_finalize_ex(
            BrakeCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void BrakeCmd_finalize_w_params(
            BrakeCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void BrakeCmd_finalize_optional_members(
            BrakeCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool BrakeCmd_copy(
            BrakeCmd* dst,
            const BrakeCmd* src);

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

#endif /* BrakeCmd */

