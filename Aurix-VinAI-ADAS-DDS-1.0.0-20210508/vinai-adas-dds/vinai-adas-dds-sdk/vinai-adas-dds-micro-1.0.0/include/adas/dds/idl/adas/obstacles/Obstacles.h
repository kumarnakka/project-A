/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Obstacles_2119945930_h
#define Obstacles_2119945930_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Obstacles
    #define TSeq ObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Obstacles
    #define TSeq ObstaclesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Obstacles*
    Obstacles_create();

    NDDSUSERDllExport extern void
    Obstacles_delete(Obstacles* sample);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize(
        Obstacles* self);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize_ex(
        Obstacles* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacles_initialize_w_params(
        Obstacles* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacles_finalize(
        Obstacles* self);

    NDDSUSERDllExport
    RTIBool Obstacles_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Obstacles */

