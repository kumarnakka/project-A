/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Twist.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Twist_1833241662_h
#define Twist_1833241662_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Vector3.h"

namespace adas_dds {

    namespace geometry_msgs {

        extern const char *TwistTYPENAME;

        struct TwistSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TwistTypeSupport;
        class TwistDataWriter;
        class TwistDataReader;
        #endif
        class Twist 
        {
          public:
            typedef struct TwistSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TwistTypeSupport TypeSupport;
            typedef TwistDataWriter DataWriter;
            typedef TwistDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Vector3   linear ;
            adas_dds::geometry_msgs::Vector3   angular ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Twist_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Twist_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Twist_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Twist
        #define TSeq TwistSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Twist
        #define TSeq TwistSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Twist*
        Twist_create();

        NDDSUSERDllExport extern void
        Twist_delete(Twist* sample);

        NDDSUSERDllExport
        RTIBool Twist_initialize(
            Twist* self);

        NDDSUSERDllExport
        RTIBool Twist_initialize_ex(
            Twist* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Twist_initialize_w_params(
            Twist* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Twist_finalize(
            Twist* self);

        NDDSUSERDllExport
        RTIBool Twist_finalize_w_return(
            Twist* self);

        NDDSUSERDllExport
        void Twist_finalize_ex(
            Twist* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Twist_finalize_w_params(
            Twist* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Twist_finalize_optional_members(
            Twist* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Twist_copy(
            Twist* dst,
            const Twist* src);

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

#endif /* Twist */

