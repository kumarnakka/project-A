

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpGpsPacket.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpGpsPacket_1734880081_h
#define VlpGpsPacket_1734880081_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpGpsPacket_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(VlpGpsPacketSeq, VlpGpsPacket);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize(
        VlpGpsPacket* self);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize_ex(
        VlpGpsPacket* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_initialize_w_params(
        VlpGpsPacket* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpGpsPacket_finalize_w_return(
        VlpGpsPacket* self);

    NDDSUSERDllExport
    void VlpGpsPacket_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::VlpGpsPacket> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VlpGpsPacket */

