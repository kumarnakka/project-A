

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContiRadarObjects.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ContiRadarObjects_1363923924_h
#define ContiRadarObjects_1363923924_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "ContiRadarObject.h"
namespace adas_dds {

    extern const char *ContiRadarObjectsTYPENAME;

    struct ContiRadarObjectsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ContiRadarObjectsTypeSupport;
    class ContiRadarObjectsDataWriter;
    class ContiRadarObjectsDataReader;
    #endif
    class ContiRadarObjects 
    {
      public:
        typedef struct ContiRadarObjectsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ContiRadarObjectsTypeSupport TypeSupport;
        typedef ContiRadarObjectsDataWriter DataWriter;
        typedef ContiRadarObjectsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ContiRadarObjectSeq  object_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ContiRadarObjects_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ContiRadarObjects_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ContiRadarObjects_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ContiRadarObjects_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ContiRadarObjectsSeq, ContiRadarObjects);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize_ex(
        ContiRadarObjects* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_initialize_w_params(
        ContiRadarObjects* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_finalize_w_return(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize(
        ContiRadarObjects* self);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_ex(
        ContiRadarObjects* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_w_params(
        ContiRadarObjects* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ContiRadarObjects_finalize_optional_members(
        ContiRadarObjects* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ContiRadarObjects_copy(
        ContiRadarObjects* dst,
        const ContiRadarObjects* src);

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
        struct type_code<adas_dds::ContiRadarObjects> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContiRadarObjects */

