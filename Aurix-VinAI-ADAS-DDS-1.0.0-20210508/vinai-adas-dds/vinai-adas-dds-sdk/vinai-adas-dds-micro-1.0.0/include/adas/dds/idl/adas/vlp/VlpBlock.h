/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VlpBlock.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef VlpBlock_240399916_h
#define VlpBlock_240399916_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T VlpBlock
    #define TSeq VlpBlockSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T VlpBlock
    #define TSeq VlpBlockSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern VlpBlock*
    VlpBlock_create();

    NDDSUSERDllExport extern void
    VlpBlock_delete(VlpBlock* sample);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize(
        VlpBlock* self);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize_ex(
        VlpBlock* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool VlpBlock_initialize_w_params(
        VlpBlock* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool VlpBlock_finalize(
        VlpBlock* self);

    NDDSUSERDllExport
    RTIBool VlpBlock_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VlpBlock */

