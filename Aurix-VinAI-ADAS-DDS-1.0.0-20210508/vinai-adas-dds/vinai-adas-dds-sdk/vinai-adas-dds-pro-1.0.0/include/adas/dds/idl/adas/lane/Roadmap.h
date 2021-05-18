

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Roadmap.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Roadmap_1865745685_h
#define Roadmap_1865745685_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "Road.h"
namespace adas_dds {

    extern const char *RoadmapTYPENAME;

    struct RoadmapSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RoadmapTypeSupport;
    class RoadmapDataWriter;
    class RoadmapDataReader;
    #endif
    class Roadmap 
    {
      public:
        typedef struct RoadmapSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RoadmapTypeSupport TypeSupport;
        typedef RoadmapDataWriter DataWriter;
        typedef RoadmapDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::RoadSeq  roads ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Roadmap_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Roadmap_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Roadmap_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Roadmap_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(RoadmapSeq, Roadmap);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize(
        Roadmap* self);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize_ex(
        Roadmap* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize_w_params(
        Roadmap* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Roadmap_finalize_w_return(
        Roadmap* self);

    NDDSUSERDllExport
    void Roadmap_finalize(
        Roadmap* self);

    NDDSUSERDllExport
    void Roadmap_finalize_ex(
        Roadmap* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Roadmap_finalize_w_params(
        Roadmap* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Roadmap_finalize_optional_members(
        Roadmap* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Roadmap_copy(
        Roadmap* dst,
        const Roadmap* src);

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
        struct type_code<adas_dds::Roadmap> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Roadmap */

