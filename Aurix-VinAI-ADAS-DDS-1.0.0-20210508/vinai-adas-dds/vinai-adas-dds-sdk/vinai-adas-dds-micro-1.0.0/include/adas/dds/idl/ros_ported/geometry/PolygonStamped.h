/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef PolygonStamped_641454165_h
#define PolygonStamped_641454165_h

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

#include "Polygon.h"

namespace adas_dds {

    namespace geometry_msgs {

        extern const char *PolygonStampedTYPENAME;

        struct PolygonStampedSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PolygonStampedTypeSupport;
        class PolygonStampedDataWriter;
        class PolygonStampedDataReader;
        #endif
        class PolygonStamped 
        {
          public:
            typedef struct PolygonStampedSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PolygonStampedTypeSupport TypeSupport;
            typedef PolygonStampedDataWriter DataWriter;
            typedef PolygonStampedDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::Polygon   polygon ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PolygonStamped_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PolygonStamped_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PolygonStamped_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T PolygonStamped
        #define TSeq PolygonStampedSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T PolygonStamped
        #define TSeq PolygonStampedSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern PolygonStamped*
        PolygonStamped_create();

        NDDSUSERDllExport extern void
        PolygonStamped_delete(PolygonStamped* sample);

        NDDSUSERDllExport
        RTIBool PolygonStamped_initialize(
            PolygonStamped* self);

        NDDSUSERDllExport
        RTIBool PolygonStamped_initialize_ex(
            PolygonStamped* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PolygonStamped_initialize_w_params(
            PolygonStamped* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PolygonStamped_finalize(
            PolygonStamped* self);

        NDDSUSERDllExport
        RTIBool PolygonStamped_finalize_w_return(
            PolygonStamped* self);

        NDDSUSERDllExport
        void PolygonStamped_finalize_ex(
            PolygonStamped* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PolygonStamped_finalize_w_params(
            PolygonStamped* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PolygonStamped_finalize_optional_members(
            PolygonStamped* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PolygonStamped_copy(
            PolygonStamped* dst,
            const PolygonStamped* src);

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

#endif /* PolygonStamped */

