

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pose_806669554_h
#define Pose_806669554_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PoseSeq, Pose);

        NDDSUSERDllExport
        RTIBool Pose_initialize(
            Pose* self);

        NDDSUSERDllExport
        RTIBool Pose_initialize_ex(
            Pose* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Pose_initialize_w_params(
            Pose* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Pose_finalize_w_return(
            Pose* self);

        NDDSUSERDllExport
        void Pose_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::geometry_msgs::Pose> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Pose */

