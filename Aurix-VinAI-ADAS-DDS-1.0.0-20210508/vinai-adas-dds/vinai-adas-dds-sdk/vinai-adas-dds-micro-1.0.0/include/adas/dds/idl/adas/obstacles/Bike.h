/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bike.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Bike_918040616_h
#define Bike_918040616_h

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

#include "../control/Twist.h"

namespace adas_dds {

    extern const char *BikeTYPENAME;

    struct BikeSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BikeTypeSupport;
    class BikeDataWriter;
    class BikeDataReader;
    #endif
    class Bike 
    {
      public:
        typedef struct BikeSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BikeTypeSupport TypeSupport;
        typedef BikeDataWriter DataWriter;
        typedef BikeDataReader DataReader;
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
    NDDSUSERDllExport DDS_TypeCode* Bike_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Bike_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bike_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Bike
    #define TSeq BikeSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Bike
    #define TSeq BikeSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Bike*
    Bike_create();

    NDDSUSERDllExport extern void
    Bike_delete(Bike* sample);

    NDDSUSERDllExport
    RTIBool Bike_initialize(
        Bike* self);

    NDDSUSERDllExport
    RTIBool Bike_initialize_ex(
        Bike* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bike_initialize_w_params(
        Bike* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bike_finalize(
        Bike* self);

    NDDSUSERDllExport
    RTIBool Bike_finalize_w_return(
        Bike* self);

    NDDSUSERDllExport
    void Bike_finalize_ex(
        Bike* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Bike_finalize_w_params(
        Bike* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Bike_finalize_optional_members(
        Bike* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Bike_copy(
        Bike* dst,
        const Bike* src);

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

#endif /* Bike */

