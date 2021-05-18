

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SteeringCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SteeringCmd_909888447_h
#define SteeringCmd_909888447_h

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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *SteeringCmd_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(SteeringCmdSeq, SteeringCmd);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize(
            SteeringCmd* self);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize_ex(
            SteeringCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool SteeringCmd_initialize_w_params(
            SteeringCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool SteeringCmd_finalize_w_return(
            SteeringCmd* self);

        NDDSUSERDllExport
        void SteeringCmd_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dbw_mkz_msgs::SteeringCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SteeringCmd */

