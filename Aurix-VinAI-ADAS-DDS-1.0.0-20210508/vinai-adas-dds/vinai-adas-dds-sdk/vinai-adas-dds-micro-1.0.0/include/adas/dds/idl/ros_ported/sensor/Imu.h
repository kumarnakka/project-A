/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imu.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Imu_701604727_h
#define Imu_701604727_h

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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Imu
        #define TSeq ImuSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Imu
        #define TSeq ImuSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Imu*
        Imu_create();

        NDDSUSERDllExport extern void
        Imu_delete(Imu* sample);

        NDDSUSERDllExport
        RTIBool Imu_initialize(
            Imu* self);

        NDDSUSERDllExport
        RTIBool Imu_initialize_ex(
            Imu* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Imu_initialize_w_params(
            Imu* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Imu_finalize(
            Imu* self);

        NDDSUSERDllExport
        RTIBool Imu_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Imu */

