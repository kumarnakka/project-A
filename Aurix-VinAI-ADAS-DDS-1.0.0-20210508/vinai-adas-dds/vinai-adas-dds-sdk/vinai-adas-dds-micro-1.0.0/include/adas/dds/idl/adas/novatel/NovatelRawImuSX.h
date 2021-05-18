/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelRawImuSX.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelRawImuSX_1328572590_h
#define NovatelRawImuSX_1328572590_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelRawImuSX
    #define TSeq NovatelRawImuSXSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelRawImuSX
    #define TSeq NovatelRawImuSXSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelRawImuSX*
    NovatelRawImuSX_create();

    NDDSUSERDllExport extern void
    NovatelRawImuSX_delete(NovatelRawImuSX* sample);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize(
        NovatelRawImuSX* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize_ex(
        NovatelRawImuSX* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_initialize_w_params(
        NovatelRawImuSX* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_finalize(
        NovatelRawImuSX* self);

    NDDSUSERDllExport
    RTIBool NovatelRawImuSX_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelRawImuSX */

