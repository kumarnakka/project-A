

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cone.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Cone_518174558_h
#define Cone_518174558_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "../control/Twist.h"
namespace adas_dds {

    extern const char *ConeTYPENAME;

    struct ConeSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ConeTypeSupport;
    class ConeDataWriter;
    class ConeDataReader;
    #endif
    class Cone 
    {
      public:
        typedef struct ConeSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ConeTypeSupport TypeSupport;
        typedef ConeDataWriter DataWriter;
        typedef ConeDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   pos ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Cone_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Cone_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Cone_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Cone_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConeSeq, Cone);

    NDDSUSERDllExport
    RTIBool Cone_initialize(
        Cone* self);

    NDDSUSERDllExport
    RTIBool Cone_initialize_ex(
        Cone* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Cone_initialize_w_params(
        Cone* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Cone_finalize_w_return(
        Cone* self);

    NDDSUSERDllExport
    void Cone_finalize(
        Cone* self);

    NDDSUSERDllExport
    void Cone_finalize_ex(
        Cone* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Cone_finalize_w_params(
        Cone* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Cone_finalize_optional_members(
        Cone* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Cone_copy(
        Cone* dst,
        const Cone* src);

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
        struct type_code<adas_dds::Cone> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Cone */

