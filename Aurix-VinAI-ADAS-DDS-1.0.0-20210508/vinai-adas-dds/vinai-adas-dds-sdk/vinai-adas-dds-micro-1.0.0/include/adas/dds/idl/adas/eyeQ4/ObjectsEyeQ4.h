/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectsEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ObjectsEyeQ4_1270630486_h
#define ObjectsEyeQ4_1270630486_h

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

#include "ObjectEyeQ4.h"

namespace adas_dds {

    extern const char *ObjectsEyeQ4TYPENAME;

    struct ObjectsEyeQ4Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class ObjectsEyeQ4TypeSupport;
    class ObjectsEyeQ4DataWriter;
    class ObjectsEyeQ4DataReader;
    #endif
    class ObjectsEyeQ4 
    {
      public:
        typedef struct ObjectsEyeQ4Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ObjectsEyeQ4TypeSupport TypeSupport;
        typedef ObjectsEyeQ4DataWriter DataWriter;
        typedef ObjectsEyeQ4DataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::ObjectEyeQ4Seq  objects ;
        DDS_Octet   cipv_obj_id ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ObjectsEyeQ4_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ObjectsEyeQ4_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectsEyeQ4_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ObjectsEyeQ4
    #define TSeq ObjectsEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ObjectsEyeQ4
    #define TSeq ObjectsEyeQ4Seq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ObjectsEyeQ4*
    ObjectsEyeQ4_create();

    NDDSUSERDllExport extern void
    ObjectsEyeQ4_delete(ObjectsEyeQ4* sample);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize(
        ObjectsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize_ex(
        ObjectsEyeQ4* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize_w_params(
        ObjectsEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_finalize(
        ObjectsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_finalize_w_return(
        ObjectsEyeQ4* self);

    NDDSUSERDllExport
    void ObjectsEyeQ4_finalize_ex(
        ObjectsEyeQ4* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ObjectsEyeQ4_finalize_w_params(
        ObjectsEyeQ4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ObjectsEyeQ4_finalize_optional_members(
        ObjectsEyeQ4* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_copy(
        ObjectsEyeQ4* dst,
        const ObjectsEyeQ4* src);

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

#endif /* ObjectsEyeQ4 */

