

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointState_2090749688_h
#define JointState_2090749688_h

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
    namespace sensor_msgs {

        extern const char *JointStateTYPENAME;

        struct JointStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class JointStateTypeSupport;
        class JointStateDataWriter;
        class JointStateDataReader;
        #endif
        class JointState 
        {
          public:
            typedef struct JointStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef JointStateTypeSupport TypeSupport;
            typedef JointStateDataWriter DataWriter;
            typedef JointStateDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_StringSeq  name ;
            DDS_DoubleSeq  position ;
            DDS_DoubleSeq  velocity ;
            DDS_DoubleSeq  effort ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* JointState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *JointState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *JointState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *JointState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(JointStateSeq, JointState);

        NDDSUSERDllExport
        RTIBool JointState_initialize(
            JointState* self);

        NDDSUSERDllExport
        RTIBool JointState_initialize_ex(
            JointState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool JointState_initialize_w_params(
            JointState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool JointState_finalize_w_return(
            JointState* self);

        NDDSUSERDllExport
        void JointState_finalize(
            JointState* self);

        NDDSUSERDllExport
        void JointState_finalize_ex(
            JointState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void JointState_finalize_w_params(
            JointState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void JointState_finalize_optional_members(
            JointState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool JointState_copy(
            JointState* dst,
            const JointState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace sensor_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::sensor_msgs::JointState> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* JointState */

