/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapLine.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef MapLine_2127517238_h
#define MapLine_2127517238_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../../ros_ported/std/Header.h"

#include "../common/Point3.h"

#include "../lane/LineHeader.h"

namespace adas_dds {

    extern const char *MapLineTYPENAME;

    struct MapLineSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class MapLineTypeSupport;
    class MapLineDataWriter;
    class MapLineDataReader;
    #endif
    class MapLine 
    {
      public:
        typedef struct MapLineSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef MapLineTypeSupport TypeSupport;
        typedef MapLineDataWriter DataWriter;
        typedef MapLineDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LineHeader   line_header ;
        adas_dds::Point3Seq  raw_points ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* MapLine_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MapLine_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MapLine_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T MapLine
    #define TSeq MapLineSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T MapLine
    #define TSeq MapLineSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern MapLine*
    MapLine_create();

    NDDSUSERDllExport extern void
    MapLine_delete(MapLine* sample);

    NDDSUSERDllExport
    RTIBool MapLine_initialize(
        MapLine* self);

    NDDSUSERDllExport
    RTIBool MapLine_initialize_ex(
        MapLine* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MapLine_initialize_w_params(
        MapLine* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MapLine_finalize(
        MapLine* self);

    NDDSUSERDllExport
    RTIBool MapLine_finalize_w_return(
        MapLine* self);

    NDDSUSERDllExport
    void MapLine_finalize_ex(
        MapLine* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MapLine_finalize_w_params(
        MapLine* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MapLine_finalize_optional_members(
        MapLine* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MapLine_copy(
        MapLine* dst,
        const MapLine* src);

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

#endif /* MapLine */

