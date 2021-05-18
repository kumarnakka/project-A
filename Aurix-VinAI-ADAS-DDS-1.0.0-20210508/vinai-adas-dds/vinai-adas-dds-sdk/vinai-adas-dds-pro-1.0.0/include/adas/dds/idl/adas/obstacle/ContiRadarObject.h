

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContiRadarObject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ContiRadarObject_877280740_h
#define ContiRadarObject_877280740_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *ContiRadarObjectTYPENAME;

    struct ContiRadarObjectSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ContiRadarObjectTypeSupport;
    class ContiRadarObjectDataWriter;
    class ContiRadarObjectDataReader;
    #endif
    class ContiRadarObject 
    {
      public:
        typedef struct ContiRadarObjectSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ContiRadarObjectTypeSupport TypeSupport;
        typedef ContiRadarObjectDataWriter DataWriter;
        typedef ContiRadarObjectDataReader DataReader;
        #endif

        DDS_Octet   object [8];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ContiRadarObject_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ContiRadarObject_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ContiRadarObject_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ContiRadarObject_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ContiRadarObjectSeq, ContiRadarObject);

    NDDSUSERDllExport
    RTIBool ContiRadarObject_initialize(
        ContiRadarObject* self);

    NDDSUSERDllExport
    RTIBool ContiRadarObject_initialize_ex(
        ContiRadarObject* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ContiRadarObject_initialize_w_params(
        ContiRadarObject* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ContiRadarObject_finalize_w_return(
        ContiRadarObject* self);

    NDDSUSERDllExport
    void ContiRadarObject_finalize(
        ContiRadarObject* self);

    NDDSUSERDllExport
    void ContiRadarObject_finalize_ex(
        ContiRadarObject* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ContiRadarObject_finalize_w_params(
        ContiRadarObject* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ContiRadarObject_finalize_optional_members(
        ContiRadarObject* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ContiRadarObject_copy(
        ContiRadarObject* dst,
        const ContiRadarObject* src);

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
        struct type_code<adas_dds::ContiRadarObject> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ContiRadarObject */

