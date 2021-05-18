

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistCmd_861429792_h
#define TwistCmd_861429792_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../geometry/Twist.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *TwistCmdTYPENAME;

        struct TwistCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TwistCmdTypeSupport;
        class TwistCmdDataWriter;
        class TwistCmdDataReader;
        #endif
        class TwistCmd 
        {
          public:
            typedef struct TwistCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TwistCmdTypeSupport TypeSupport;
            typedef TwistCmdDataWriter DataWriter;
            typedef TwistCmdDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Twist   twist ;
            DDS_Float   accel_limit ;
            DDS_Float   decel_limit ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TwistCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TwistCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistCmd_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistCmd_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TwistCmdSeq, TwistCmd);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize(
            TwistCmd* self);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize_ex(
            TwistCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize_w_params(
            TwistCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TwistCmd_finalize_w_return(
            TwistCmd* self);

        NDDSUSERDllExport
        void TwistCmd_finalize(
            TwistCmd* self);

        NDDSUSERDllExport
        void TwistCmd_finalize_ex(
            TwistCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TwistCmd_finalize_w_params(
            TwistCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TwistCmd_finalize_optional_members(
            TwistCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TwistCmd_copy(
            TwistCmd* dst,
            const TwistCmd* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::TwistCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TwistCmd */

