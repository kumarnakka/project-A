/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose2Array.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Pose2Array_200341937_h
#define Pose2Array_200341937_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Pose2.h"

namespace adas_dds {

    extern const char *Pose2ArrayTYPENAME;

    struct Pose2ArraySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Pose2ArrayTypeSupport;
    class Pose2ArrayDataWriter;
    class Pose2ArrayDataReader;
    #endif
    class Pose2Array 
    {
      public:
        typedef struct Pose2ArraySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Pose2ArrayTypeSupport TypeSupport;
        typedef Pose2ArrayDataWriter DataWriter;
        typedef Pose2ArrayDataReader DataReader;
        #endif

        adas_dds::Pose2Seq  poses ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pose2Array_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pose2Array_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose2Array_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Pose2Array
    #define TSeq Pose2ArraySeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Pose2Array
    #define TSeq Pose2ArraySeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Pose2Array*
    Pose2Array_create();

    NDDSUSERDllExport extern void
    Pose2Array_delete(Pose2Array* sample);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize(
        Pose2Array* self);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize_ex(
        Pose2Array* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize_w_params(
        Pose2Array* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pose2Array_finalize(
        Pose2Array* self);

    NDDSUSERDllExport
    RTIBool Pose2Array_finalize_w_return(
        Pose2Array* self);

    NDDSUSERDllExport
    void Pose2Array_finalize_ex(
        Pose2Array* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pose2Array_finalize_w_params(
        Pose2Array* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pose2Array_finalize_optional_members(
        Pose2Array* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pose2Array_copy(
        Pose2Array* dst,
        const Pose2Array* src);

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

#endif /* Pose2Array */

