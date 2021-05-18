/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Roadmap.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Roadmap_1865745685_h
#define Roadmap_1865745685_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Roadmap
    #define TSeq RoadmapSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Roadmap
    #define TSeq RoadmapSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Roadmap*
    Roadmap_create();

    NDDSUSERDllExport extern void
    Roadmap_delete(Roadmap* sample);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize(
        Roadmap* self);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize_ex(
        Roadmap* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Roadmap_initialize_w_params(
        Roadmap* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Roadmap_finalize(
        Roadmap* self);

    NDDSUSERDllExport
    RTIBool Roadmap_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Roadmap */

