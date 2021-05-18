

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelInsPvaX.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelInsPvaX_521261947_h
#define NovatelInsPvaX_521261947_h

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

    extern const char *NovatelInsPvaXTYPENAME;

    struct NovatelInsPvaXSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelInsPvaXTypeSupport;
    class NovatelInsPvaXDataWriter;
    class NovatelInsPvaXDataReader;
    #endif
    class NovatelInsPvaX 
    {
      public:
        typedef struct NovatelInsPvaXSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelInsPvaXTypeSupport TypeSupport;
        typedef NovatelInsPvaXDataWriter DataWriter;
        typedef NovatelInsPvaXDataReader DataReader;
        #endif

        adas_dds::NovatelShortHeader   header ;
        DDS_UnsignedLong   status ;
        DDS_UnsignedLong   position_type ;
        DDS_Double   latitude ;
        DDS_Double   longitude ;
        DDS_Double   height ;
        DDS_Float   undulation ;
        DDS_Double   north_velocity ;
        DDS_Double   east_velocity ;
        DDS_Double   up_velocity ;
        DDS_Double   roll ;
        DDS_Double   pitch ;
        DDS_Double   azimuth ;
        DDS_Float   latitude_std ;
        DDS_Float   longitude_std ;
        DDS_Float   height_std ;
        DDS_Float   north_velocity_std ;
        DDS_Float   east_velocity_std ;
        DDS_Float   up_velocity_std ;
        DDS_Float   roll_std ;
        DDS_Float   pitch_std ;
        DDS_Float   azimuth_std ;
        DDS_UnsignedLong   extended_status ;
        DDS_UnsignedShort   time_since_last_zupt_update ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelInsPvaX_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelInsPvaX_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelInsPvaX_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelInsPvaX_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(NovatelInsPvaXSeq, NovatelInsPvaX);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaX_initialize(
        NovatelInsPvaX* self);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaX_initialize_ex(
        NovatelInsPvaX* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelInsPvaX_initialize_w_params(
        NovatelInsPvaX* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelInsPvaX_finalize_w_return(
        NovatelInsPvaX* self);

    NDDSUSERDllExport
    void NovatelInsPvaX_finalize(
        NovatelInsPvaX* self);

    NDDSUSERDllExport
    void NovatelInsPvaX_finalize_ex(
        NovatelInsPvaX* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelInsPvaX_finalize_w_params(
        NovatelInsPvaX* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelInsPvaX_finalize_optional_members(
        NovatelInsPvaX* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelInsPvaX_copy(
        NovatelInsPvaX* dst,
        const NovatelInsPvaX* src);

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
        struct type_code<adas_dds::NovatelInsPvaX> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelInsPvaX */

