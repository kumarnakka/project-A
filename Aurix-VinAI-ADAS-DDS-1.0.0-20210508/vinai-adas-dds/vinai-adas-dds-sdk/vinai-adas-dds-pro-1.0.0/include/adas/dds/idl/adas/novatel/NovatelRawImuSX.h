

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelRawImuSX.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelRawImuSX_1328572590_h
#define NovatelRawImuSX_1328572590_h

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

    extern const char *NovatelRawImuSXTYPENAME;

    struct NovatelRawImuSXSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelRawImuSXTypeSupport;
    class NovatelRawImuSXDataWriter;
    class NovatelRawImuSXDataReader;
    #endif
    class NovatelRawImuSX 
    {
      public:
        typedef struct NovatelRawImuSXSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelRawImuSXTypeSupport TypeSupport;
        typedef NovatelRawImuSXDataWriter DataWriter;
        typedef NovatelRawImuSXDataReader DataReader;
        #endif

        adas_dds::NovatelShortHeader   header ;
        DDS_Octet   imu_flag ;
        DDS_Octet   imu_type ;
        DDS_UnsignedShort   gps_week ;
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
    NDDSUSERDllExport DDS_TypeCode* NovatelRawImuSX_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelRawImuSX_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelRawImuSX_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelRawImuSX_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NovatelRawImuSXSeq, NovatelRawImuSX);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize(
        NovatelRawImuSX* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize_ex(
        NovatelRawImuSX* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize_w_params(
        NovatelRawImuSX* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_finalize_w_return(
        NovatelRawImuSX* self);

    NDDSUSERDllExport
    void NovatelRawImuSX_finalize(
        NovatelRawImuSX* self);

    NDDSUSERDllExport
    void NovatelRawImuSX_finalize_ex(
        NovatelRawImuSX* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelRawImuSX_finalize_w_params(
        NovatelRawImuSX* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelRawImuSX_finalize_optional_members(
        NovatelRawImuSX* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_copy(
        NovatelRawImuSX* dst,
        const NovatelRawImuSX* src);

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
        struct type_code<adas_dds::NovatelRawImuSX> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelRawImuSX */

