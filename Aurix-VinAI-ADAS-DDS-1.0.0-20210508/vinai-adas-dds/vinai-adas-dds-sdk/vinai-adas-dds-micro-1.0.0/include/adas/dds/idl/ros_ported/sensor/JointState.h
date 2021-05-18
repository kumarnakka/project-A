/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointState.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef JointState_2090749688_h
#define JointState_2090749688_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T JointState
        #define TSeq JointStateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T JointState
        #define TSeq JointStateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern JointState*
        JointState_create();

        NDDSUSERDllExport extern void
        JointState_delete(JointState* sample);

        NDDSUSERDllExport
        RTIBool JointState_initialize(
            JointState* self);

        NDDSUSERDllExport
        RTIBool JointState_initialize_ex(
            JointState* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool JointState_initialize_w_params(
            JointState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool JointState_finalize(
            JointState* self);

        NDDSUSERDllExport
        RTIBool JointState_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* JointState */

