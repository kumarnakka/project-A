/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectories.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Trajectories_1630550884_h
#define Trajectories_1630550884_h

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

#include "Trajectory.h"

namespace adas_dds {

    extern const char *TrajectoriesTYPENAME;

    struct TrajectoriesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrajectoriesTypeSupport;
    class TrajectoriesDataWriter;
    class TrajectoriesDataReader;
    #endif
    class Trajectories 
    {
      public:
        typedef struct TrajectoriesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrajectoriesTypeSupport TypeSupport;
        typedef TrajectoriesDataWriter DataWriter;
        typedef TrajectoriesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TrajectorySeq  trajectories ;
        DDS_UnsignedLong   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Trajectories_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Trajectories_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Trajectories_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Trajectories
    #define TSeq TrajectoriesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Trajectories
    #define TSeq TrajectoriesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Trajectories*
    Trajectories_create();

    NDDSUSERDllExport extern void
    Trajectories_delete(Trajectories* sample);

    NDDSUSERDllExport
    RTIBool Trajectories_initialize(
        Trajectories* self);

    NDDSUSERDllExport
    RTIBool Trajectories_initialize_ex(
        Trajectories* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Trajectories_initialize_w_params(
        Trajectories* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Trajectories_finalize(
        Trajectories* self);

    NDDSUSERDllExport
    RTIBool Trajectories_finalize_w_return(
        Trajectories* self);

    NDDSUSERDllExport
    void Trajectories_finalize_ex(
        Trajectories* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Trajectories_finalize_w_params(
        Trajectories* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Trajectories_finalize_optional_members(
        Trajectories* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Trajectories_copy(
        Trajectories* dst,
        const Trajectories* src);

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

#endif /* Trajectories */

