/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HelloWorld.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef HelloWorld_1436885909_h
#define HelloWorld_1436885909_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas {

    namespace dds {

        static const DDS_Long HW_MSG_SIZE = 128;

        static const DDS_Long HW_DATA_SIZE = 64;

        extern const char *HelloWorldTYPENAME;

        struct HelloWorldSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HelloWorldTypeSupport;
        class HelloWorldDataWriter;
        class HelloWorldDataReader;
        #endif
        class HelloWorld 
        {
          public:
            typedef struct HelloWorldSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HelloWorldTypeSupport TypeSupport;
            typedef HelloWorldDataWriter DataWriter;
            typedef HelloWorldDataReader DataReader;
            #endif

            DDS_Long   id ;
            DDS_String   msg ;
            DDS_OctetSeq  data ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* HelloWorld_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *HelloWorld_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *HelloWorld_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T HelloWorld
        #define TSeq HelloWorldSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T HelloWorld
        #define TSeq HelloWorldSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern HelloWorld*
        HelloWorld_create();

        NDDSUSERDllExport extern void
        HelloWorld_delete(HelloWorld* sample);

        NDDSUSERDllExport
        RTIBool HelloWorld_initialize(
            HelloWorld* self);

        NDDSUSERDllExport
        RTIBool HelloWorld_initialize_ex(
            HelloWorld* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool HelloWorld_initialize_w_params(
            HelloWorld* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool HelloWorld_finalize(
            HelloWorld* self);

        NDDSUSERDllExport
        RTIBool HelloWorld_finalize_w_return(
            HelloWorld* self);

        NDDSUSERDllExport
        void HelloWorld_finalize_ex(
            HelloWorld* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void HelloWorld_finalize_w_params(
            HelloWorld* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void HelloWorld_finalize_optional_members(
            HelloWorld* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool HelloWorld_copy(
            HelloWorld* dst,
            const HelloWorld* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dds  */

} /* namespace adas  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HelloWorld */

