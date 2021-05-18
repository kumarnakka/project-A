

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3f.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vector3f_248186045_h
#define Vector3f_248186045_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *Vector3fTYPENAME;

    struct Vector3fSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Vector3fTypeSupport;
    class Vector3fDataWriter;
    class Vector3fDataReader;
    #endif
    class Vector3f 
    {
      public:
        typedef struct Vector3fSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Vector3fTypeSupport TypeSupport;
        typedef Vector3fDataWriter DataWriter;
        typedef Vector3fDataReader DataReader;
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
    NDDSUSERDllExport DDS_TypeCode* Vector3f_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Vector3f_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Vector3f_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Vector3f_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Vector3fSeq, Vector3f);

    NDDSUSERDllExport
    RTIBool Vector3f_initialize(
        Vector3f* self);

    NDDSUSERDllExport
    RTIBool Vector3f_initialize_ex(
        Vector3f* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Vector3f_initialize_w_params(
        Vector3f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Vector3f_finalize_w_return(
        Vector3f* self);

    NDDSUSERDllExport
    void Vector3f_finalize(
        Vector3f* self);

    NDDSUSERDllExport
    void Vector3f_finalize_ex(
        Vector3f* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Vector3f_finalize_w_params(
        Vector3f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Vector3f_finalize_optional_members(
        Vector3f* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Vector3f_copy(
        Vector3f* dst,
        const Vector3f* src);

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
        struct type_code<adas_dds::Vector3f> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Vector3f */

