

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightRegion.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LightRegion_541396741_h
#define LightRegion_541396741_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../common/Point3.h"
#include "../../ros_ported/geometry/Pose.h"
namespace adas_dds {

    extern const char *LightRegionTYPENAME;

    struct LightRegionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LightRegionTypeSupport;
    class LightRegionDataWriter;
    class LightRegionDataReader;
    #endif
    class LightRegion 
    {
      public:
        typedef struct LightRegionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LightRegionTypeSupport TypeSupport;
        typedef LightRegionDataWriter DataWriter;
        typedef LightRegionDataReader DataReader;
        #endif

        adas_dds::Point3Seq  raw_data ;
        adas_dds::geometry_msgs::Pose   pose ;
        DDS_Boolean   is_detected ;
        DDS_Float   detect_score ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LightRegion_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LightRegion_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LightRegion_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LightRegion_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LightRegionSeq, LightRegion);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize(
        LightRegion* self);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize_ex(
        LightRegion* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize_w_params(
        LightRegion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LightRegion_finalize_w_return(
        LightRegion* self);

    NDDSUSERDllExport
    void LightRegion_finalize(
        LightRegion* self);

    NDDSUSERDllExport
    void LightRegion_finalize_ex(
        LightRegion* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LightRegion_finalize_w_params(
        LightRegion* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LightRegion_finalize_optional_members(
        LightRegion* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LightRegion_copy(
        LightRegion* dst,
        const LightRegion* src);

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
        struct type_code<adas_dds::LightRegion> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LightRegion */

