/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Road.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Road_518925805_h
#define Road_518925805_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Road
    #define TSeq RoadSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Road
    #define TSeq RoadSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Road*
    Road_create();

    NDDSUSERDllExport extern void
    Road_delete(Road* sample);

    NDDSUSERDllExport
    RTIBool Road_initialize(
        Road* self);

    NDDSUSERDllExport
    RTIBool Road_initialize_ex(
        Road* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Road_initialize_w_params(
        Road* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Road_finalize(
        Road* self);

    NDDSUSERDllExport
    RTIBool Road_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Road */

