

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GearCmd_1267422614_h
#define GearCmd_1267422614_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Gear.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *GearCmdTYPENAME;

        struct GearCmdSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class GearCmdTypeSupport;
        class GearCmdDataWriter;
        class GearCmdDataReader;
        #endif
        class GearCmd 
        {
          public:
            typedef struct GearCmdSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef GearCmdTypeSupport TypeSupport;
            typedef GearCmdDataWriter DataWriter;
            typedef GearCmdDataReader DataReader;
            #endif

            adas_dds::dbw_mkz_msgs::Gear   cmd ;
            DDS_Boolean   clear ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* GearCmd_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *GearCmd_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearCmd_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearCmd_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(GearCmdSeq, GearCmd);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize(
            GearCmd* self);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize_ex(
            GearCmd* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize_w_params(
            GearCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearCmd_finalize_w_return(
            GearCmd* self);

        NDDSUSERDllExport
        void GearCmd_finalize(
            GearCmd* self);

        NDDSUSERDllExport
        void GearCmd_finalize_ex(
            GearCmd* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void GearCmd_finalize_w_params(
            GearCmd* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void GearCmd_finalize_optional_members(
            GearCmd* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool GearCmd_copy(
            GearCmd* dst,
            const GearCmd* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::GearCmd> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GearCmd */

