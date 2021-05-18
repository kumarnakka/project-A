

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point3_1077957029_h
#define Point3_1077957029_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *Point3TYPENAME;

    struct Point3Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class Point3TypeSupport;
    class Point3DataWriter;
    class Point3DataReader;
    #endif
    class Point3 
    {
      public:
        typedef struct Point3Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Point3TypeSupport TypeSupport;
        typedef Point3DataWriter DataWriter;
        typedef Point3DataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   z ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Point3_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Point3_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point3_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point3_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Point3Seq, Point3);

    NDDSUSERDllExport
    RTIBool Point3_initialize(
        Point3* self);

    NDDSUSERDllExport
    RTIBool Point3_initialize_ex(
        Point3* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Point3_initialize_w_params(
        Point3* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Point3_finalize_w_return(
        Point3* self);

    NDDSUSERDllExport
    void Point3_finalize(
        Point3* self);

    NDDSUSERDllExport
    void Point3_finalize_ex(
        Point3* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Point3_finalize_w_params(
        Point3* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Point3_finalize_optional_members(
        Point3* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Point3_copy(
        Point3* dst,
        const Point3* src);

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
        struct type_code<adas_dds::Point3> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Point3 */

