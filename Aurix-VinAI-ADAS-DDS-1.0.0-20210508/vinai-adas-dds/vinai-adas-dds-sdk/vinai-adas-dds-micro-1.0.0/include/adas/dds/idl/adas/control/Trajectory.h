/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Trajectory_1723163450_h
#define Trajectory_1723163450_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "TrajectoryPoint.h"

#include "TrajectoryCoeff.h"

namespace adas_dds {

    extern const char *TrajectoryTYPENAME;

    struct TrajectorySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrajectoryTypeSupport;
    class TrajectoryDataWriter;
    class TrajectoryDataReader;
    #endif
    class Trajectory 
    {
      public:
        typedef struct TrajectorySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrajectoryTypeSupport TypeSupport;
        typedef TrajectoryDataWriter DataWriter;
        typedef TrajectoryDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TrajectoryPointSeq  trajectory ;
        DDS_UnsignedLong   step ;
        adas_dds::TrajectoryCoeff   coeff ;
        DDS_Long   id ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Trajectory_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Trajectory_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Trajectory_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Trajectory
    #define TSeq TrajectorySeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Trajectory
    #define TSeq TrajectorySeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Trajectory*
    Trajectory_create();

    NDDSUSERDllExport extern void
    Trajectory_delete(Trajectory* sample);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize(
        Trajectory* self);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize_ex(
        Trajectory* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize_w_params(
        Trajectory* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Trajectory_finalize(
        Trajectory* self);

    NDDSUSERDllExport
    RTIBool Trajectory_finalize_w_return(
        Trajectory* self);

    NDDSUSERDllExport
    void Trajectory_finalize_ex(
        Trajectory* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Trajectory_finalize_w_params(
        Trajectory* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Trajectory_finalize_optional_members(
        Trajectory* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Trajectory_copy(
        Trajectory* dst,
        const Trajectory* src);

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

#endif /* Trajectory */

