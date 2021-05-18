

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Twist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Twist_1833241619_h
#define Twist_1833241619_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../common/Vector3f.h"
namespace adas_dds {

    extern const char *TwistTYPENAME;

    struct TwistSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class TwistTypeSupport;
    class TwistDataWriter;
    class TwistDataReader;
    #endif
    class Twist 
    {
      public:
        typedef struct TwistSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef TwistTypeSupport TypeSupport;
        typedef TwistDataWriter DataWriter;
        typedef TwistDataReader DataReader;
        #endif

        adas_dds::Vector3f   linear ;
        adas_dds::Vector3f   angular ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Twist_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Twist_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Twist_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Twist_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TwistSeq, Twist);

    NDDSUSERDllExport
    RTIBool Twist_initialize(
        Twist* self);

    NDDSUSERDllExport
    RTIBool Twist_initialize_ex(
        Twist* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Twist_initialize_w_params(
        Twist* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Twist_finalize_w_return(
        Twist* self);

    NDDSUSERDllExport
    void Twist_finalize(
        Twist* self);

    NDDSUSERDllExport
    void Twist_finalize_ex(
        Twist* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Twist_finalize_w_params(
        Twist* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Twist_finalize_optional_members(
        Twist* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Twist_copy(
        Twist* dst,
        const Twist* src);

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
        struct type_code<adas_dds::Twist> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Twist */

