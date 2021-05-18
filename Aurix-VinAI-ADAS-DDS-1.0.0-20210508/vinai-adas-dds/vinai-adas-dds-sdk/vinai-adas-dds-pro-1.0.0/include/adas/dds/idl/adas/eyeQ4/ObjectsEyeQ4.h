

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectsEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ObjectsEyeQ4_1270630486_h
#define ObjectsEyeQ4_1270630486_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ObjectsEyeQ4_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ObjectsEyeQ4Seq, ObjectsEyeQ4);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize(
        ObjectsEyeQ4* self);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize_ex(
        ObjectsEyeQ4* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_initialize_w_params(
        ObjectsEyeQ4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ObjectsEyeQ4_finalize_w_return(
        ObjectsEyeQ4* self);

    NDDSUSERDllExport
    void ObjectsEyeQ4_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::ObjectsEyeQ4> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectsEyeQ4 */

