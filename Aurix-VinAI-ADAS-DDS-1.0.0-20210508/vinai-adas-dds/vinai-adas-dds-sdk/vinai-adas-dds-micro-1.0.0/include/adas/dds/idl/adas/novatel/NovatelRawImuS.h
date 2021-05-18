/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelRawImuS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelRawImuS_1290978300_h
#define NovatelRawImuS_1290978300_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelRawImuS
    #define TSeq NovatelRawImuSSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelRawImuS
    #define TSeq NovatelRawImuSSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelRawImuS*
    NovatelRawImuS_create();

    NDDSUSERDllExport extern void
    NovatelRawImuS_delete(NovatelRawImuS* sample);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize(
        NovatelRawImuS* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize_ex(
        NovatelRawImuS* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_initialize_w_params(
        NovatelRawImuS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_finalize(
        NovatelRawImuS* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuS_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelRawImuS */

