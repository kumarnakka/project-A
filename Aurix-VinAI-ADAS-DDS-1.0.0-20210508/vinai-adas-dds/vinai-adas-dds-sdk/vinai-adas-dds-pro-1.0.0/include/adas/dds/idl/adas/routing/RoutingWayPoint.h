

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RoutingWayPoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RoutingWayPoint_1643201544_h
#define RoutingWayPoint_1643201544_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *RoutingWayPointTYPENAME;

    struct RoutingWayPointSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class RoutingWayPointTypeSupport;
    class RoutingWayPointDataWriter;
    class RoutingWayPointDataReader;
    #endif
    class RoutingWayPoint 
    {
      public:
        typedef struct RoutingWayPointSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef RoutingWayPointTypeSupport TypeSupport;
        typedef RoutingWayPointDataWriter DataWriter;
        typedef RoutingWayPointDataReader DataReader;
        #endif

        DDS_Long   wp_id ;
        DDS_Char   wp_type ;
        DDS_Char   turn_sig ;
        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   prediction_window ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* RoutingWayPoint_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *RoutingWayPoint_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RoutingWayPoint_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RoutingWayPoint_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(RoutingWayPointSeq, RoutingWayPoint);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize(
        RoutingWayPoint* self);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize_ex(
        RoutingWayPoint* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize_w_params(
        RoutingWayPoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_finalize_w_return(
        RoutingWayPoint* self);

    NDDSUSERDllExport
    void RoutingWayPoint_finalize(
        RoutingWayPoint* self);

    NDDSUSERDllExport
    void RoutingWayPoint_finalize_ex(
        RoutingWayPoint* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void RoutingWayPoint_finalize_w_params(
        RoutingWayPoint* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void RoutingWayPoint_finalize_optional_members(
        RoutingWayPoint* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_copy(
        RoutingWayPoint* dst,
        const RoutingWayPoint* src);

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
        struct type_code<adas_dds::RoutingWayPoint> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RoutingWayPoint */

