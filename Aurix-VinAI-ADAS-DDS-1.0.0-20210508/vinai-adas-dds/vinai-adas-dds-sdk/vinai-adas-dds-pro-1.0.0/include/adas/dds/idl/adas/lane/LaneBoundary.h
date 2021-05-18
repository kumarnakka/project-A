

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundary.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneBoundary_2027416843_h
#define LaneBoundary_2027416843_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "LineHeader.h"
namespace adas_dds {

    extern const char *LaneBoundaryTYPENAME;

    struct LaneBoundarySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundaryTypeSupport;
    class LaneBoundaryDataWriter;
    class LaneBoundaryDataReader;
    #endif
    class LaneBoundary 
    {
      public:
        typedef struct LaneBoundarySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundaryTypeSupport TypeSupport;
        typedef LaneBoundaryDataWriter DataWriter;
        typedef LaneBoundaryDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LineHeader   line_header ;
        DDS_Float   c0 ;
        DDS_Float   c0_std ;
        DDS_Char   quality ;
        DDS_Float   c1 ;
        DDS_Float   c1_std ;
        DDS_Float   c2 ;
        DDS_Float   c2_std ;
        DDS_Float   c3 ;
        DDS_Float   c3_std ;
        DDS_Float   x_start ;
        DDS_Float   x_end ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundary_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundary_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundary_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundary_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneBoundarySeq, LaneBoundary);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize(
        LaneBoundary* self);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize_ex(
        LaneBoundary* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundary_initialize_w_params(
        LaneBoundary* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundary_finalize_w_return(
        LaneBoundary* self);

    NDDSUSERDllExport
    void LaneBoundary_finalize(
        LaneBoundary* self);

    NDDSUSERDllExport
    void LaneBoundary_finalize_ex(
        LaneBoundary* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundary_finalize_w_params(
        LaneBoundary* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundary_finalize_optional_members(
        LaneBoundary* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundary_copy(
        LaneBoundary* dst,
        const LaneBoundary* src);

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
        struct type_code<adas_dds::LaneBoundary> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneBoundary */

