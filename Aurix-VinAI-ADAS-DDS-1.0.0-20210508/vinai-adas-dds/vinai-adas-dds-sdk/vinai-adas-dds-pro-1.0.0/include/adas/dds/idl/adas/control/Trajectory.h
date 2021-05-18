

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Trajectory_1723163450_h
#define Trajectory_1723163450_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Trajectory_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrajectorySeq, Trajectory);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize(
        Trajectory* self);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize_ex(
        Trajectory* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Trajectory_initialize_w_params(
        Trajectory* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Trajectory_finalize_w_return(
        Trajectory* self);

    NDDSUSERDllExport
    void Trajectory_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Trajectory> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Trajectory */

