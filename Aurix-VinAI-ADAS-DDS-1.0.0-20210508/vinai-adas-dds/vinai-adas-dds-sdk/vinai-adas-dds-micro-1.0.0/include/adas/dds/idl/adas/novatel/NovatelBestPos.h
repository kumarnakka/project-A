/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelBestPos.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelBestPos_1360645303_h
#define NovatelBestPos_1360645303_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "NovatelCommonHeader.h"

namespace adas_dds {

    extern const char *NovatelBestPosTYPENAME;

    struct NovatelBestPosSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class NovatelBestPosTypeSupport;
    class NovatelBestPosDataWriter;
    class NovatelBestPosDataReader;
    #endif
    class NovatelBestPos 
    {
      public:
        typedef struct NovatelBestPosSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef NovatelBestPosTypeSupport TypeSupport;
        typedef NovatelBestPosDataWriter DataWriter;
        typedef NovatelBestPosDataReader DataReader;
        #endif

        adas_dds::NovatelCommonHeader   header ;
        DDS_UnsignedLong   solution_status ;
        DDS_UnsignedLong   position_type ;
        DDS_Double   latitude ;
        DDS_Double   longitude ;
        DDS_Double   altitude ;
        DDS_Float   undulation ;
        DDS_UnsignedLong   datum_id ;
        DDS_Float   latitude_std ;
        DDS_Float   longitude_std ;
        DDS_Float   altitude_std ;
        DDS_Char   stn_id [4];
        DDS_Float   diff_age ;
        DDS_Float   sol_age ;
        DDS_Octet   svs ;
        DDS_Octet   sol_svs ;
        DDS_Octet   l1_svs ;
        DDS_Octet   mult_svs ;
        DDS_Octet   reserved ;
        DDS_Octet   extsolstat ;
        DDS_Octet   gal_sig_mask ;
        DDS_Octet   sig_mask ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* NovatelBestPos_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NovatelBestPos_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NovatelBestPos_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T NovatelBestPos
    #define TSeq NovatelBestPosSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T NovatelBestPos
    #define TSeq NovatelBestPosSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern NovatelBestPos*
    NovatelBestPos_create();

    NDDSUSERDllExport extern void
    NovatelBestPos_delete(NovatelBestPos* sample);

    NDDSUSERDllExport
    RTIBool NovatelBestPos_initialize(
        NovatelBestPos* self);

    NDDSUSERDllExport
    RTIBool NovatelBestPos_initialize_ex(
        NovatelBestPos* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NovatelBestPos_initialize_w_params(
        NovatelBestPos* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NovatelBestPos_finalize(
        NovatelBestPos* self);

    NDDSUSERDllExport
    RTIBool NovatelBestPos_finalize_w_return(
        NovatelBestPos* self);

    NDDSUSERDllExport
    void NovatelBestPos_finalize_ex(
        NovatelBestPos* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NovatelBestPos_finalize_w_params(
        NovatelBestPos* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NovatelBestPos_finalize_optional_members(
        NovatelBestPos* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NovatelBestPos_copy(
        NovatelBestPos* dst,
        const NovatelBestPos* src);

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

#endif /* NovatelBestPos */

