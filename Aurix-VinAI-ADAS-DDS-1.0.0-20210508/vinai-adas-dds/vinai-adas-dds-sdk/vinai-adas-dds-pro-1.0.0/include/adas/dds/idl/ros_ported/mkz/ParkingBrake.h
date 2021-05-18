

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParkingBrake.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParkingBrake_2119277955_h
#define ParkingBrake_2119277955_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *ParkingBrakeTYPENAME;

        struct ParkingBrakeSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ParkingBrakeTypeSupport;
        class ParkingBrakeDataWriter;
        class ParkingBrakeDataReader;
        #endif
        class ParkingBrake 
        {
          public:
            typedef struct ParkingBrakeSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ParkingBrakeTypeSupport TypeSupport;
            typedef ParkingBrakeDataWriter DataWriter;
            typedef ParkingBrakeDataReader DataReader;
            #endif

            DDS_Octet   status ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ParkingBrake_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ParkingBrake_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParkingBrake_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParkingBrake_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ParkingBrakeSeq, ParkingBrake);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize(
            ParkingBrake* self);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize_ex(
            ParkingBrake* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize_w_params(
            ParkingBrake* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ParkingBrake_finalize_w_return(
            ParkingBrake* self);

        NDDSUSERDllExport
        void ParkingBrake_finalize(
            ParkingBrake* self);

        NDDSUSERDllExport
        void ParkingBrake_finalize_ex(
            ParkingBrake* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ParkingBrake_finalize_w_params(
            ParkingBrake* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ParkingBrake_finalize_optional_members(
            ParkingBrake* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ParkingBrake_copy(
            ParkingBrake* dst,
            const ParkingBrake* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dbw_mkz_msgs::ParkingBrake> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ParkingBrake */

