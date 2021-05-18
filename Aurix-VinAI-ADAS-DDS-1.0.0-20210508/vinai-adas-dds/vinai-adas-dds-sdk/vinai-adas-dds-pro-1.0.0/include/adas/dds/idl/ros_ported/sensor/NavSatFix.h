

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatFix_599873210_h
#define NavSatFix_599873210_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../std/Header.h"
#include "NavSatStatus.h"
namespace adas_dds {
    namespace sensor_msgs {
        typedef enum NavSatFix_CovarianceType
        {
            COVARIANCE_TYPE_UNKNOWN ,      
            COVARIANCE_TYPE_APPROXIMATED ,      
            COVARIANCE_TYPE_DIAGONAL_KNOWN ,      
            COVARIANCE_TYPE_KNOWN      
        } NavSatFix_CovarianceType;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* NavSatFix_CovarianceType_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *NavSatFix_CovarianceType_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatFix_CovarianceType_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatFix_CovarianceType_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(NavSatFix_CovarianceTypeSeq, NavSatFix_CovarianceType);

        NDDSUSERDllExport
        RTIBool NavSatFix_CovarianceType_initialize(
            NavSatFix_CovarianceType* self);

        NDDSUSERDllExport
        RTIBool NavSatFix_CovarianceType_initialize_ex(
            NavSatFix_CovarianceType* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool NavSatFix_CovarianceType_initialize_w_params(
            NavSatFix_CovarianceType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool NavSatFix_CovarianceType_finalize_w_return(
            NavSatFix_CovarianceType* self);

        NDDSUSERDllExport
        void NavSatFix_CovarianceType_finalize(
            NavSatFix_CovarianceType* self);

        NDDSUSERDllExport
        void NavSatFix_CovarianceType_finalize_ex(
            NavSatFix_CovarianceType* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void NavSatFix_CovarianceType_finalize_w_params(
            NavSatFix_CovarianceType* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void NavSatFix_CovarianceType_finalize_optional_members(
            NavSatFix_CovarianceType* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool NavSatFix_CovarianceType_copy(
            NavSatFix_CovarianceType* dst,
            const NavSatFix_CovarianceType* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *NavSatFixTYPENAME;

        struct NavSatFixSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class NavSatFixTypeSupport;
        class NavSatFixDataWriter;
        class NavSatFixDataReader;
        #endif
        class NavSatFix 
        {
          public:
            typedef struct NavSatFixSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef NavSatFixTypeSupport TypeSupport;
            typedef NavSatFixDataWriter DataWriter;
            typedef NavSatFixDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::sensor_msgs::NavSatStatus   status ;
            DDS_Double   latitude ;
            DDS_Double   longitude ;
            DDS_Double   altitude ;
            DDS_Double   position_covariance [9];
            DDS_Octet   position_covariance_type ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* NavSatFix_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *NavSatFix_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatFix_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatFix_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(NavSatFixSeq, NavSatFix);

        NDDSUSERDllExport
        RTIBool NavSatFix_initialize(
            NavSatFix* self);

        NDDSUSERDllExport
        RTIBool NavSatFix_initialize_ex(
            NavSatFix* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool NavSatFix_initialize_w_params(
            NavSatFix* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool NavSatFix_finalize_w_return(
            NavSatFix* self);

        NDDSUSERDllExport
        void NavSatFix_finalize(
            NavSatFix* self);

        NDDSUSERDllExport
        void NavSatFix_finalize_ex(
            NavSatFix* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void NavSatFix_finalize_w_params(
            NavSatFix* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void NavSatFix_finalize_optional_members(
            NavSatFix* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool NavSatFix_copy(
            NavSatFix* dst,
            const NavSatFix* src);

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
        struct type_code<adas_dds::sensor_msgs::NavSatFix> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NavSatFix */

