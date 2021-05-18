/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bikes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Bikes_1543549353_h
#define Bikes_1543549353_h

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

#include "Bike.h"

namespace adas_dds {

    extern const char *BikesTYPENAME;

    struct BikesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BikesTypeSupport;
    class BikesDataWriter;
    class BikesDataReader;
    #endif
    class Bikes 
    {
      public:
        typedef struct BikesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BikesTypeSupport TypeSupport;
        typedef BikesDataWriter DataWriter;
        typedef BikesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::BikeSeq  bike_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Bikes_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Bikes_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bikes_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Bikes
    #define TSeq BikesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Bikes
    #define TSeq BikesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Bikes*
    Bikes_create();

    NDDSUSERDllExport extern void
    Bikes_delete(Bikes* sample);

    NDDSUSERDllExport
    RTIBool Bikes_initialize(
        Bikes* self);

    NDDSUSERDllExport
    RTIBool Bikes_initialize_ex(
        Bikes* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bikes_initialize_w_params(
        Bikes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bikes_finalize(
        Bikes* self);

    NDDSUSERDllExport
    RTIBool Bikes_finalize_w_return(
        Bikes* self);

    NDDSUSERDllExport
    void Bikes_finalize_ex(
        Bikes* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Bikes_finalize_w_params(
        Bikes* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Bikes_finalize_optional_members(
        Bikes* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Bikes_copy(
        Bikes* dst,
        const Bikes* src);

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

#endif /* Bikes */

