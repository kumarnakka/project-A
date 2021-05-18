

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpPacket.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpPacket_50810159_h
#define VlpPacket_50810159_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "VlpBlock.h"
namespace adas_dds {

    extern const char *VlpPacketTYPENAME;

    struct VlpPacketSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class VlpPacketTypeSupport;
    class VlpPacketDataWriter;
    class VlpPacketDataReader;
    #endif
    class VlpPacket 
    {
      public:
        typedef struct VlpPacketSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef VlpPacketTypeSupport TypeSupport;
        typedef VlpPacketDataWriter DataWriter;
        typedef VlpPacketDataReader DataReader;
        #endif

        adas_dds::VlpBlock   blocks [12];
        DDS_UnsignedLong   vlp_timestamp ;
        DDS_UnsignedShort   reserved ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* VlpPacket_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *VlpPacket_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpPacket_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpPacket_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(VlpPacketSeq, VlpPacket);

    NDDSUSERDllExport
    RTIBool VlpPacket_initialize(
        VlpPacket* self);

    NDDSUSERDllExport
    RTIBool VlpPacket_initialize_ex(
        VlpPacket* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpPacket_initialize_w_params(
        VlpPacket* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpPacket_finalize_w_return(
        VlpPacket* self);

    NDDSUSERDllExport
    void VlpPacket_finalize(
        VlpPacket* self);

    NDDSUSERDllExport
    void VlpPacket_finalize_ex(
        VlpPacket* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void VlpPacket_finalize_w_params(
        VlpPacket* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void VlpPacket_finalize_optional_members(
        VlpPacket* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool VlpPacket_copy(
        VlpPacket* dst,
        const VlpPacket* src);

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
        struct type_code<adas_dds::VlpPacket> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VlpPacket */

