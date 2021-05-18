

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Road.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Road_518925805_h
#define Road_518925805_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "LaneSection.h"
namespace adas_dds {

    extern const char *RoadTYPENAME;

    struct RoadSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RoadTypeSupport;
    class RoadDataWriter;
    class RoadDataReader;
    #endif
    class Road 
    {
      public:
        typedef struct RoadSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RoadTypeSupport TypeSupport;
        typedef RoadDataWriter DataWriter;
        typedef RoadDataReader DataReader;
        #endif

        DDS_Long   id ;
        DDS_Char   side ;
        DDS_Double   road_length ;
        adas_dds::LaneSectionSeq  lane_sections ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Road_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Road_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Road_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Road_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(RoadSeq, Road);

    NDDSUSERDllExport
    RTIBool Road_initialize(
        Road* self);

    NDDSUSERDllExport
    RTIBool Road_initialize_ex(
        Road* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Road_initialize_w_params(
        Road* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Road_finalize_w_return(
        Road* self);

    NDDSUSERDllExport
    void Road_finalize(
        Road* self);

    NDDSUSERDllExport
    void Road_finalize_ex(
        Road* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Road_finalize_w_params(
        Road* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Road_finalize_optional_members(
        Road* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Road_copy(
        Road* dst,
        const Road* src);

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
        struct type_code<adas_dds::Road> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Road */

