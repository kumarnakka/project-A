/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cones.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Cones_1178435110_h
#define Cones_1178435110_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Cone.h"

namespace adas_dds {

    extern const char *ConesTYPENAME;

    struct ConesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ConesTypeSupport;
    class ConesDataWriter;
    class ConesDataReader;
    #endif
    class Cones 
    {
      public:
        typedef struct ConesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ConesTypeSupport TypeSupport;
        typedef ConesDataWriter DataWriter;
        typedef ConesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ConeSeq  cone_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Cones_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Cones_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Cones_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Cones
    #define TSeq ConesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Cones
    #define TSeq ConesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Cones*
    Cones_create();

    NDDSUSERDllExport extern void
    Cones_delete(Cones* sample);

    NDDSUSERDllExport
    RTIBool Cones_initialize(
        Cones* self);

    NDDSUSERDllExport
    RTIBool Cones_initialize_ex(
        Cones* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Cones_initialize_w_params(
        Cones* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Cones_finalize(
        Cones* self);

    NDDSUSERDllExport
    RTIBool Cones_finalize_w_return(
        Cones* self);

    NDDSUSERDllExport
    void Cones_finalize_ex(
        Cones* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Cones_finalize_w_params(
        Cones* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Cones_finalize_optional_members(
        Cones* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Cones_copy(
        Cones* dst,
        const Cones* src);

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

#endif /* Cones */

