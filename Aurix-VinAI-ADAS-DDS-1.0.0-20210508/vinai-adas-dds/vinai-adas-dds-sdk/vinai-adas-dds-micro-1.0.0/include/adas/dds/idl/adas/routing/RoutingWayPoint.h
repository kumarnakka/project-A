/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RoutingWayPoint.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef RoutingWayPoint_1643201544_h
#define RoutingWayPoint_1643201544_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T RoutingWayPoint
    #define TSeq RoutingWayPointSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T RoutingWayPoint
    #define TSeq RoutingWayPointSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern RoutingWayPoint*
    RoutingWayPoint_create();

    NDDSUSERDllExport extern void
    RoutingWayPoint_delete(RoutingWayPoint* sample);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize(
        RoutingWayPoint* self);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize_ex(
        RoutingWayPoint* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_initialize_w_params(
        RoutingWayPoint* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_finalize(
        RoutingWayPoint* self);

    NDDSUSERDllExport
    RTIBool RoutingWayPoint_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RoutingWayPoint */

