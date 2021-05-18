

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundaries.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneBoundaries_1300971979_h
#define LaneBoundaries_1300971979_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "LaneBoundary.h"
namespace adas_dds {

    extern const char *LaneBoundariesTYPENAME;

    struct LaneBoundariesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundariesTypeSupport;
    class LaneBoundariesDataWriter;
    class LaneBoundariesDataReader;
    #endif
    class LaneBoundaries 
    {
      public:
        typedef struct LaneBoundariesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundariesTypeSupport TypeSupport;
        typedef LaneBoundariesDataWriter DataWriter;
        typedef LaneBoundariesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::LaneBoundarySeq  lane_boundary_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundaries_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundaries_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaries_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaries_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneBoundariesSeq, LaneBoundaries);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize(
        LaneBoundaries* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize_ex(
        LaneBoundaries* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundaries_initialize_w_params(
        LaneBoundaries* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundaries_finalize_w_return(
        LaneBoundaries* self);

    NDDSUSERDllExport
    void LaneBoundaries_finalize(
        LaneBoundaries* self);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_ex(
        LaneBoundaries* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_w_params(
        LaneBoundaries* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundaries_finalize_optional_members(
        LaneBoundaries* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundaries_copy(
        LaneBoundaries* dst,
        const LaneBoundaries* src);

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
        struct type_code<adas_dds::LaneBoundaries> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneBoundaries */

