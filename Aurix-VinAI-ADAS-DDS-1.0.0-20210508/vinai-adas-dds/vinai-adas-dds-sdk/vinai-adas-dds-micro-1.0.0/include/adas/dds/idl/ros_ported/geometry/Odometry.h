/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Odometry.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Odometry_1402260810_h
#define Odometry_1402260810_h

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

#include "PoseWithCovariance.h"

#include "TwistWithCovariance.h"

namespace adas_dds {

    namespace nav_msgs {

        extern const char *OdometryTYPENAME;

        struct OdometrySeq;
        #ifndef NDDS_STANDALONE_TYPE
        class OdometryTypeSupport;
        class OdometryDataWriter;
        class OdometryDataReader;
        #endif
        class Odometry 
        {
          public:
            typedef struct OdometrySeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef OdometryTypeSupport TypeSupport;
            typedef OdometryDataWriter DataWriter;
            typedef OdometryDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_String   child_frame_id ;
            adas_dds::geometry_msgs::PoseWithCovariance   pose ;
            adas_dds::geometry_msgs::TwistWithCovariance   twist ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Odometry_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Odometry_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Odometry_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Odometry
        #define TSeq OdometrySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Odometry
        #define TSeq OdometrySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Odometry*
        Odometry_create();

        NDDSUSERDllExport extern void
        Odometry_delete(Odometry* sample);

        NDDSUSERDllExport
        RTIBool Odometry_initialize(
            Odometry* self);

        NDDSUSERDllExport
        RTIBool Odometry_initialize_ex(
            Odometry* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Odometry_initialize_w_params(
            Odometry* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Odometry_finalize(
            Odometry* self);

        NDDSUSERDllExport
        RTIBool Odometry_finalize_w_return(
            Odometry* self);

        NDDSUSERDllExport
        void Odometry_finalize_ex(
            Odometry* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Odometry_finalize_w_params(
            Odometry* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Odometry_finalize_optional_members(
            Odometry* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Odometry_copy(
            Odometry* dst,
            const Odometry* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace nav_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Odometry */

