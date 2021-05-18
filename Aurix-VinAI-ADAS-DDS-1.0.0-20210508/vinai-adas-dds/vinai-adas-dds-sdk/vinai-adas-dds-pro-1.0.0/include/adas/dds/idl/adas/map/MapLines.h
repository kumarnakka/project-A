

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MapLines_1466545029_h
#define MapLines_1466545029_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MapLines_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MapLinesSeq, MapLines);

    NDDSUSERDllExport
    RTIBool MapLines_initialize(
        MapLines* self);

    NDDSUSERDllExport
    RTIBool MapLines_initialize_ex(
        MapLines* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MapLines_initialize_w_params(
        MapLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MapLines_finalize_w_return(
        MapLines* self);

    NDDSUSERDllExport
    void MapLines_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::MapLines> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MapLines */

