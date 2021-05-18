/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NovatelPosition.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef NovatelPosition_179395595_h
#define NovatelPosition_179395595_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Position
    #define TSeq PositionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Position
    #define TSeq PositionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Position*
    Position_create();

    NDDSUSERDllExport extern void
    Position_delete(Position* sample);

    NDDSUSERDllExport
    RTIBool Position_initialize(
        Position* self);

    NDDSUSERDllExport
    RTIBool Position_initialize_ex(
        Position* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Position_initialize_w_params(
        Position* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Position_finalize(
        Position* self);

    NDDSUSERDllExport
    RTIBool Position_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NovatelPosition */

