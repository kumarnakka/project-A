/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Point_727602097_h
#define Point_727602097_h

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

        extern const char *PointTYPENAME;

        struct PointSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PointTypeSupport;
        class PointDataWriter;
        class PointDataReader;
        #endif
        class Point 
        {
          public:
            typedef struct PointSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PointTypeSupport TypeSupport;
            typedef PointDataWriter DataWriter;
            typedef PointDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* Point_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Point_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Point
        #define TSeq PointSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Point
        #define TSeq PointSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Point*
        Point_create();

        NDDSUSERDllExport extern void
        Point_delete(Point* sample);

        NDDSUSERDllExport
        RTIBool Point_initialize(
            Point* self);

        NDDSUSERDllExport
        RTIBool Point_initialize_ex(
            Point* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Point_initialize_w_params(
            Point* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Point_finalize(
            Point* self);

        NDDSUSERDllExport
        RTIBool Point_finalize_w_return(
            Point* self);

        NDDSUSERDllExport
        void Point_finalize_ex(
            Point* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Point_finalize_w_params(
            Point* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Point_finalize_optional_members(
            Point* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Point_copy(
            Point* dst,
            const Point* src);

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

#endif /* Point */

