/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PoseStamped_1754545695_h
#define PoseStamped_1754545695_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../../ros_ported/std/Header.h"

#include "Pose.h"

namespace adas_dds {

    namespace geometry_msgs {

        extern const char *PoseStampedTYPENAME;

        struct PoseStampedSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PoseStampedTypeSupport;
        class PoseStampedDataWriter;
        class PoseStampedDataReader;
        #endif
        class PoseStamped 
        {
          public:
            typedef struct PoseStampedSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PoseStampedTypeSupport TypeSupport;
            typedef PoseStampedDataWriter DataWriter;
            typedef PoseStampedDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::Pose   pose ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PoseStamped_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PoseStamped_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PoseStamped_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T PoseStamped
        #define TSeq PoseStampedSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T PoseStamped
        #define TSeq PoseStampedSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern PoseStamped*
        PoseStamped_create();

        NDDSUSERDllExport extern void
        PoseStamped_delete(PoseStamped* sample);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize(
            PoseStamped* self);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize_ex(
            PoseStamped* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize_w_params(
            PoseStamped* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PoseStamped_finalize(
            PoseStamped* self);

        NDDSUSERDllExport
        RTIBool PoseStamped_finalize_w_return(
            PoseStamped* self);

        NDDSUSERDllExport
        void PoseStamped_finalize_ex(
            PoseStamped* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PoseStamped_finalize_w_params(
            PoseStamped* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PoseStamped_finalize_optional_members(
            PoseStamped* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PoseStamped_copy(
            PoseStamped* dst,
            const PoseStamped* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace geometry_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PoseStamped */

