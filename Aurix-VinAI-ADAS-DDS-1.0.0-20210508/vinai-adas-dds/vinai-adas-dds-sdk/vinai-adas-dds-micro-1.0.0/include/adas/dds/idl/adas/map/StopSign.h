/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StopSign.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef StopSign_698756267_h
#define StopSign_698756267_h

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

#include "../../ros_ported/geometry/Pose.h"

#include "../common/Point3.h"

#include "../common/Vector3f.h"

namespace adas_dds {

    extern const char *StopSignTYPENAME;

    struct StopSignSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class StopSignTypeSupport;
    class StopSignDataWriter;
    class StopSignDataReader;
    #endif
    class StopSign 
    {
      public:
        typedef struct StopSignSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef StopSignTypeSupport TypeSupport;
        typedef StopSignDataWriter DataWriter;
        typedef StopSignDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Boolean   run ;
        DDS_Boolean   is_detected ;
        DDS_Char   stop_type ;
        adas_dds::Point3Seq  raw_data ;
        adas_dds::geometry_msgs::Pose   m_pose ;
        adas_dds::Vector3fSeq  stop_line ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* StopSign_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StopSign_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StopSign_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T StopSign
    #define TSeq StopSignSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T StopSign
    #define TSeq StopSignSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern StopSign*
    StopSign_create();

    NDDSUSERDllExport extern void
    StopSign_delete(StopSign* sample);

    NDDSUSERDllExport
    RTIBool StopSign_initialize(
        StopSign* self);

    NDDSUSERDllExport
    RTIBool StopSign_initialize_ex(
        StopSign* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StopSign_initialize_w_params(
        StopSign* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StopSign_finalize(
        StopSign* self);

    NDDSUSERDllExport
    RTIBool StopSign_finalize_w_return(
        StopSign* self);

    NDDSUSERDllExport
    void StopSign_finalize_ex(
        StopSign* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StopSign_finalize_w_params(
        StopSign* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StopSign_finalize_optional_members(
        StopSign* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StopSign_copy(
        StopSign* dst,
        const StopSign* src);

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

#endif /* StopSign */

