

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Lane.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Lane_1552900476_h
#define Lane_1552900476_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../common/Pose2.h"
namespace adas_dds {

    extern const char *LaneTYPENAME;

    struct LaneSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneTypeSupport;
    class LaneDataWriter;
    class LaneDataReader;
    #endif
    class Lane 
    {
      public:
        typedef struct LaneSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneTypeSupport TypeSupport;
        typedef LaneDataWriter DataWriter;
        typedef LaneDataReader DataReader;
        #endif

        DDS_Char   id ;
        DDS_Char *   type ;
        DDS_Boolean   predecessor_exists ;
        DDS_Long   predecessor_id ;
        DDS_Boolean   successor_exists ;
        DDS_Long   successor_id ;
        adas_dds::Pose2Seq  poses ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Lane_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Lane_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Lane_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Lane_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneSeq, Lane);

    NDDSUSERDllExport
    RTIBool Lane_initialize(
        Lane* self);

    NDDSUSERDllExport
    RTIBool Lane_initialize_ex(
        Lane* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Lane_initialize_w_params(
        Lane* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Lane_finalize_w_return(
        Lane* self);

    NDDSUSERDllExport
    void Lane_finalize(
        Lane* self);

    NDDSUSERDllExport
    void Lane_finalize_ex(
        Lane* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Lane_finalize_w_params(
        Lane* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Lane_finalize_optional_members(
        Lane* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Lane_copy(
        Lane* dst,
        const Lane* src);

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
        struct type_code<adas_dds::Lane> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Lane */

