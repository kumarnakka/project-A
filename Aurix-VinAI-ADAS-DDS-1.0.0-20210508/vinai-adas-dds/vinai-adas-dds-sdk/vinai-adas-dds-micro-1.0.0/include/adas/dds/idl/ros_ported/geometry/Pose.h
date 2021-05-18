/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Pose_806669554_h
#define Pose_806669554_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Point.h"

#include "Quaternion.h"

namespace adas_dds {

    namespace geometry_msgs {

        extern const char *PoseTYPENAME;

        struct PoseSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PoseTypeSupport;
        class PoseDataWriter;
        class PoseDataReader;
        #endif
        class Pose 
        {
          public:
            typedef struct PoseSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PoseTypeSupport TypeSupport;
            typedef PoseDataWriter DataWriter;
            typedef PoseDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Point   position ;
            adas_dds::geometry_msgs::Quaternion   orientation ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Pose_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Pose_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Pose
        #define TSeq PoseSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Pose
        #define TSeq PoseSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Pose*
        Pose_create();

        NDDSUSERDllExport extern void
        Pose_delete(Pose* sample);

        NDDSUSERDllExport
        RTIBool Pose_initialize(
            Pose* self);

        NDDSUSERDllExport
        RTIBool Pose_initialize_ex(
            Pose* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Pose_initialize_w_params(
            Pose* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Pose_finalize(
            Pose* self);

        NDDSUSERDllExport
        RTIBool Pose_finalize_w_return(
            Pose* self);

        NDDSUSERDllExport
        void Pose_finalize_ex(
            Pose* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Pose_finalize_w_params(
            Pose* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Pose_finalize_optional_members(
            Pose* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Pose_copy(
            Pose* dst,
            const Pose* src);

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

#endif /* Pose */

