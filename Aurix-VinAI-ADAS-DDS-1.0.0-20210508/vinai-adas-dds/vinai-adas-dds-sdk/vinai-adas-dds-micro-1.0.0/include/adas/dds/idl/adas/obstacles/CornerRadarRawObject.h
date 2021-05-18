/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CornerRadarRawObject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef CornerRadarRawObject_338630147_h
#define CornerRadarRawObject_338630147_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T CornerRadarRawObject
    #define TSeq CornerRadarRawObjectSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T CornerRadarRawObject
    #define TSeq CornerRadarRawObjectSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern CornerRadarRawObject*
    CornerRadarRawObject_create();

    NDDSUSERDllExport extern void
    CornerRadarRawObject_delete(CornerRadarRawObject* sample);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize(
        CornerRadarRawObject* self);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize_ex(
        CornerRadarRawObject* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_initialize_w_params(
        CornerRadarRawObject* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_finalize(
        CornerRadarRawObject* self);

    NDDSUSERDllExport
    RTIBool CornerRadarRawObject_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CornerRadarRawObject */

