/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpGpsPacket.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef VlpGpsPacket_1734880081_h
#define VlpGpsPacket_1734880081_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    extern const char *VlpGpsPacketTYPENAME;

    struct VlpGpsPacketSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class VlpGpsPacketTypeSupport;
    class VlpGpsPacketDataWriter;
    class VlpGpsPacketDataReader;
    #endif
    class VlpGpsPacket 
    {
      public:
        typedef struct VlpGpsPacketSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef VlpGpsPacketTypeSupport TypeSupport;
        typedef VlpGpsPacketDataWriter DataWriter;
        typedef VlpGpsPacketDataReader DataReader;
        #endif

        DDS_Octet   pps_state ;
        DDS_Octet   nmea_state ;
        DDS_Octet   nmea [72];
        DDS_UnsignedLong   gps_timestamp ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* VlpGpsPacket_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *VlpGpsPacket_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpGpsPacket_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T VlpGpsPacket
    #define TSeq VlpGpsPacketSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T VlpGpsPacket
    #define TSeq VlpGpsPacketSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern VlpGpsPacket*
    VlpGpsPacket_create();

    NDDSUSERDllExport extern void
    VlpGpsPacket_delete(VlpGpsPacket* sample);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize(
        VlpGpsPacket* self);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize_ex(
        VlpGpsPacket* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize_w_params(
        VlpGpsPacket* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_finalize(
        VlpGpsPacket* self);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_finalize_w_return(
        VlpGpsPacket* self);

    NDDSUSERDllExport
    void VlpGpsPacket_finalize_ex(
        VlpGpsPacket* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void VlpGpsPacket_finalize_w_params(
        VlpGpsPacket* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void VlpGpsPacket_finalize_optional_members(
        VlpGpsPacket* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_copy(
        VlpGpsPacket* dst,
        const VlpGpsPacket* src);

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

#endif /* VlpGpsPacket */

