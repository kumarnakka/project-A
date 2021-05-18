/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TwistWithCovariance_1047502647_h
#define TwistWithCovariance_1047502647_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Twist.h"

namespace adas_dds {

    namespace geometry_msgs {

        extern const char *TwistWithCovarianceTYPENAME;

        struct TwistWithCovarianceSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TwistWithCovarianceTypeSupport;
        class TwistWithCovarianceDataWriter;
        class TwistWithCovarianceDataReader;
        #endif
        class TwistWithCovariance 
        {
          public:
            typedef struct TwistWithCovarianceSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TwistWithCovarianceTypeSupport TypeSupport;
            typedef TwistWithCovarianceDataWriter DataWriter;
            typedef TwistWithCovarianceDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Twist   twist ;
            DDS_Double   covariance [36];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TwistWithCovariance_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TwistWithCovariance_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistWithCovariance_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T TwistWithCovariance
        #define TSeq TwistWithCovarianceSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T TwistWithCovariance
        #define TSeq TwistWithCovarianceSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern TwistWithCovariance*
        TwistWithCovariance_create();

        NDDSUSERDllExport extern void
        TwistWithCovariance_delete(TwistWithCovariance* sample);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize(
            TwistWithCovariance* self);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize_ex(
            TwistWithCovariance* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize_w_params(
            TwistWithCovariance* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_finalize(
            TwistWithCovariance* self);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_finalize_w_return(
            TwistWithCovariance* self);

        NDDSUSERDllExport
        void TwistWithCovariance_finalize_ex(
            TwistWithCovariance* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TwistWithCovariance_finalize_w_params(
            TwistWithCovariance* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TwistWithCovariance_finalize_optional_members(
            TwistWithCovariance* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_copy(
            TwistWithCovariance* dst,
            const TwistWithCovariance* src);

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

#endif /* TwistWithCovariance */

