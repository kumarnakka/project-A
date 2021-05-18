

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelRawImuS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelRawImuS_1290978300_h
#define NovatelRawImuS_1290978300_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "NovatelShortHeader.h"
namespace adas_dds {

    extern const char *NovatelRawImuSTYPENAME;

    struct NovatelRawImuSSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelRawImuSTypeSupport;
    class NovatelRawImuSDataWriter;
    class NovatelRawImuSDataReader;
    #endif
    class NovatelRawImuS 
    {
      public:
        typedef struct NovatelRawImuSSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelRawImuSTypeSupport TypeSupport;
        typedef NovatelRawImuSDataWriter DataWriter;
        typedef NovatelRawImuSDataReader DataReader;
        #endif

        adas_dds::NovatelShortHeader   header ;
        DDS_UnsignedLong   gps_week ;
        DDS_Double   gps_secs ;
        DDS_UnsignedLong   imu_status ;
        DDS_Long   z_acceleration ;
        DDS_Long   y_acceleration_neg ;
        DDS_Long   x_acceleration ;
        DDS_Long   z_gyro_rate ;
        DDS_Long   y_gyro_rate_neg ;
        DDS_Long   x_gyro_rate ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelRawImuS_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelRawImuS_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelRawImuS_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelRawImuS_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NovatelRawImuSSeq, NovatelRawImuS);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize(
        NovatelRawImuS* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize_ex(
        NovatelRawImuS* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize_w_params(
        NovatelRawImuS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_finalize_w_return(
        NovatelRawImuS* self);

    NDDSUSERDllExport
    void NovatelRawImuS_finalize(
        NovatelRawImuS* self);

    NDDSUSERDllExport
    void NovatelRawImuS_finalize_ex(
        NovatelRawImuS* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelRawImuS_finalize_w_params(
        NovatelRawImuS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelRawImuS_finalize_optional_members(
        NovatelRawImuS* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_copy(
        NovatelRawImuS* dst,
        const NovatelRawImuS* src);

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
        struct type_code<adas_dds::NovatelRawImuS> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelRawImuS */

