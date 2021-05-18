

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Buses.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Buses_700400844_h
#define Buses_700400844_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Buses_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BusesSeq, Buses);

    NDDSUSERDllExport
    RTIBool Buses_initialize(
        Buses* self);

    NDDSUSERDllExport
    RTIBool Buses_initialize_ex(
        Buses* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Buses_initialize_w_params(
        Buses* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Buses_finalize_w_return(
        Buses* self);

    NDDSUSERDllExport
    void Buses_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Buses> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Buses */

