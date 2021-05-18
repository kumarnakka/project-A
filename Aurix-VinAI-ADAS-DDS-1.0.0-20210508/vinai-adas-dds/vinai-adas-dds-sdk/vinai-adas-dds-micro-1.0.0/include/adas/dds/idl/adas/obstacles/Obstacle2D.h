/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacle2D.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Obstacle2D_548527705_h
#define Obstacle2D_548527705_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../control/Twist.h"

#include "../../ros_ported/geometry/Polygon.h"

#include "../control/Trajectory.h"

namespace adas_dds {

    extern const char *Obstacle2DTYPENAME;

    struct Obstacle2DSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Obstacle2DTypeSupport;
    class Obstacle2DDataWriter;
    class Obstacle2DDataReader;
    #endif
    class Obstacle2D 
    {
      public:
        typedef struct Obstacle2DSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Obstacle2DTypeSupport TypeSupport;
        typedef Obstacle2DDataWriter DataWriter;
        typedef Obstacle2DDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   g_pos ;
        adas_dds::Twist   g_vel ;
        adas_dds::Twist   g_acc ;
        adas_dds::Twist   b_pos ;
        adas_dds::Twist   b_vel ;
        adas_dds::Twist   b_acc ;
        adas_dds::Trajectory   trajectory ;
        DDS_Boolean   visible ;
        DDS_Boolean   mesh ;
        DDS_Float   height ;
        DDS_Float   relative_speed ;
        DDS_Float   relative_s_distance ;
        DDS_Float   relative_l_distance ;
        DDS_String   name ;
        adas_dds::geometry_msgs::Polygon   poly_loc ;
        adas_dds::geometry_msgs::Polygon   poly_loc_safe ;
        DDS_Short   type ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Obstacle2D_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Obstacle2D_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacle2D_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Obstacle2D
    #define TSeq Obstacle2DSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Obstacle2D
    #define TSeq Obstacle2DSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Obstacle2D*
    Obstacle2D_create();

    NDDSUSERDllExport extern void
    Obstacle2D_delete(Obstacle2D* sample);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize(
        Obstacle2D* self);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize_ex(
        Obstacle2D* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize_w_params(
        Obstacle2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacle2D_finalize(
        Obstacle2D* self);

    NDDSUSERDllExport
    RTIBool Obstacle2D_finalize_w_return(
        Obstacle2D* self);

    NDDSUSERDllExport
    void Obstacle2D_finalize_ex(
        Obstacle2D* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Obstacle2D_finalize_w_params(
        Obstacle2D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Obstacle2D_finalize_optional_members(
        Obstacle2D* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Obstacle2D_copy(
        Obstacle2D* dst,
        const Obstacle2D* src);

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

#endif /* Obstacle2D */

