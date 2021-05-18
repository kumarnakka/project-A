

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseWithCovariance.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseWithCovariance_696562243_h
#define PoseWithCovariance_696562243_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Pose.h"
namespace adas_dds {
    namespace geometry_msgs {

        extern const char *PoseWithCovarianceTYPENAME;

        struct PoseWithCovarianceSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PoseWithCovarianceTypeSupport;
        class PoseWithCovarianceDataWriter;
        class PoseWithCovarianceDataReader;
        #endif
        class PoseWithCovariance 
        {
          public:
            typedef struct PoseWithCovarianceSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PoseWithCovarianceTypeSupport TypeSupport;
            typedef PoseWithCovarianceDataWriter DataWriter;
            typedef PoseWithCovarianceDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Pose   pose ;
            DDS_Double   covariance [36];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PoseWithCovariance_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PoseWithCovariance_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PoseWithCovariance_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PoseWithCovariance_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PoseWithCovarianceSeq, PoseWithCovariance);

        NDDSUSERDllExport
        RTIBool PoseWithCovariance_initialize(
            PoseWithCovariance* self);

        NDDSUSERDllExport
        RTIBool PoseWithCovariance_initialize_ex(
            PoseWithCovariance* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PoseWithCovariance_initialize_w_params(
            PoseWithCovariance* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PoseWithCovariance_finalize_w_return(
            PoseWithCovariance* self);

        NDDSUSERDllExport
        void PoseWithCovariance_finalize(
            PoseWithCovariance* self);

        NDDSUSERDllExport
        void PoseWithCovariance_finalize_ex(
            PoseWithCovariance* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PoseWithCovariance_finalize_w_params(
            PoseWithCovariance* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PoseWithCovariance_finalize_optional_members(
            PoseWithCovariance* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PoseWithCovariance_copy(
            PoseWithCovariance* dst,
            const PoseWithCovariance* src);

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
        struct type_code<adas_dds::geometry_msgs::PoseWithCovariance> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PoseWithCovariance */

