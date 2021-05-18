

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Obstacles_2119945930_h
#define Obstacles_2119945930_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Obstacle.h"
namespace adas_dds {

    extern const char *ObstaclesTYPENAME;

    struct ObstaclesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObstaclesTypeSupport;
    class ObstaclesDataWriter;
    class ObstaclesDataReader;
    #endif
    class Obstacles 
    {
      public:
        typedef struct ObstaclesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObstaclesTypeSupport TypeSupport;
        typedef ObstaclesDataWriter DataWriter;
        typedef ObstaclesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Char   sensor_type ;
        DDS_Octet   sensor_type_valid ;
        DDS_Char   sensor_loc ;
        DDS_Octet   sensor_loc_valid ;
        adas_dds::ObstacleSeq  obstacle_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Obstacles_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Obstacles_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacles_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacles_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObstaclesSeq, Obstacles);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize(
        Obstacles* self);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize_ex(
        Obstacles* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize_w_params(
        Obstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacles_finalize_w_return(
        Obstacles* self);

    NDDSUSERDllExport
    void Obstacles_finalize(
        Obstacles* self);

    NDDSUSERDllExport
    void Obstacles_finalize_ex(
        Obstacles* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Obstacles_finalize_w_params(
        Obstacles* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Obstacles_finalize_optional_members(
        Obstacles* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Obstacles_copy(
        Obstacles* dst,
        const Obstacles* src);

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
        struct type_code<adas_dds::Obstacles> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Obstacles */

