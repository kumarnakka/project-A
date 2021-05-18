

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovariance_1047502647_h
#define TwistWithCovariance_1047502647_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistWithCovariance_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TwistWithCovarianceSeq, TwistWithCovariance);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize(
            TwistWithCovariance* self);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize_ex(
            TwistWithCovariance* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_initialize_w_params(
            TwistWithCovariance* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TwistWithCovariance_finalize_w_return(
            TwistWithCovariance* self);

        NDDSUSERDllExport
        void TwistWithCovariance_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::geometry_msgs::TwistWithCovariance> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TwistWithCovariance */

