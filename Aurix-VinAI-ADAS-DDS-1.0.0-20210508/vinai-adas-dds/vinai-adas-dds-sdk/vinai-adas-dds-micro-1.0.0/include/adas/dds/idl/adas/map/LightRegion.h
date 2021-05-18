/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightRegion.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LightRegion_541396741_h
#define LightRegion_541396741_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LightRegion
    #define TSeq LightRegionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LightRegion
    #define TSeq LightRegionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LightRegion*
    LightRegion_create();

    NDDSUSERDllExport extern void
    LightRegion_delete(LightRegion* sample);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize(
        LightRegion* self);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize_ex(
        LightRegion* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LightRegion_initialize_w_params(
        LightRegion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LightRegion_finalize(
        LightRegion* self);

    NDDSUSERDllExport
    RTIBool LightRegion_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LightRegion */

