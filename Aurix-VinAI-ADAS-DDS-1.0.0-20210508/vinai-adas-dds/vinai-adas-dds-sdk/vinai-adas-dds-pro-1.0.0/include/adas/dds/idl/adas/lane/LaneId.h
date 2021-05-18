

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneId_1216626773_h
#define LaneId_1216626773_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *LaneIdTYPENAME;

    struct LaneIdSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneIdTypeSupport;
    class LaneIdDataWriter;
    class LaneIdDataReader;
    #endif
    class LaneId 
    {
      public:
        typedef struct LaneIdSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneIdTypeSupport TypeSupport;
        typedef LaneIdDataWriter DataWriter;
        typedef LaneIdDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_CharSeq  lane_idx ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneId_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneId_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneIdSeq, LaneId);

    NDDSUSERDllExport
    RTIBool LaneId_initialize(
        LaneId* self);

    NDDSUSERDllExport
    RTIBool LaneId_initialize_ex(
        LaneId* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneId_initialize_w_params(
        LaneId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneId_finalize_w_return(
        LaneId* self);

    NDDSUSERDllExport
    void LaneId_finalize(
        LaneId* self);

    NDDSUSERDllExport
    void LaneId_finalize_ex(
        LaneId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneId_finalize_w_params(
        LaneId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneId_finalize_optional_members(
        LaneId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneId_copy(
        LaneId* dst,
        const LaneId* src);

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
        struct type_code<adas_dds::LaneId> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneId */

