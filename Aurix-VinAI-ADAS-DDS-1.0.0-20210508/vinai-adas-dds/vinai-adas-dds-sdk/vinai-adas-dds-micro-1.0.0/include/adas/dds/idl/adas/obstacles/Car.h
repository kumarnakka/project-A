/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Car.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Car_2077979497_h
#define Car_2077979497_h

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

    extern const char *CarTYPENAME;

    struct CarSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CarTypeSupport;
    class CarDataWriter;
    class CarDataReader;
    #endif
    class Car 
    {
      public:
        typedef struct CarSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CarTypeSupport TypeSupport;
        typedef CarDataWriter DataWriter;
        typedef CarDataReader DataReader;
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
    NDDSUSERDllExport DDS_TypeCode* Car_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Car_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Car_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Car
    #define TSeq CarSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Car
    #define TSeq CarSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Car*
    Car_create();

    NDDSUSERDllExport extern void
    Car_delete(Car* sample);

    NDDSUSERDllExport
    RTIBool Car_initialize(
        Car* self);

    NDDSUSERDllExport
    RTIBool Car_initialize_ex(
        Car* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Car_initialize_w_params(
        Car* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Car_finalize(
        Car* self);

    NDDSUSERDllExport
    RTIBool Car_finalize_w_return(
        Car* self);

    NDDSUSERDllExport
    void Car_finalize_ex(
        Car* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Car_finalize_w_params(
        Car* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Car_finalize_optional_members(
        Car* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Car_copy(
        Car* dst,
        const Car* src);

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

#endif /* Car */

