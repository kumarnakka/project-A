

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacle2D.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Obstacle2D_548527705_h
#define Obstacle2D_548527705_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        DDS_Char *   name ;
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacle2D_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Obstacle2DSeq, Obstacle2D);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize(
        Obstacle2D* self);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize_ex(
        Obstacle2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacle2D_initialize_w_params(
        Obstacle2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacle2D_finalize_w_return(
        Obstacle2D* self);

    NDDSUSERDllExport
    void Obstacle2D_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Obstacle2D> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Obstacle2D */

