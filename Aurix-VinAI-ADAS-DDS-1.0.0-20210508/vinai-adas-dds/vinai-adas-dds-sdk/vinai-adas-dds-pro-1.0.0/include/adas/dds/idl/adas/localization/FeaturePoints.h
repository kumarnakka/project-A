

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeaturePoints.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FeaturePoints_1646235536_h
#define FeaturePoints_1646235536_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "FeaturePoint.h"
namespace adas_dds {

    extern const char *FeaturePointsTYPENAME;

    struct FeaturePointsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class FeaturePointsTypeSupport;
    class FeaturePointsDataWriter;
    class FeaturePointsDataReader;
    #endif
    class FeaturePoints 
    {
      public:
        typedef struct FeaturePointsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef FeaturePointsTypeSupport TypeSupport;
        typedef FeaturePointsDataWriter DataWriter;
        typedef FeaturePointsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::FeaturePointSeq  features ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* FeaturePoints_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FeaturePoints_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FeaturePoints_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FeaturePoints_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(FeaturePointsSeq, FeaturePoints);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize(
        FeaturePoints* self);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize_ex(
        FeaturePoints* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FeaturePoints_initialize_w_params(
        FeaturePoints* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FeaturePoints_finalize_w_return(
        FeaturePoints* self);

    NDDSUSERDllExport
    void FeaturePoints_finalize(
        FeaturePoints* self);

    NDDSUSERDllExport
    void FeaturePoints_finalize_ex(
        FeaturePoints* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FeaturePoints_finalize_w_params(
        FeaturePoints* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FeaturePoints_finalize_optional_members(
        FeaturePoints* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FeaturePoints_copy(
        FeaturePoints* dst,
        const FeaturePoints* src);

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
        struct type_code<adas_dds::FeaturePoints> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FeaturePoints */

