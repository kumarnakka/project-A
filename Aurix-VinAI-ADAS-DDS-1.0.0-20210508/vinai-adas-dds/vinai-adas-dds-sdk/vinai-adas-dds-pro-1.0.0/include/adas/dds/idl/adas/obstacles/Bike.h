

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bike.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Bike_918040616_h
#define Bike_918040616_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bike_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BikeSeq, Bike);

    NDDSUSERDllExport
    RTIBool Bike_initialize(
        Bike* self);

    NDDSUSERDllExport
    RTIBool Bike_initialize_ex(
        Bike* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bike_initialize_w_params(
        Bike* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bike_finalize_w_return(
        Bike* self);

    NDDSUSERDllExport
    void Bike_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Bike> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Bike */

