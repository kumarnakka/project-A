/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Quaternion_1529911567_h
#define Quaternion_1529911567_h

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

        extern const char *QuaternionTYPENAME;

        struct QuaternionSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class QuaternionTypeSupport;
        class QuaternionDataWriter;
        class QuaternionDataReader;
        #endif
        class Quaternion 
        {
          public:
            typedef struct QuaternionSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef QuaternionTypeSupport TypeSupport;
            typedef QuaternionDataWriter DataWriter;
            typedef QuaternionDataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;
            DDS_Double   w ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Quaternion_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Quaternion_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Quaternion_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Quaternion
        #define TSeq QuaternionSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Quaternion
        #define TSeq QuaternionSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Quaternion*
        Quaternion_create();

        NDDSUSERDllExport extern void
        Quaternion_delete(Quaternion* sample);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize(
            Quaternion* self);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize_ex(
            Quaternion* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize_w_params(
            Quaternion* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Quaternion_finalize(
            Quaternion* self);

        NDDSUSERDllExport
        RTIBool Quaternion_finalize_w_return(
            Quaternion* self);

        NDDSUSERDllExport
        void Quaternion_finalize_ex(
            Quaternion* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Quaternion_finalize_w_params(
            Quaternion* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Quaternion_finalize_optional_members(
            Quaternion* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Quaternion_copy(
            Quaternion* dst,
            const Quaternion* src);

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

#endif /* Quaternion */

