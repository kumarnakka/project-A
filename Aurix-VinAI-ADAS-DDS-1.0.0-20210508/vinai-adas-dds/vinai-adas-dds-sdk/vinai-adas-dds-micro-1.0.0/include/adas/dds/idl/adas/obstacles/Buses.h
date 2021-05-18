/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Buses.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Buses_700400844_h
#define Buses_700400844_h

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

#include "Bus.h"

namespace adas_dds {

    extern const char *BusesTYPENAME;

    struct BusesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BusesTypeSupport;
    class BusesDataWriter;
    class BusesDataReader;
    #endif
    class Buses 
    {
      public:
        typedef struct BusesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BusesTypeSupport TypeSupport;
        typedef BusesDataWriter DataWriter;
        typedef BusesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::BusSeq  bus_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Buses_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Buses_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Buses_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Buses
    #define TSeq BusesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Buses
    #define TSeq BusesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Buses*
    Buses_create();

    NDDSUSERDllExport extern void
    Buses_delete(Buses* sample);

    NDDSUSERDllExport
    RTIBool Buses_initialize(
        Buses* self);

    NDDSUSERDllExport
    RTIBool Buses_initialize_ex(
        Buses* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Buses_initialize_w_params(
        Buses* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Buses_finalize(
        Buses* self);

    NDDSUSERDllExport
    RTIBool Buses_finalize_w_return(
        Buses* self);

    NDDSUSERDllExport
    void Buses_finalize_ex(
        Buses* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Buses_finalize_w_params(
        Buses* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Buses_finalize_optional_members(
        Buses* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Buses_copy(
        Buses* dst,
        const Buses* src);

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

#endif /* Buses */

