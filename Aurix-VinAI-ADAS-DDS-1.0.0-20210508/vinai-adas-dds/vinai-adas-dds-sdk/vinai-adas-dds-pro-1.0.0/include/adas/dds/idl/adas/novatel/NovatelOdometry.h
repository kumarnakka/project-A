

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelOdometry.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelOdometry_1384412965_h
#define NovatelOdometry_1384412965_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../../ros_ported/geometry/Pose.h"
namespace adas_dds {

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
        DDS_UnsignedLong   odometry_status ;
        DDS_UnsignedLong   source ;
        adas_dds::geometry_msgs::Pose   pose ;
        DDS_Double   pose_covariance [36];
        DDS_Double   velocity [6];
        DDS_Double   velocity_covariance [36];

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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Odometry_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OdometrySeq, Odometry);

    NDDSUSERDllExport
    RTIBool Odometry_initialize(
        Odometry* self);

    NDDSUSERDllExport
    RTIBool Odometry_initialize_ex(
        Odometry* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Odometry_initialize_w_params(
        Odometry* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Odometry_finalize_w_return(
        Odometry* self);

    NDDSUSERDllExport
    void Odometry_finalize(
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
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Odometry> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelOdometry */

