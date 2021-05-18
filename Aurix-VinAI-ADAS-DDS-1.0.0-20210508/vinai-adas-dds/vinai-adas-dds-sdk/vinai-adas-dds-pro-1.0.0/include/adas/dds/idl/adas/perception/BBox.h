

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BBox.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BBox_797198919_h
#define BBox_797198919_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *BoxTYPENAME;

    struct BoxSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BoxTypeSupport;
    class BoxDataWriter;
    class BoxDataReader;
    #endif
    class Box 
    {
      public:
        typedef struct BoxSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BoxTypeSupport TypeSupport;
        typedef BoxDataWriter DataWriter;
        typedef BoxDataReader DataReader;
        #endif

        DDS_Short   cls_id ;
        DDS_Float   cls_score ;
        DDS_Short   lc ;
        DDS_Short   tc ;
        DDS_Float   rc ;
        DDS_Float   bc ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Box_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Box_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Box_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Box_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BoxSeq, Box);

    NDDSUSERDllExport
    RTIBool Box_initialize(
        Box* self);

    NDDSUSERDllExport
    RTIBool Box_initialize_ex(
        Box* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Box_initialize_w_params(
        Box* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Box_finalize_w_return(
        Box* self);

    NDDSUSERDllExport
    void Box_finalize(
        Box* self);

    NDDSUSERDllExport
    void Box_finalize_ex(
        Box* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Box_finalize_w_params(
        Box* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Box_finalize_optional_members(
        Box* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Box_copy(
        Box* dst,
        const Box* src);

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
        struct type_code<adas_dds::Box> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BBox */

