/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose2.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Pose2_761114569_h
#define Pose2_761114569_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    extern const char *Pose2TYPENAME;

    struct Pose2Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class Pose2TypeSupport;
    class Pose2DataWriter;
    class Pose2DataReader;
    #endif
    class Pose2 
    {
      public:
        typedef struct Pose2Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Pose2TypeSupport TypeSupport;
        typedef Pose2DataWriter DataWriter;
        typedef Pose2DataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   theta ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pose2_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pose2_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose2_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Pose2
    #define TSeq Pose2Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Pose2
    #define TSeq Pose2Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Pose2*
    Pose2_create();

    NDDSUSERDllExport extern void
    Pose2_delete(Pose2* sample);

    NDDSUSERDllExport
    RTIBool Pose2_initialize(
        Pose2* self);

    NDDSUSERDllExport
    RTIBool Pose2_initialize_ex(
        Pose2* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pose2_initialize_w_params(
        Pose2* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pose2_finalize(
        Pose2* self);

    NDDSUSERDllExport
    RTIBool Pose2_finalize_w_return(
        Pose2* self);

    NDDSUSERDllExport
    void Pose2_finalize_ex(
        Pose2* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pose2_finalize_w_params(
        Pose2* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pose2_finalize_optional_members(
        Pose2* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pose2_copy(
        Pose2* dst,
        const Pose2* src);

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

#endif /* Pose2 */

