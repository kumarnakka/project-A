/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trucks.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Trucks_628715267_h
#define Trucks_628715267_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Truck.h"

namespace adas_dds {

    extern const char *TrucksTYPENAME;

    struct TrucksSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrucksTypeSupport;
    class TrucksDataWriter;
    class TrucksDataReader;
    #endif
    class Trucks 
    {
      public:
        typedef struct TrucksSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrucksTypeSupport TypeSupport;
        typedef TrucksDataWriter DataWriter;
        typedef TrucksDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::TruckSeq  truck_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Trucks_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Trucks_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Trucks_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Trucks
    #define TSeq TrucksSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Trucks
    #define TSeq TrucksSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Trucks*
    Trucks_create();

    NDDSUSERDllExport extern void
    Trucks_delete(Trucks* sample);

    NDDSUSERDllExport
    RTIBool Trucks_initialize(
        Trucks* self);

    NDDSUSERDllExport
    RTIBool Trucks_initialize_ex(
        Trucks* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Trucks_initialize_w_params(
        Trucks* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Trucks_finalize(
        Trucks* self);

    NDDSUSERDllExport
    RTIBool Trucks_finalize_w_return(
        Trucks* self);

    NDDSUSERDllExport
    void Trucks_finalize_ex(
        Trucks* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Trucks_finalize_w_params(
        Trucks* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Trucks_finalize_optional_members(
        Trucks* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Trucks_copy(
        Trucks* dst,
        const Trucks* src);

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

#endif /* Trucks */

