

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryCoeff.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoryCoeff_1628335687_h
#define TrajectoryCoeff_1628335687_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *TrajectoryCoeffTYPENAME;

    struct TrajectoryCoeffSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TrajectoryCoeffTypeSupport;
    class TrajectoryCoeffDataWriter;
    class TrajectoryCoeffDataReader;
    #endif
    class TrajectoryCoeff 
    {
      public:
        typedef struct TrajectoryCoeffSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TrajectoryCoeffTypeSupport TypeSupport;
        typedef TrajectoryCoeffDataWriter DataWriter;
        typedef TrajectoryCoeffDataReader DataReader;
        #endif

        DDS_Float   a0 ;
        DDS_Float   a1 ;
        DDS_Float   a2 ;
        DDS_Float   a3 ;
        DDS_Float   vec [4];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* TrajectoryCoeff_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TrajectoryCoeff_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrajectoryCoeff_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TrajectoryCoeff_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TrajectoryCoeffSeq, TrajectoryCoeff);

    NDDSUSERDllExport
    RTIBool TrajectoryCoeff_initialize(
        TrajectoryCoeff* self);

    NDDSUSERDllExport
    RTIBool TrajectoryCoeff_initialize_ex(
        TrajectoryCoeff* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TrajectoryCoeff_initialize_w_params(
        TrajectoryCoeff* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TrajectoryCoeff_finalize_w_return(
        TrajectoryCoeff* self);

    NDDSUSERDllExport
    void TrajectoryCoeff_finalize(
        TrajectoryCoeff* self);

    NDDSUSERDllExport
    void TrajectoryCoeff_finalize_ex(
        TrajectoryCoeff* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TrajectoryCoeff_finalize_w_params(
        TrajectoryCoeff* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TrajectoryCoeff_finalize_optional_members(
        TrajectoryCoeff* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TrajectoryCoeff_copy(
        TrajectoryCoeff* dst,
        const TrajectoryCoeff* src);

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
        struct type_code<adas_dds::TrajectoryCoeff> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TrajectoryCoeff */

