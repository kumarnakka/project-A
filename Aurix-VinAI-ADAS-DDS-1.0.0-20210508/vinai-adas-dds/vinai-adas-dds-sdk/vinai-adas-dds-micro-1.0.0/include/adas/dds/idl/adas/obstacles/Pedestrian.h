/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pedestrian.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Pedestrian_83966814_h
#define Pedestrian_83966814_h

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

#include "../../ros_ported/std/Header.h"

namespace adas_dds {

    extern const char *PedestrianTYPENAME;

    struct PedestrianSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PedestrianTypeSupport;
    class PedestrianDataWriter;
    class PedestrianDataReader;
    #endif
    class Pedestrian 
    {
      public:
        typedef struct PedestrianSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PedestrianTypeSupport TypeSupport;
        typedef PedestrianDataWriter DataWriter;
        typedef PedestrianDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   pos ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pedestrian_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pedestrian_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pedestrian_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Pedestrian
    #define TSeq PedestrianSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Pedestrian
    #define TSeq PedestrianSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Pedestrian*
    Pedestrian_create();

    NDDSUSERDllExport extern void
    Pedestrian_delete(Pedestrian* sample);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize(
        Pedestrian* self);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize_ex(
        Pedestrian* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize_w_params(
        Pedestrian* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pedestrian_finalize(
        Pedestrian* self);

    NDDSUSERDllExport
    RTIBool Pedestrian_finalize_w_return(
        Pedestrian* self);

    NDDSUSERDllExport
    void Pedestrian_finalize_ex(
        Pedestrian* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pedestrian_finalize_w_params(
        Pedestrian* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pedestrian_finalize_optional_members(
        Pedestrian* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pedestrian_copy(
        Pedestrian* dst,
        const Pedestrian* src);

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

#endif /* Pedestrian */

