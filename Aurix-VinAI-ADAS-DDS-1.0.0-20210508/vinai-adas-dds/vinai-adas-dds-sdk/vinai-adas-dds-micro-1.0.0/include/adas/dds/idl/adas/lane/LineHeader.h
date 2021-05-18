/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LineHeader.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef LineHeader_624670600_h
#define LineHeader_624670600_h

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

    extern const char *LineHeaderTYPENAME;

    struct LineHeaderSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LineHeaderTypeSupport;
    class LineHeaderDataWriter;
    class LineHeaderDataReader;
    #endif
    class LineHeader 
    {
      public:
        typedef struct LineHeaderSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LineHeaderTypeSupport TypeSupport;
        typedef LineHeaderDataWriter DataWriter;
        typedef LineHeaderDataReader DataReader;
        #endif

        DDS_Char   sensor_type ;
        DDS_Char   line_id ;
        DDS_Boolean   line_predicted ;
        DDS_Float   confidence ;
        DDS_Char   line_type ;
        DDS_Float   mark_width ;
        DDS_Float   mark_width_std ;
        DDS_Char   mark_color ;
        DDS_Char   line_crossing ;
        DDS_Char   line_decel_type ;
        DDS_Char   line_dlm_type ;
        DDS_Char   prediction_source ;
        DDS_Float   lane_speed_limit ;
        DDS_Float   lane_width ;
        DDS_Float   dash_average_length ;
        DDS_Float   dash_average_gap ;
        DDS_Float   road_edge_height ;
        DDS_Float   road_edge_height_std ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LineHeader_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LineHeader_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LineHeader_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T LineHeader
    #define TSeq LineHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T LineHeader
    #define TSeq LineHeaderSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern LineHeader*
    LineHeader_create();

    NDDSUSERDllExport extern void
    LineHeader_delete(LineHeader* sample);

    NDDSUSERDllExport
    RTIBool LineHeader_initialize(
        LineHeader* self);

    NDDSUSERDllExport
    RTIBool LineHeader_initialize_ex(
        LineHeader* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LineHeader_initialize_w_params(
        LineHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LineHeader_finalize(
        LineHeader* self);

    NDDSUSERDllExport
    RTIBool LineHeader_finalize_w_return(
        LineHeader* self);

    NDDSUSERDllExport
    void LineHeader_finalize_ex(
        LineHeader* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LineHeader_finalize_w_params(
        LineHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LineHeader_finalize_optional_members(
        LineHeader* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LineHeader_copy(
        LineHeader* dst,
        const LineHeader* src);

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

#endif /* LineHeader */

