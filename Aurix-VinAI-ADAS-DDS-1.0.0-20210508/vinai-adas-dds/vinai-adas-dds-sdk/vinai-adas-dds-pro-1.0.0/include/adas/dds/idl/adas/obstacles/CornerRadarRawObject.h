

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CornerRadarRawObject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CornerRadarRawObject_338630147_h
#define CornerRadarRawObject_338630147_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *CornerRadarRawObjectTYPENAME;

    struct CornerRadarRawObjectSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CornerRadarRawObjectTypeSupport;
    class CornerRadarRawObjectDataWriter;
    class CornerRadarRawObjectDataReader;
    #endif
    class CornerRadarRawObject 
    {
      public:
        typedef struct CornerRadarRawObjectSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CornerRadarRawObjectTypeSupport TypeSupport;
        typedef CornerRadarRawObjectDataWriter DataWriter;
        typedef CornerRadarRawObjectDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_Char   id ;
        DDS_Long   age ;
        DDS_Float   angle ;
        DDS_Float   range ;
        DDS_Float   velocity ;
        DDS_Float   height ;
        DDS_Long   quality ;
        DDS_Float   acceleration ;
        DDS_Float   snr ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* CornerRadarRawObject_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CornerRadarRawObject_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CornerRadarRawObject_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CornerRadarRawObject_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CornerRadarRawObjectSeq, CornerRadarRawObject);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize(
        CornerRadarRawObject* self);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize_ex(
        CornerRadarRawObject* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize_w_params(
        CornerRadarRawObject* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_finalize_w_return(
        CornerRadarRawObject* self);

    NDDSUSERDllExport
    void CornerRadarRawObject_finalize(
        CornerRadarRawObject* self);

    NDDSUSERDllExport
    void CornerRadarRawObject_finalize_ex(
        CornerRadarRawObject* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CornerRadarRawObject_finalize_w_params(
        CornerRadarRawObject* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CornerRadarRawObject_finalize_optional_members(
        CornerRadarRawObject* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_copy(
        CornerRadarRawObject* dst,
        const CornerRadarRawObject* src);

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
        struct type_code<adas_dds::CornerRadarRawObject> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CornerRadarRawObject */

