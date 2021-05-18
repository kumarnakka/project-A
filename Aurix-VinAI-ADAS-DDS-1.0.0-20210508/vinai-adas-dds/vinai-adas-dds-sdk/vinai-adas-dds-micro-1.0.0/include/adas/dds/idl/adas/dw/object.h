/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from object.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef object_1065708793_h
#define object_1065708793_h

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

    namespace dw {

        extern const char *objectTYPENAME;

        struct objectSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class objectTypeSupport;
        class objectDataWriter;
        class objectDataReader;
        #endif
        class object 
        {
          public:
            typedef struct objectSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef objectTypeSupport TypeSupport;
            typedef objectDataWriter DataWriter;
            typedef objectDataReader DataReader;
            #endif

            DDS_Long   class_id ;
            DDS_Long   sub_class_id ;
            DDS_Float   confidence ;
            DDS_Long   x ;
            DDS_Long   y ;
            DDS_Long   w ;
            DDS_Long   h ;
            DDS_Float   distance ;
            DDS_Float   orientation ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* object_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *object_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *object_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T object
        #define TSeq objectSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T object
        #define TSeq objectSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern object*
        object_create();

        NDDSUSERDllExport extern void
        object_delete(object* sample);

        NDDSUSERDllExport
        RTIBool object_initialize(
            object* self);

        NDDSUSERDllExport
        RTIBool object_initialize_ex(
            object* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool object_initialize_w_params(
            object* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool object_finalize(
            object* self);

        NDDSUSERDllExport
        RTIBool object_finalize_w_return(
            object* self);

        NDDSUSERDllExport
        void object_finalize_ex(
            object* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void object_finalize_w_params(
            object* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void object_finalize_optional_members(
            object* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool object_copy(
            object* dst,
            const object* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dw  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* object */

