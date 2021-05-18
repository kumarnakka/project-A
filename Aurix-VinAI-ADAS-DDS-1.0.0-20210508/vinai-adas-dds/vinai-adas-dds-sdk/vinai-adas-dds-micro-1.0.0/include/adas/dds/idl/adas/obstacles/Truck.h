/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Truck.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Truck_992111718_h
#define Truck_992111718_h

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

    extern const char *TruckTYPENAME;

    struct TruckSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TruckTypeSupport;
    class TruckDataWriter;
    class TruckDataReader;
    #endif
    class Truck 
    {
      public:
        typedef struct TruckSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TruckTypeSupport TypeSupport;
        typedef TruckDataWriter DataWriter;
        typedef TruckDataReader DataReader;
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
    NDDSUSERDllExport DDS_TypeCode* Truck_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Truck_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Truck_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Truck
    #define TSeq TruckSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Truck
    #define TSeq TruckSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Truck*
    Truck_create();

    NDDSUSERDllExport extern void
    Truck_delete(Truck* sample);

    NDDSUSERDllExport
    RTIBool Truck_initialize(
        Truck* self);

    NDDSUSERDllExport
    RTIBool Truck_initialize_ex(
        Truck* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Truck_initialize_w_params(
        Truck* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Truck_finalize(
        Truck* self);

    NDDSUSERDllExport
    RTIBool Truck_finalize_w_return(
        Truck* self);

    NDDSUSERDllExport
    void Truck_finalize_ex(
        Truck* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Truck_finalize_w_params(
        Truck* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Truck_finalize_optional_members(
        Truck* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Truck_copy(
        Truck* dst,
        const Truck* src);

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

#endif /* Truck */

