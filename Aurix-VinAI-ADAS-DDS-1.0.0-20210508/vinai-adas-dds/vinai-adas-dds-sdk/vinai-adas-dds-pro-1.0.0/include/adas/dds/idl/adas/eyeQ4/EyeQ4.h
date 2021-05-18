

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeQ4_2078364379_h
#define EyeQ4_2078364379_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "ObjectsEyeQ4.h"
#include "LanesEyeQ4.h"
#include "TrafficSignsEyeQ4.h"
namespace adas_dds {

    extern const char *EyeQ4TYPENAME;

    struct EyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeQ4TypeSupport;
    class EyeQ4DataWriter;
    class EyeQ4DataReader;
    #endif
    class EyeQ4 
    {
      public:
        typedef struct EyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeQ4TypeSupport TypeSupport;
        typedef EyeQ4DataWriter DataWriter;
        typedef EyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ObjectsEyeQ4   objects ;
        adas_dds::LanesEyeQ4   lanes ;
        adas_dds::TrafficSignsEyeQ4   traffic_signs ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeQ4_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EyeQ4Seq, EyeQ4);

    NDDSUSERDllExport
    RTIBool EyeQ4_initialize(
        EyeQ4* self);

    NDDSUSERDllExport
    RTIBool EyeQ4_initialize_ex(
        EyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeQ4_initialize_w_params(
        EyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeQ4_finalize_w_return(
        EyeQ4* self);

    NDDSUSERDllExport
    void EyeQ4_finalize(
        EyeQ4* self);

    NDDSUSERDllExport
    void EyeQ4_finalize_ex(
        EyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeQ4_finalize_w_params(
        EyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeQ4_finalize_optional_members(
        EyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeQ4_copy(
        EyeQ4* dst,
        const EyeQ4* src);

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
        struct type_code<adas_dds::EyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EyeQ4 */

