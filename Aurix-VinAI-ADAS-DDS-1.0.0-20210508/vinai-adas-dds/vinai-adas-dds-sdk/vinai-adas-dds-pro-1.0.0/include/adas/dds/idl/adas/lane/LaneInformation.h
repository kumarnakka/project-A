

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneInformation.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneInformation_1133435031_h
#define LaneInformation_1133435031_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../common/Pose2.h"
namespace adas_dds {

    extern const char *LaneInformationTYPENAME;

    struct LaneInformationSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneInformationTypeSupport;
    class LaneInformationDataWriter;
    class LaneInformationDataReader;
    #endif
    class LaneInformation 
    {
      public:
        typedef struct LaneInformationSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneInformationTypeSupport TypeSupport;
        typedef LaneInformationDataWriter DataWriter;
        typedef LaneInformationDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_UnsignedLongLong   lane_id ;
        DDS_UnsignedLongLong   num_points ;
        adas_dds::Pose2Seq  points ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneInformation_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneInformation_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneInformation_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneInformation_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneInformationSeq, LaneInformation);

    NDDSUSERDllExport
    RTIBool LaneInformation_initialize(
        LaneInformation* self);

    NDDSUSERDllExport
    RTIBool LaneInformation_initialize_ex(
        LaneInformation* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneInformation_initialize_w_params(
        LaneInformation* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneInformation_finalize_w_return(
        LaneInformation* self);

    NDDSUSERDllExport
    void LaneInformation_finalize(
        LaneInformation* self);

    NDDSUSERDllExport
    void LaneInformation_finalize_ex(
        LaneInformation* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneInformation_finalize_w_params(
        LaneInformation* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneInformation_finalize_optional_members(
        LaneInformation* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneInformation_copy(
        LaneInformation* dst,
        const LaneInformation* src);

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
        struct type_code<adas_dds::LaneInformation> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneInformation */

