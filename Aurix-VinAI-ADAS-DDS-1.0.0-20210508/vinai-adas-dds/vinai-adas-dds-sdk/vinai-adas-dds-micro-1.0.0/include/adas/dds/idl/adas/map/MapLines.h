/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef MapLines_1466545029_h
#define MapLines_1466545029_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "MapLine.h"

namespace adas_dds {

    extern const char *MapLinesTYPENAME;

    struct MapLinesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class MapLinesTypeSupport;
    class MapLinesDataWriter;
    class MapLinesDataReader;
    #endif
    class MapLines 
    {
      public:
        typedef struct MapLinesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef MapLinesTypeSupport TypeSupport;
        typedef MapLinesDataWriter DataWriter;
        typedef MapLinesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::MapLineSeq  map_lines ;
        DDS_UnsignedLong   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* MapLines_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MapLines_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MapLines_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T MapLines
    #define TSeq MapLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T MapLines
    #define TSeq MapLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern MapLines*
    MapLines_create();

    NDDSUSERDllExport extern void
    MapLines_delete(MapLines* sample);

    NDDSUSERDllExport
    RTIBool MapLines_initialize(
        MapLines* self);

    NDDSUSERDllExport
    RTIBool MapLines_initialize_ex(
        MapLines* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MapLines_initialize_w_params(
        MapLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MapLines_finalize(
        MapLines* self);

    NDDSUSERDllExport
    RTIBool MapLines_finalize_w_return(
        MapLines* self);

    NDDSUSERDllExport
    void MapLines_finalize_ex(
        MapLines* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MapLines_finalize_w_params(
        MapLines* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MapLines_finalize_optional_members(
        MapLines* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MapLines_copy(
        MapLines* dst,
        const MapLines* src);

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

#endif /* MapLines */

