/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Vector3_2087827963_h
#define Vector3_2087827963_h

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

    namespace geometry_msgs {

        extern const char *Vector3TYPENAME;

        struct Vector3Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Vector3TypeSupport;
        class Vector3DataWriter;
        class Vector3DataReader;
        #endif
        class Vector3 
        {
          public:
            typedef struct Vector3Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Vector3TypeSupport TypeSupport;
            typedef Vector3DataWriter DataWriter;
            typedef Vector3DataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Vector3_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Vector3_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Vector3_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Vector3
        #define TSeq Vector3Seq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Vector3
        #define TSeq Vector3Seq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Vector3*
        Vector3_create();

        NDDSUSERDllExport extern void
        Vector3_delete(Vector3* sample);

        NDDSUSERDllExport
        RTIBool Vector3_initialize(
            Vector3* self);

        NDDSUSERDllExport
        RTIBool Vector3_initialize_ex(
            Vector3* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Vector3_initialize_w_params(
            Vector3* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Vector3_finalize(
            Vector3* self);

        NDDSUSERDllExport
        RTIBool Vector3_finalize_w_return(
            Vector3* self);

        NDDSUSERDllExport
        void Vector3_finalize_ex(
            Vector3* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Vector3_finalize_w_params(
            Vector3* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Vector3_finalize_optional_members(
            Vector3* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Vector3_copy(
            Vector3* dst,
            const Vector3* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace geometry_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Vector3 */

