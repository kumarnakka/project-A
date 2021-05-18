/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContiRadarObjects.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ContiRadarObjects_1363923924_h
#define ContiRadarObjects_1363923924_h

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

#include "ContiRadarObject.h"

namespace adas_dds {

    extern const char *ContiRadarObjectsTYPENAME;

    struct ContiRadarObjectsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ContiRadarObjectsTypeSupport;
    class ContiRadarObjectsDataWriter;
    class ContiRadarObjectsDataReader;
    #endif
    class ContiRadarObjects 
    {
      public:
        typedef struct ContiRadarObjectsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ContiRadarObjectsTypeSupport TypeSupport;
        typedef ContiRadarObjectsDataWriter DataWriter;
        typedef ContiRadarObjectsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ContiRadarObjectSeq  object_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ContiRadarObjects_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ContiRadarObjects_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ContiRadarObjects_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ContiRadarObjects
    #define TSeq ContiRadarObjectsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ContiRadarObjects
    #define TSeq ContiRadarObjectsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ContiRadarObjects*
    ContiRadarObjects_create();

    NDDSUSERDllExport extern void
    ContiRadarObjects_delete(ContiRadarObjects* sample);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize_ex(
        ContiRadarObjects* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize_w_params(
        ContiRadarObjects* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_finalize(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_finalize_w_return(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_ex(
        ContiRadarObjects* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_w_params(
        ContiRadarObjects* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_optional_members(
        ContiRadarObjects* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_copy(
        ContiRadarObjects* dst,
        const ContiRadarObjects* src);

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

#endif /* ContiRadarObjects */

