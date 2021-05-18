

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CornerRadarRawObjects.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CornerRadarRawObjects_1845616555_h
#define CornerRadarRawObjects_1845616555_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "CornerRadarRawObject.h"
namespace adas_dds {

    extern const char *CornerRadarRawObjectsTYPENAME;

    struct CornerRadarRawObjectsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CornerRadarRawObjectsTypeSupport;
    class CornerRadarRawObjectsDataWriter;
    class CornerRadarRawObjectsDataReader;
    #endif
    class CornerRadarRawObjects 
    {
      public:
        typedef struct CornerRadarRawObjectsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CornerRadarRawObjectsTypeSupport TypeSupport;
        typedef CornerRadarRawObjectsDataWriter DataWriter;
        typedef CornerRadarRawObjectsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::CornerRadarRawObjectSeq  object_list ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* CornerRadarRawObjects_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CornerRadarRawObjects_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CornerRadarRawObjects_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CornerRadarRawObjects_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CornerRadarRawObjectsSeq, CornerRadarRawObjects);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObjects_initialize(
        CornerRadarRawObjects* self);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObjects_initialize_ex(
        CornerRadarRawObjects* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObjects_initialize_w_params(
        CornerRadarRawObjects* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CornerRadarRawObjects_finalize_w_return(
        CornerRadarRawObjects* self);

    NDDSUSERDllExport
    void CornerRadarRawObjects_finalize(
        CornerRadarRawObjects* self);

    NDDSUSERDllExport
    void CornerRadarRawObjects_finalize_ex(
        CornerRadarRawObjects* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CornerRadarRawObjects_finalize_w_params(
        CornerRadarRawObjects* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CornerRadarRawObjects_finalize_optional_members(
        CornerRadarRawObjects* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CornerRadarRawObjects_copy(
        CornerRadarRawObjects* dst,
        const CornerRadarRawObjects* src);

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
        struct type_code<adas_dds::CornerRadarRawObjects> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CornerRadarRawObjects */

