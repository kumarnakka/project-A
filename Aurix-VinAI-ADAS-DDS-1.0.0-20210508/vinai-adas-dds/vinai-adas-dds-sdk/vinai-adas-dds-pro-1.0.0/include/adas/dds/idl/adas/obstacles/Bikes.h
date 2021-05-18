

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bikes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Bikes_1543549353_h
#define Bikes_1543549353_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bikes_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BikesSeq, Bikes);

    NDDSUSERDllExport
    RTIBool Bikes_initialize(
        Bikes* self);

    NDDSUSERDllExport
    RTIBool Bikes_initialize_ex(
        Bikes* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bikes_initialize_w_params(
        Bikes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bikes_finalize_w_return(
        Bikes* self);

    NDDSUSERDllExport
    void Bikes_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Bikes> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Bikes */

