/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryPoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrajectoryPoint_896726877_h
#define TrajectoryPoint_896726877_h

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

namespace adas_dds {

    extern const char *TrajectoryPointTYPENAME;

    struct TrajectoryPointSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrajectoryPointTypeSupport;
    class TrajectoryPointDataWriter;
    class TrajectoryPointDataReader;
    #endif
    class TrajectoryPoint 
    {
      public:
        typedef struct TrajectoryPointSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrajectoryPointTypeSupport TypeSupport;
        typedef TrajectoryPointDataWriter DataWriter;
        typedef TrajectoryPointDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   z ;
        DDS_Float   theta ;
        DDS_Float   vx ;
        DDS_Float   vy ;
        DDS_Float   vz ;
        DDS_Float   v ;
        DDS_Float   vtheta ;
        DDS_Float   ax ;
        DDS_Float   ay ;
        DDS_Float   az ;
        DDS_Float   atheta ;
        DDS_Float   curv ;
        DDS_Float   vcurv ;
        DDS_Float   s ;
        DDS_Float   s_dot ;
        DDS_Float   s_ddot ;
        DDS_Float   d ;
        DDS_Float   d_dot ;
        DDS_Float   d_ddot ;
        DDS_Float   t ;
        DDS_Octet   gear ;
        DDS_Boolean   back ;
        DDS_Short   light_signal ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrajectoryPoint_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrajectoryPoint_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrajectoryPoint_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T TrajectoryPoint
    #define TSeq TrajectoryPointSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T TrajectoryPoint
    #define TSeq TrajectoryPointSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern TrajectoryPoint*
    TrajectoryPoint_create();

    NDDSUSERDllExport extern void
    TrajectoryPoint_delete(TrajectoryPoint* sample);

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_initialize(
        TrajectoryPoint* self);

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_initialize_ex(
        TrajectoryPoint* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_initialize_w_params(
        TrajectoryPoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_finalize(
        TrajectoryPoint* self);

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_finalize_w_return(
        TrajectoryPoint* self);

    NDDSUSERDllExport
    void TrajectoryPoint_finalize_ex(
        TrajectoryPoint* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrajectoryPoint_finalize_w_params(
        TrajectoryPoint* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrajectoryPoint_finalize_optional_members(
        TrajectoryPoint* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrajectoryPoint_copy(
        TrajectoryPoint* dst,
        const TrajectoryPoint* src);

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

#endif /* TrajectoryPoint */

