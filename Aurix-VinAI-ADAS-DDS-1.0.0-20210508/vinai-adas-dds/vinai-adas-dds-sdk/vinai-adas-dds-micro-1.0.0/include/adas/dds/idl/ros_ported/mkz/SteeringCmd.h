/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SteeringCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef SteeringCmd_909888447_h
#define SteeringCmd_909888447_h

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

        extern const char *SteeringCmdTYPENAME;

        struct SteeringCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class SteeringCmdTypeSupport;
        class SteeringCmdDataWriter;
        class SteeringCmdDataReader;
        #endif
        class SteeringCmd 
        {
          public:
            typedef struct SteeringCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef SteeringCmdTypeSupport TypeSupport;
            typedef SteeringCmdDataWriter DataWriter;
            typedef SteeringCmdDataReader DataReader;
            #endif

            DDS_Float   steering_wheel_angle_cmd ;
            DDS_Float   steering_wheel_angle_velocity ;
            DDS_Boolean   enable ;
            DDS_Boolean   clear ;
            DDS_Boolean   ignore ;
            DDS_Boolean   quiet ;
            DDS_Octet   count ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* SteeringCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *SteeringCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *SteeringCmd_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T SteeringCmd
        #define TSeq SteeringCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T SteeringCmd
        #define TSeq SteeringCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern SteeringCmd*
        SteeringCmd_create();

        NDDSUSERDllExport extern void
        SteeringCmd_delete(SteeringCmd* sample);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize(
            SteeringCmd* self);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize_ex(
            SteeringCmd* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize_w_params(
            SteeringCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool SteeringCmd_finalize(
            SteeringCmd* self);

        NDDSUSERDllExport
        RTIBool SteeringCmd_finalize_w_return(
            SteeringCmd* self);

        NDDSUSERDllExport
        void SteeringCmd_finalize_ex(
            SteeringCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void SteeringCmd_finalize_w_params(
            SteeringCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void SteeringCmd_finalize_optional_members(
            SteeringCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool SteeringCmd_copy(
            SteeringCmd* dst,
            const SteeringCmd* src);

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

#endif /* SteeringCmd */

