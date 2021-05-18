/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TwistCmd_861429792_h
#define TwistCmd_861429792_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T TwistCmd
        #define TSeq TwistCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T TwistCmd
        #define TSeq TwistCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern TwistCmd*
        TwistCmd_create();

        NDDSUSERDllExport extern void
        TwistCmd_delete(TwistCmd* sample);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize(
            TwistCmd* self);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize_ex(
            TwistCmd* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TwistCmd_initialize_w_params(
            TwistCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TwistCmd_finalize(
            TwistCmd* self);

        NDDSUSERDllExport
        RTIBool TwistCmd_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TwistCmd */

