/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Point3_1077957029_h
#define Point3_1077957029_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Point3
    #define TSeq Point3Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Point3
    #define TSeq Point3Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Point3*
    Point3_create();

    NDDSUSERDllExport extern void
    Point3_delete(Point3* sample);

    NDDSUSERDllExport
    RTIBool Point3_initialize(
        Point3* self);

    NDDSUSERDllExport
    RTIBool Point3_initialize_ex(
        Point3* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Point3_initialize_w_params(
        Point3* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Point3_finalize(
        Point3* self);

    NDDSUSERDllExport
    RTIBool Point3_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Point3 */

