

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelPosition.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NovatelPosition_179395595_h
#define NovatelPosition_179395595_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *PositionTYPENAME;

    struct PositionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PositionTypeSupport;
    class PositionDataWriter;
    class PositionDataReader;
    #endif
    class Position 
    {
      public:
        typedef struct PositionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PositionTypeSupport TypeSupport;
        typedef PositionDataWriter DataWriter;
        typedef PositionDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_UnsignedLong   datum ;
        DDS_UnsignedLong   pos_status ;
        DDS_Double   latitude ;
        DDS_Double   longitude ;
        DDS_Double   altitude ;
        DDS_Double   latitude_std ;
        DDS_Double   longitude_std ;
        DDS_Double   altitude_std ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Position_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Position_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Position_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Position_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PositionSeq, Position);

    NDDSUSERDllExport
    RTIBool Position_initialize(
        Position* self);

    NDDSUSERDllExport
    RTIBool Position_initialize_ex(
        Position* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Position_initialize_w_params(
        Position* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Position_finalize_w_return(
        Position* self);

    NDDSUSERDllExport
    void Position_finalize(
        Position* self);

    NDDSUSERDllExport
    void Position_finalize_ex(
        Position* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Position_finalize_w_params(
        Position* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Position_finalize_optional_members(
        Position* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Position_copy(
        Position* dst,
        const Position* src);

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
        struct type_code<adas_dds::Position> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NovatelPosition */

