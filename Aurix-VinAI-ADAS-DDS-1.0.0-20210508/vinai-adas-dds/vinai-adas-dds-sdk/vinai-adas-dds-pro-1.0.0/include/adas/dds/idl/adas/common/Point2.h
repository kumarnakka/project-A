

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point2.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point2_1078880533_h
#define Point2_1078880533_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *Point2TYPENAME;

    struct Point2Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class Point2TypeSupport;
    class Point2DataWriter;
    class Point2DataReader;
    #endif
    class Point2 
    {
      public:
        typedef struct Point2Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Point2TypeSupport TypeSupport;
        typedef Point2DataWriter DataWriter;
        typedef Point2DataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Point2_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Point2_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Point2Seq, Point2);

    NDDSUSERDllExport
    RTIBool Point2_initialize(
        Point2* self);

    NDDSUSERDllExport
    RTIBool Point2_initialize_ex(
        Point2* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Point2_initialize_w_params(
        Point2* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Point2_finalize_w_return(
        Point2* self);

    NDDSUSERDllExport
    void Point2_finalize(
        Point2* self);

    NDDSUSERDllExport
    void Point2_finalize_ex(
        Point2* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Point2_finalize_w_params(
        Point2* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Point2_finalize_optional_members(
        Point2* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Point2_copy(
        Point2* dst,
        const Point2* src);

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
        struct type_code<adas_dds::Point2> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Point2 */

