/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles2D.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Obstacles2D_1531937460_h
#define Obstacles2D_1531937460_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Obstacle2D.h"

namespace adas_dds {

    extern const char *Obstacles2DTYPENAME;

    struct Obstacles2DSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Obstacles2DTypeSupport;
    class Obstacles2DDataWriter;
    class Obstacles2DDataReader;
    #endif
    class Obstacles2D 
    {
      public:
        typedef struct Obstacles2DSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Obstacles2DTypeSupport TypeSupport;
        typedef Obstacles2DDataWriter DataWriter;
        typedef Obstacles2DDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Obstacle2DSeq  obstacles ;
        DDS_UnsignedLong   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Obstacles2D_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Obstacles2D_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacles2D_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Obstacles2D
    #define TSeq Obstacles2DSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Obstacles2D
    #define TSeq Obstacles2DSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Obstacles2D*
    Obstacles2D_create();

    NDDSUSERDllExport extern void
    Obstacles2D_delete(Obstacles2D* sample);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize(
        Obstacles2D* self);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize_ex(
        Obstacles2D* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize_w_params(
        Obstacles2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacles2D_finalize(
        Obstacles2D* self);

    NDDSUSERDllExport
    RTIBool Obstacles2D_finalize_w_return(
        Obstacles2D* self);

    NDDSUSERDllExport
    void Obstacles2D_finalize_ex(
        Obstacles2D* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Obstacles2D_finalize_w_params(
        Obstacles2D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Obstacles2D_finalize_optional_members(
        Obstacles2D* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Obstacles2D_copy(
        Obstacles2D* dst,
        const Obstacles2D* src);

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

#endif /* Obstacles2D */

