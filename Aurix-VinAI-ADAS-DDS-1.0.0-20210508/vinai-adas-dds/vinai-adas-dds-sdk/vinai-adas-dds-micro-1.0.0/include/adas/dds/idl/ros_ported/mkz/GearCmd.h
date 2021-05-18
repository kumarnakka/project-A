/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearCmd.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef GearCmd_1267422614_h
#define GearCmd_1267422614_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T GearCmd
        #define TSeq GearCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T GearCmd
        #define TSeq GearCmdSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern GearCmd*
        GearCmd_create();

        NDDSUSERDllExport extern void
        GearCmd_delete(GearCmd* sample);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize(
            GearCmd* self);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize_ex(
            GearCmd* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearCmd_initialize_w_params(
            GearCmd* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearCmd_finalize(
            GearCmd* self);

        NDDSUSERDllExport
        RTIBool GearCmd_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GearCmd */

