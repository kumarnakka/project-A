/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BBox.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef BBox_797198919_h
#define BBox_797198919_h

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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Box
    #define TSeq BoxSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Box
    #define TSeq BoxSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Box*
    Box_create();

    NDDSUSERDllExport extern void
    Box_delete(Box* sample);

    NDDSUSERDllExport
    RTIBool Box_initialize(
        Box* self);

    NDDSUSERDllExport
    RTIBool Box_initialize_ex(
        Box* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Box_initialize_w_params(
        Box* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Box_finalize(
        Box* self);

    NDDSUSERDllExport
    RTIBool Box_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BBox */

