

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose2Array.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pose2Array_200341937_h
#define Pose2Array_200341937_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Pose2.h"
namespace adas_dds {

    extern const char *Pose2ArrayTYPENAME;

    struct Pose2ArraySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Pose2ArrayTypeSupport;
    class Pose2ArrayDataWriter;
    class Pose2ArrayDataReader;
    #endif
    class Pose2Array 
    {
      public:
        typedef struct Pose2ArraySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Pose2ArrayTypeSupport TypeSupport;
        typedef Pose2ArrayDataWriter DataWriter;
        typedef Pose2ArrayDataReader DataReader;
        #endif

        adas_dds::Pose2Seq  poses ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pose2Array_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pose2Array_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose2Array_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pose2Array_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Pose2ArraySeq, Pose2Array);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize(
        Pose2Array* self);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize_ex(
        Pose2Array* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pose2Array_initialize_w_params(
        Pose2Array* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pose2Array_finalize_w_return(
        Pose2Array* self);

    NDDSUSERDllExport
    void Pose2Array_finalize(
        Pose2Array* self);

    NDDSUSERDllExport
    void Pose2Array_finalize_ex(
        Pose2Array* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pose2Array_finalize_w_params(
        Pose2Array* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pose2Array_finalize_optional_members(
        Pose2Array* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pose2Array_copy(
        Pose2Array* dst,
        const Pose2Array* src);

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
        struct type_code<adas_dds::Pose2Array> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Pose2Array */

