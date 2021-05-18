

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpBlock.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VlpBlock_240399916_h
#define VlpBlock_240399916_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *VlpBlockTYPENAME;

    struct VlpBlockSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class VlpBlockTypeSupport;
    class VlpBlockDataWriter;
    class VlpBlockDataReader;
    #endif
    class VlpBlock 
    {
      public:
        typedef struct VlpBlockSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef VlpBlockTypeSupport TypeSupport;
        typedef VlpBlockDataWriter DataWriter;
        typedef VlpBlockDataReader DataReader;
        #endif

        DDS_UnsignedShort   header ;
        DDS_UnsignedShort   rotation ;
        DDS_Octet   data [96];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* VlpBlock_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *VlpBlock_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpBlock_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *VlpBlock_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(VlpBlockSeq, VlpBlock);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize(
        VlpBlock* self);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize_ex(
        VlpBlock* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize_w_params(
        VlpBlock* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpBlock_finalize_w_return(
        VlpBlock* self);

    NDDSUSERDllExport
    void VlpBlock_finalize(
        VlpBlock* self);

    NDDSUSERDllExport
    void VlpBlock_finalize_ex(
        VlpBlock* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void VlpBlock_finalize_w_params(
        VlpBlock* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void VlpBlock_finalize_optional_members(
        VlpBlock* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool VlpBlock_copy(
        VlpBlock* dst,
        const VlpBlock* src);

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
        struct type_code<adas_dds::VlpBlock> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VlpBlock */

