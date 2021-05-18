

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatStatus.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatStatus_516191624_h
#define NavSatStatus_516191624_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace sensor_msgs {

        static const DDS_Char NavSatStatus_STATUS_NO_FIX= -1;

        static const DDS_Char NavSatStatus_STATUS_FIX= 0;

        static const DDS_Char NavSatStatus_STATUS_SBAS_FIX= 1;

        static const DDS_Char NavSatStatus_STATUS_GBAS_FIX= 2;

        static const DDS_UnsignedShort NavSatStatus_SERVICE_GPS= 1;

        static const DDS_UnsignedShort NavSatStatus_SERVICE_GLONASS= 2;

        static const DDS_UnsignedShort NavSatStatus_SERVICE_COMPASS= 4;

        static const DDS_UnsignedShort NavSatStatus_SERVICE_GALILEO= 8;

        extern const char *NavSatStatusTYPENAME;

        struct NavSatStatusSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class NavSatStatusTypeSupport;
        class NavSatStatusDataWriter;
        class NavSatStatusDataReader;
        #endif
        class NavSatStatus 
        {
          public:
            typedef struct NavSatStatusSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef NavSatStatusTypeSupport TypeSupport;
            typedef NavSatStatusDataWriter DataWriter;
            typedef NavSatStatusDataReader DataReader;
            #endif

            DDS_Char   status ;
            DDS_UnsignedShort   service ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* NavSatStatus_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *NavSatStatus_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatStatus_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *NavSatStatus_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(NavSatStatusSeq, NavSatStatus);

        NDDSUSERDllExport
        RTIBool NavSatStatus_initialize(
            NavSatStatus* self);

        NDDSUSERDllExport
        RTIBool NavSatStatus_initialize_ex(
            NavSatStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool NavSatStatus_initialize_w_params(
            NavSatStatus* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool NavSatStatus_finalize_w_return(
            NavSatStatus* self);

        NDDSUSERDllExport
        void NavSatStatus_finalize(
            NavSatStatus* self);

        NDDSUSERDllExport
        void NavSatStatus_finalize_ex(
            NavSatStatus* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void NavSatStatus_finalize_w_params(
            NavSatStatus* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void NavSatStatus_finalize_optional_members(
            NavSatStatus* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool NavSatStatus_copy(
            NavSatStatus* dst,
            const NavSatStatus* src);

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
        struct type_code<adas_dds::sensor_msgs::NavSatStatus> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NavSatStatus */

