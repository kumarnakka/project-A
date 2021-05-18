/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpScan.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef VlpScan_1066043098_h
#define VlpScan_1066043098_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "VlpPacket.h"

#include "../../ros_ported/std/Time.h"

namespace adas_dds {

    extern const char *VlpScanTYPENAME;

    struct VlpScanSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class VlpScanTypeSupport;
    class VlpScanDataWriter;
    class VlpScanDataReader;
    #endif
    class VlpScan 
    {
      public:
        typedef struct VlpScanSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef VlpScanTypeSupport TypeSupport;
        typedef VlpScanDataWriter DataWriter;
        typedef VlpScanDataReader DataReader;
        #endif

        DDS_Long   coord ;
        adas_dds::std_msgs::Time   timestamp ;
        adas_dds::VlpPacketSeq  packets ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* VlpScan_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *VlpScan_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpScan_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T VlpScan
    #define TSeq VlpScanSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T VlpScan
    #define TSeq VlpScanSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern VlpScan*
    VlpScan_create();

    NDDSUSERDllExport extern void
    VlpScan_delete(VlpScan* sample);

    NDDSUSERDllExport
    RTIBool VlpScan_initialize(
        VlpScan* self);

    NDDSUSERDllExport
    RTIBool VlpScan_initialize_ex(
        VlpScan* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpScan_initialize_w_params(
        VlpScan* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpScan_finalize(
        VlpScan* self);

    NDDSUSERDllExport
    RTIBool VlpScan_finalize_w_return(
        VlpScan* self);

    NDDSUSERDllExport
    void VlpScan_finalize_ex(
        VlpScan* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void VlpScan_finalize_w_params(
        VlpScan* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void VlpScan_finalize_optional_members(
        VlpScan* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool VlpScan_copy(
        VlpScan* dst,
        const VlpScan* src);

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

#endif /* VlpScan */

