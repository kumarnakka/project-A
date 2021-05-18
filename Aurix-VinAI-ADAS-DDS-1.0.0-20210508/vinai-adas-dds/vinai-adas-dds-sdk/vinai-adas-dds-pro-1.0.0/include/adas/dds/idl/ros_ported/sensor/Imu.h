

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imu.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Imu_701604727_h
#define Imu_701604727_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "../geometry/Quaternion.h"
#include "../geometry/Vector3.h"
namespace adas_dds {
    namespace sensor_msgs {

        extern const char *ImuTYPENAME;

        struct ImuSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ImuTypeSupport;
        class ImuDataWriter;
        class ImuDataReader;
        #endif
        class Imu 
        {
          public:
            typedef struct ImuSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ImuTypeSupport TypeSupport;
            typedef ImuDataWriter DataWriter;
            typedef ImuDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::Quaternion   orientation ;
            DDS_Double   orientation_covariance [9];
            adas_dds::geometry_msgs::Vector3   angular_velocity ;
            DDS_Double   angular_velocity_covariance [9];
            adas_dds::geometry_msgs::Vector3   linear_acceleration ;
            DDS_Double   linear_acceleration_covariance [9];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Imu_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Imu_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Imu_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Imu_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ImuSeq, Imu);

        NDDSUSERDllExport
        RTIBool Imu_initialize(
            Imu* self);

        NDDSUSERDllExport
        RTIBool Imu_initialize_ex(
            Imu* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Imu_initialize_w_params(
            Imu* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Imu_finalize_w_return(
            Imu* self);

        NDDSUSERDllExport
        void Imu_finalize(
            Imu* self);

        NDDSUSERDllExport
        void Imu_finalize_ex(
            Imu* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Imu_finalize_w_params(
            Imu* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Imu_finalize_optional_members(
            Imu* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Imu_copy(
            Imu* dst,
            const Imu* src);

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
        struct type_code<adas_dds::sensor_msgs::Imu> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Imu */

