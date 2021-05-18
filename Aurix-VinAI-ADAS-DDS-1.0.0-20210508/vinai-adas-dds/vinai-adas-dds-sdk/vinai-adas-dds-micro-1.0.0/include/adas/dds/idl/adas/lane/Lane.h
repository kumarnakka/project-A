/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Lane.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Lane_1552900476_h
#define Lane_1552900476_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../common/Pose2.h"

namespace adas_dds {

    extern const char *LaneTYPENAME;

    struct LaneSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneTypeSupport;
    class LaneDataWriter;
    class LaneDataReader;
    #endif
    class Lane 
    {
      public:
        typedef struct LaneSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneTypeSupport TypeSupport;
        typedef LaneDataWriter DataWriter;
        typedef LaneDataReader DataReader;
        #endif

        DDS_Char   id ;
        DDS_String   type ;
        DDS_Boolean   predecessor_exists ;
        DDS_Long   predecessor_id ;
        DDS_Boolean   successor_exists ;
        DDS_Long   successor_id ;
        adas_dds::Pose2Seq  poses ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Lane_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Lane_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Lane_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Lane
    #define TSeq LaneSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Lane
    #define TSeq LaneSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Lane*
    Lane_create();

    NDDSUSERDllExport extern void
    Lane_delete(Lane* sample);

    NDDSUSERDllExport
    RTIBool Lane_initialize(
        Lane* self);

    NDDSUSERDllExport
    RTIBool Lane_initialize_ex(
        Lane* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Lane_initialize_w_params(
        Lane* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Lane_finalize(
        Lane* self);

    NDDSUSERDllExport
    RTIBool Lane_finalize_w_return(
        Lane* self);

    NDDSUSERDllExport
    void Lane_finalize_ex(
        Lane* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Lane_finalize_w_params(
        Lane* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Lane_finalize_optional_members(
        Lane* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Lane_copy(
        Lane* dst,
        const Lane* src);

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

#endif /* Lane */

